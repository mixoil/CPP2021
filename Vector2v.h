#pragma once
#include <iostream>

class Vector2v
{
public:
	Vector2v(int a, int b);
	Vector2v(int* elements);
	int get_el(int n) { return m_elements[n]; }
	void set_el(int n, int val) { m_elements[n] = val; }
	void print();
private:
	int m_elements[2];
};