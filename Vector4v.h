#pragma once
#include <iostream>

class Vector4v
{
public:
	Vector4v(int a, int b, int c, int d);
	Vector4v(int* elements);
	int get_el(int n) { return m_elements[n]; }
	void set_el(int n, int val) { m_elements[n] = val; }
	void print();
private:
	int m_elements[4];
};