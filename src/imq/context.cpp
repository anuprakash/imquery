#include "context.h"

#include "errors.h"

namespace imq
{
	Context::~Context()
	{
	}

	SimpleContext::~SimpleContext()
	{

	}

	bool SimpleContext::hasValue(const String& key) const
	{
		return values.find(key) != values.end();
	}

	Result SimpleContext::getValue(const String& key, QValue* result) const
	{
		auto found = values.find(key);
		if (found == values.end())
		{
			return errors::context_undefined_value(key);
		}

		*result = found->second;
		return true;
	}

	Result SimpleContext::setValue(const String& key, const QValue& value)
	{
		values[key] = value;
		return true;
	}

	Result SimpleContext::deleteValue(const String& key)
	{
		auto found = values.find(key);
		if (found == values.end())
			return errors::context_undefined_value(key);

		values.erase(key);
		return true;
	}

	Result SimpleContext::registerInput(const String& key, const QValue& value)
	{
		return errors::context_root_flags();
	}

	Result SimpleContext::registerOutput(const String& key, const QValue& value)
	{
		return errors::context_root_flags();
	}

	bool RootContext::hasValue(const String& key) const
	{
		return values.find(key) != values.end() || inputs.find(key) != inputs.end() || outputs.find(key) != outputs.end();
	}

	Result RootContext::getValue(const String& key, QValue* result) const
	{
		auto found = inputs.find(key);
		if (found != inputs.end())
		{
			*result = found->second;
			return true;
		}

		found = outputs.find(key);
		if (found != outputs.end())
		{
			*result = found->second;
			return true;
		}

		found = values.find(key);
		if (found != values.end())
		{
			*result = found->second;
			return true;
		}

		return errors::context_undefined_value(key);
	}

	Result RootContext::setValue(const String& key, const QValue& value)
	{
		if (inputs.find(key) != inputs.end())
		{
			return errors::context_input_set();
		}

		if (outputs.find(key) != outputs.end())
		{
			return errors::context_output_set();
		}

		values[key] = value;
		return true;
	}

	Result RootContext::deleteValue(const String& key)
	{
		if (inputs.find(key) != inputs.end())
		{
			return errors::context_input_delete();
		}

		if (outputs.find(key) != outputs.end())
		{
			return errors::context_output_delete();
		}

		auto found = values.find(key);
		if (found == values.end())
			return errors::context_undefined_value(key);

		values.erase(key);
		return true;
	}

	Result RootContext::registerInput(const String& key, const QValue& value)
	{
		if (inputs.find(key) != inputs.end())
		{
			return errors::context_input_set();
		}

		inputs[key] = value;
		return true;
	}

	Result RootContext::registerOutput(const String& key, const QValue& value)
	{
		if (outputs.find(key) != outputs.end())
		{
			return errors::context_output_set();
		}

		outputs[key] = value;
		return true;
	}

	void RootContext::setInput(const String& key, const QValue& value)
	{
		inputs[key] = value;
	}

	void RootContext::setOutput(const String& key, const QValue& value)
	{
		outputs[key] = value;
	}

	const std::unordered_map<String, QValue>& RootContext::getInputs() const
	{
		return inputs;
	}

	const std::unordered_map<String, QValue>& RootContext::getOutputs() const
	{
		return outputs;
	}

	SubContext::SubContext(ContextPtr parent)
		: parent(parent), Context()
	{
	}

	SubContext::~SubContext()
	{
	}

	ContextPtr SubContext::getParent() const
	{
		return parent;
	}

	bool SubContext::hasValue(const String& key) const
	{
		if (values.find(key) != values.end())
			return true;

		return parent && parent->hasValue(key);
	}

	Result SubContext::getValue(const String& key, QValue* result) const
	{
		auto found = values.find(key);
		if (found == values.end())
		{
			if (parent)
				return parent->getValue(key, result);
			else
				return errors::context_undefined_value(key);
		}

		*result = found->second;
		return true;
	}

	Result SubContext::setValue(const String& key, const QValue& value)
	{
		values[key] = value;
		return true;
	}

	Result SubContext::deleteValue(const String& key)
	{
		auto found = values.find(key);
		if (found == values.end())
		{
			if (parent)
				return parent->deleteValue(key);
			else
				return errors::context_undefined_value(key);
		}

		values.erase(found);
		return true;
	}

	Result SubContext::registerInput(const String& key, const QValue& value)
	{
		return errors::context_root_flags();
	}

	Result SubContext::registerOutput(const String& key, const QValue& value)
	{
		return errors::context_root_flags();
	}

	RestrictedSubContext::RestrictedSubContext(ContextPtr parent)
		: SubContext(parent)
	{
	}

	RestrictedSubContext::~RestrictedSubContext()
	{
	}

	void RestrictedSubContext::setRawValue(const String& key, const QValue& value)
	{
		values[key] = value;
	}

	Result RestrictedSubContext::setValue(const String& key, const QValue& value)
	{
		return errors::context_no_write_access();
	}

	Result RestrictedSubContext::deleteValue(const String& key)
	{
		return errors::context_no_delete_access();
	}
}