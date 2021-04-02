
#ifndef VALUE_H
#define VALUE_H
#include <iostream>
#include <string>
/*#include "P.h"
#include "S.h"
#include "F.h"*/

class Value
{
public:
	Value(double val);
	double get_val() const { return m_val; }
	void print();
	Value operator* (const Value& iv);
	/*Value operator/ (const Value& iv);
	Value operator+ (const Value& iv);
	Value operator- (const Value& iv);*/
private:
	double m_val;
	std::string m_short_name;
};

#endif