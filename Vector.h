#pragma once


class Vector
{
private:
	int x;
	int y;
public:
	double Module();
	Vector Plus(Vector n);
	Vector Minus(Vector n);
};