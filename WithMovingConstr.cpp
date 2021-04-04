#include "WithMovingConstr.h"

ArrWithMovingConstr::ArrWithMovingConstr(int* data, int length)
{
	m_data = data;
	m_length = length;
}

ArrWithMovingConstr::ArrWithMovingConstr(ArrWithMovingConstr&& arr)
	: m_length(arr.m_length), m_data(arr.m_data)
{
	arr.m_length = 0;
	arr.m_data = nullptr;
}