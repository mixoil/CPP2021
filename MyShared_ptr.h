#pragma once
#include <iostream>
#include "Shared.h"

class MyShared_ptr
{
public:
	MyShared_ptr();
	MyShared_ptr(const MyShared_ptr& ptr) : MyShared_ptr() {}
	~MyShared_ptr();
	static MyShared_ptr make_shared(Shared* ptr);
	const int get_val();
	int use_count();
	void reset();
	bool unique();
private:
	int m_num = 0;
	static int m_counter;
	static Shared* m_ptr;
};

//int MyShared_ptr::m_counter = 0;
//Shared* MyShared_ptr::m_ptr = nullptr;



