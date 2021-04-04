#include <iostream>
#include "MyShared_ptr.h"
#include "MovingConstrTests.h"
using namespace std;

int MyShared_ptr::m_counter = 0; 
Shared* MyShared_ptr::m_ptr = nullptr;

void delete_some_ptrs(MyShared_ptr* sp1)
{
	auto sp3(*sp1);
	auto sp4(sp3);
	cout << sp3.use_count() << endl;
}

int main()
{
	auto sp1 = MyShared_ptr::make_shared(new Shared(715));
	auto sp2(sp1);
	delete_some_ptrs(&sp1);
	cout << sp1.use_count() << endl;
	sp1.reset();
	cout << sp2.use_count() << endl;
	cout << sp2.unique() << endl;
	cout << sp2.get_val() << endl;
	return 0;
}
