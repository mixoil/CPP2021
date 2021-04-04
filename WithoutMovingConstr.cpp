#include "WithoutMovingConstr.h"

ArrWithoutMovingConstr::ArrWithoutMovingConstr(int* data, int length)
{
	m_data = data;
	m_length = length;
}

ArrWithoutMovingConstr::ArrWithoutMovingConstr(const ArrWithoutMovingConstr& arr) : m_length(arr.m_length)
{
	m_data = new int[m_length];
	for (int i = 0; i < m_length; ++i)
		m_data[i] = arr.m_data[i];
}