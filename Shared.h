#pragma once

class Shared
{
public:
	Shared(int data);
	~Shared() {};
	int get() { return m_data; }
private:
	int m_data;
};

