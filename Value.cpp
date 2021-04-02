#include "pch.h"
#include "Value.h"

Value::Value(double val)
{
	m_val = val;
}

void Value::print()
{
	std::cout << m_val << " " << typeid(this).name() << std::endl;
}

Value Value::operator* (const Value& iv)
{
	return Value(get_val() * iv.get_val());
}

