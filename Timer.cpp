#include "Timer.h"

Timer::Timer() : m_beg(clock_t::now())
{
}

void Timer::reset()
{
	m_beg = clock_t::now();
}

double Timer::elapsed() const
{
	return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
}

void Timer::print_elapsed()
{
	std::cout << "Time elapsed: " << elapsed() << '\n';
}