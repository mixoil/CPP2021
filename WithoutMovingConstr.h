#pragma once
class ArrWithoutMovingConstr
{
public:
	ArrWithoutMovingConstr(int length) :m_data(new int[length]), m_length(length) {}
	ArrWithoutMovingConstr(int* data, int length);
	ArrWithoutMovingConstr(const ArrWithoutMovingConstr& arr);
	int* get() { return m_data; }
	int getLength() const { return m_length; }
	int& operator[](int index) { return m_data[index]; }
	const int& operator[](int index) const { return m_data[index]; }
private:
	int* m_data;
	int m_length;
};

