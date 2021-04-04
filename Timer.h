#pragma once
#include <chrono>
#include <iostream>

// этот класс я украл из интернета
class Timer
{
private:
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1> >;
	std::chrono::time_point<clock_t> m_beg;
public:
	Timer();
	void reset();
	double elapsed() const;
	void print_elapsed();
};

