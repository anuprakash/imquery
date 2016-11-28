#pragma once

#include "platform.h"
#include "vm.h"

namespace imq
{
	class ConstantExpr : public VExpression
	{
	public:
		ConstantExpr(const QValue& value, const VLocation& loc);
		virtual ~ConstantExpr();

		virtual String getName() const override;
		virtual Result execute(ContextPtr context, QValue* result) override;

	private:
		QValue value;
	};

	class RetrieveVariableExpr : public VExpression
	{
	public:
		RetrieveVariableExpr(const String& variable, const VLocation& loc);
		virtual ~RetrieveVariableExpr();

		virtual String getName() const override;
		virtual Result execute(ContextPtr context, QValue* result) override;

	private:
		String variable;
	};

	class RetrieveFieldExpr : public VExpression
	{
	public:
		RetrieveFieldExpr(VExpression* objExpr, const String& field, const VLocation& loc);
		virtual ~RetrieveFieldExpr();

		virtual String getName() const override;
		virtual Result execute(ContextPtr context, QValue* result) override;

	private:
		VExpression* objExpr;
		String field;
	};

	class RetrieveIndexExpr : public VExpression
	{
	public:
		RetrieveIndexExpr(VExpression* objExpr, VExpression* indexExpr, const VLocation& loc);
		virtual ~RetrieveIndexExpr();

		virtual String getName() const override;
		virtual Result execute(ContextPtr context, QValue* result) override;

	private:
		VExpression* objExpr;
		VExpression* indexExpr;
	};

	class CallFunctionExpr : public VExpression
	{
	public:
		CallFunctionExpr(VExpression* funcExpr, int32_t argC, VExpression** args, const VLocation& loc);
		virtual ~CallFunctionExpr();

		virtual String getName() const override;
		virtual Result execute(ContextPtr context, QValue* result) override;

	private:
		VExpression* funcExpr;
		int32_t argCount;
		VExpression** args;
	};

	class SetVariableStm : public VStatement
	{
	public:
		SetVariableStm(const String& variable, VExpression* valueExpr, const VLocation& loc);
		virtual ~SetVariableStm();

		virtual String getName() const override;
		virtual Result execute(ContextPtr context) override;

	private:
		String variable;
		VExpression* valueExpr;
	};

	class SetFieldStm : public VStatement
	{
	public:
		SetFieldStm(VExpression* objExpr, const String& field, VExpression* valueExpr, const VLocation& loc);
		virtual ~SetFieldStm();

		virtual String getName() const override;
		virtual Result execute(ContextPtr context) override;

	private:
		String field;
		VExpression* objExpr;
		VExpression* valueExpr;
	};

	class SetIndexStm : public VStatement
	{
	public:
		SetIndexStm(VExpression* objExpr, VExpression* indexExpr, VExpression* valueExpr, const VLocation& loc);
		virtual ~SetIndexStm();

		virtual String getName() const override;
		virtual Result execute(ContextPtr context) override;

	private:
		VExpression* indexExpr;
		VExpression* objExpr;
		VExpression* valueExpr;
	};

	class DeleteVariableStm : public VStatement
	{
	public:
		DeleteVariableStm(const String& variable, const VLocation& loc);
		virtual ~DeleteVariableStm();

		virtual String getName() const override;
		virtual Result execute(ContextPtr context) override;

	private:
		String variable;
	};

	class SelectStm : public VStatement
	{
	public:
		SelectStm(VExpression* destExpr, VExpression* srcExpr, VExpression* calcExpr, const VLocation& loc);
		virtual ~SelectStm();

		virtual String getName() const override;
		virtual Result execute(ContextPtr context) override;

	private:
		VExpression* destExpr;
		VExpression* srcExpr;
		VExpression* calcExpr;
	};
}