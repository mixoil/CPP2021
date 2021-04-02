#pragma once
#include <iostream>

class Complex
{
public:
	Complex(int A, int B);
	int get_A() const { return m_a; }
	int get_B() const { return m_b; }
	void set_A(int a) { m_a = a; }
	void set_B(int b) { m_b = b; }
	void print();
private:
	int m_a;
	int m_b;
};