
#include "MyShared_ptr.h"

MyShared_ptr MyShared_ptr::make_shared(Shared* ptr)
{
	m_ptr = ptr;
	m_counter = 0;
	return MyShared_ptr();
}

MyShared_ptr::MyShared_ptr()
{
	m_counter++;
}

MyShared_ptr::~MyShared_ptr()
{
	m_counter--;
	if (m_counter == 0)
		delete m_ptr;
}

const int MyShared_ptr::get_val()
{
	return m_ptr->get();
}

int MyShared_ptr::use_count()
{
	return m_counter;
}

void MyShared_ptr::reset()
{
	this->~MyShared_ptr();
}

bool MyShared_ptr::unique()
{
	return m_counter == 1;
}
