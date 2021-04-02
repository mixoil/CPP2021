#include "pch.h"
#include "ChessPosition.h"

ChessPosition::ChessPosition(int x, int y, bool side, char* role)
{
	m_x = x;
	m_y = y;
	m_side = side;
	m_role = role;
}

void ChessPosition::print()
{
	std::cout << get_side() << " " << m_role
		<< " is standing on " << m_x << " " << m_y << std::endl;
}
