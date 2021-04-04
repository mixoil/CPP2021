#include"MovingConstrTests.h"

void MovingConstrTests::make_tests()
{
	test_without_constr();
}

void MovingConstrTests::test_with_constr()//~0.0115 s
{
	Timer t;
	for (int i = 0; i < 10000; i++)
	{
		generate_item_with_moving_constr();
	}
	t.print_elapsed();
}

void MovingConstrTests::test_without_constr()//~0.018 s
{
	Timer t;
	for (int i = 0; i < 10000; i++)
	{
		generate_item_without_moving_constr();
	}
	t.print_elapsed();
}

ArrWithMovingConstr MovingConstrTests::generate_item_with_moving_constr()
{
	ArrWithMovingConstr item(10);
	return item;
}

ArrWithoutMovingConstr MovingConstrTests::generate_item_without_moving_constr()
{
	ArrWithoutMovingConstr item(10);
	return item;
}