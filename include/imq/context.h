#pragma once

#include "platform.h"
#include "result.h"
#include "value.h"

#include <unordered_map>
#include <memory>

namespace imq
{
	class Context
	{
	public:
		virtual ~Context();

		virtual bool hasValue(const String& key) const = 0;
		virtual Result getValue(const String& key, QValue* result) const = 0;
		virtual Result setValue(const String& key, const QValue& value) = 0;
		virtual Result deleteValue(const String& key) = 0;

		virtual Result registerInput(const String& key, const QValue& value) = 0;
		virtual Result registerOutput(const String& key, const QValue& value) = 0;

		virtual Result setBreakable(bool bValue) = 0;
		virtual bool isBreakable() const = 0;

		virtual Result breakContext() = 0;
		virtual bool isContextBroken() const = 0;
	};

	typedef std::shared_ptr<Context> ContextPtr;

	// A simple form of context. This stores values in an unordered_map and allows both read and write access.
	// This type of context is generally used as the root context.
	class SimpleContext : public Context
	{
	public:
		virtual ~SimpleContext();

		virtual bool hasValue(const String& key) const override;
		virtual Result getValue(const String& key, QValue* result) const override;
		virtual Result setValue(const String& key, const QValue& value) override;
		virtual Result deleteValue(const String& key) override;
		virtual Result registerInput(const String& key, const QValue& value) override;
		virtual Result registerOutput(const String& key, const QValue& value) override;
		virtual Result setBreakable(bool bValue) override;
		virtual bool isBreakable() const override;
		virtual Result breakContext() override;
		virtual bool isContextBroken() const override;

	protected:
		std::unordered_map<String, QValue> values;
		bool bBreakable = false;
		bool bBroken = false;
	};

	class RootContext : public Context
	{
	public:
		virtual bool hasValue(const String& key) const override;
		virtual Result getValue(const String& key, QValue* result) const override;
		virtual Result setValue(const String& key, const QValue& value) override;
		virtual Result deleteValue(const String& key) override;
		virtual Result registerInput(const String& key, const QValue& value) override;
		virtual Result registerOutput(const String& key, const QValue& value) override;
		virtual Result setBreakable(bool bValue) override;
		virtual bool isBreakable() const override;
		virtual Result breakContext() override;
		virtual bool isContextBroken() const override;

		void setInput(const String& key, const QValue& value);
		void setOutput(const String& key, const QValue& value);

		const std::unordered_map<String, QValue>& getInputs() const;
		const std::unordered_map<String, QValue>& getOutputs() const;

	protected:
		std::unordered_map<String, QValue> values;
		std::unordered_map<String, QValue> inputs;
		std::unordered_map<String, QValue> outputs;
	};

	// A context that has a parent and passes undefined get/deletes to it.
	class SubContext : public Context
	{
	public:
		SubContext(ContextPtr parent);
		virtual ~SubContext();

		ContextPtr getParent() const;

		virtual bool hasValue(const String& key) const override;
		virtual Result getValue(const String& key, QValue* result) const override;
		virtual Result setValue(const String& key, const QValue& value) override;
		virtual Result deleteValue(const String& key) override;
		virtual Result registerInput(const String& key, const QValue& value) override;
		virtual Result registerOutput(const String& key, const QValue& value) override;
		virtual Result setBreakable(bool bValue) override;
		virtual bool isBreakable() const override;
		virtual Result breakContext() override;
		virtual bool isContextBroken() const override;

	protected:
		ContextPtr parent;
		std::unordered_map<String, QValue> values;
		bool bBreakable = false;
		bool bBroken = false;
	};

	class RestrictedSubContext : public SubContext
	{
	public:
		RestrictedSubContext(ContextPtr parent);
		virtual ~RestrictedSubContext();

		// Allows you to bypass the lock on setValue
		void setRawValue(const String& key, const QValue& value);

		virtual Result setValue(const String& key, const QValue& value) override;
		virtual Result deleteValue(const String& key) override;
	};
}