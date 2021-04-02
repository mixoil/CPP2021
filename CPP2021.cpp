#include "pch.h"
#include "Complex.h"
#include "Vector4v.h"
#include "Vector2v.h"
#include "ChessPosition.h"

using namespace System;
using namespace std;


int operator* (Vector2v v1, Vector2v v2)
{
    return v1.get_el(0) * v2.get_el(0) + v1.get_el(1) * v2.get_el(1);
}

int main()
{
    auto c1 = Complex(1, 2);
    c1.print();
    cout << endl;
    auto v1 = Vector4v(1, 2, 3, 4);
    v1.print();
    cout << endl;
    auto cp1 = ChessPosition(2, 3, 0, "rook");
    cp1.print();

    auto v2 = Vector2v(5, 6);
    v2.print();
    auto v3 = Vector2v(7, 8);
    v3.print();
    cout << v2 * v3 << endl;

    //3.1 Для последовательности шахматных ходов подойдёт std::vector, т. к. элементы в нём хранятся в порядке их занесения в него.
    //3.2 Для выявления последнего хода из заданной ячейки подойдёт двумерный массив 8х8, где каждый элемент отображает последний ход из данной ячейки.

    return 0;
}
