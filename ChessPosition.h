#pragma once
#include <iostream>

class ChessPosition
{
public:
	ChessPosition(int x, int y, bool side, char* role);
	int get_x() { return m_x; }
	int get_y() { return m_y; }
	char* get_side() { if (m_side) return "White"; else return "Black"; }
	char* get_role() { return m_role; }
	void print();
private:
	int m_x;
	int m_y;
	bool m_side;//false - Black, True - White
	char* m_role;
};