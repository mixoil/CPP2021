#include "pch.h"
#include "Vector4v.h"

Vector4v::Vector4v(int a, int b, int c, int d)
{
	m_elements[0] = a;
	m_elements[1] = b;
	m_elements[2] = c;
	m_elements[3] = d;
}

Vector4v::Vector4v(int* elements)
{
	for (int i = 0; i < 4; i++)
		m_elements[i] = elements[i];
}

void Vector4v::print()
{
	for (int i = 0; i < 4; i++)
		std::cout << m_elements[i] << "\t";
	std::cout << std::endl;
}