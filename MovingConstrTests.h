#pragma once
#include <iostream>
#include"WithMovingConstr.h"
#include"WithoutMovingConstr.h"
#include "Timer.h"

class MovingConstrTests
{
public:
	void make_tests();
	void test_with_constr();
	void test_without_constr();
	ArrWithMovingConstr generate_item_with_moving_constr();
	ArrWithoutMovingConstr generate_item_without_moving_constr();
};