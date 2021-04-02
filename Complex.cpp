#include "pch.h"
#include "Complex.h"

void Complex::print()
{
	std::cout << m_a << " + i" << m_b << std::endl;
}

Complex::Complex(int A, int B)
{
	m_a = A;
	m_b = B;
}