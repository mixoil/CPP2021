#include "pch.h"
#include "Vector2v.h"

Vector2v::Vector2v(int a, int b)
{
	m_elements[0] = a;
	m_elements[1] = b;
}

Vector2v::Vector2v(int* elements)
{
	for (int i = 0; i < 2; i++)
		m_elements[i] = elements[i];
}

void Vector2v::print()
{
	for (int i = 0; i < 2; i++)
		std::cout << m_elements[i] << "\t";
	std::cout << std::endl;
}