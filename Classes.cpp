#include "pch.h"
#include "libraries.h"
#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"

void Child::Input()
{
	cout << "Input name: ";
	cin >> name;
	cout << "Input surname: ";
	cin >> surname;
	cout << "Input age: ";
	cin >> age;
}
void Child::Print()
{
	cout << name << " " << surname << " " << age << endl;
}

void Tiles::getData()
{
	cout << "--Tile--\n";
	cout << "Brand: " << brand << endl;
	cout << "Size_h: " << size_h << endl;
	cout << "Size_w: " << size_w << endl;
	cout << "Price: " << price << endl;
}

double Vector::Module()
{
	return sqrt(x * x + y * y);
}
Vector Vector::Plus(Vector n)
{
	Vector result;
	result.x = x + n.x;
	result.y + y + n.y;
	return result;
}
Vector Vector::Minus(Vector n)
{
	Vector result;
	result.x = x - n.x;
	result.y + y - n.y;
	return result;
}

double Complex::Module()
{
	return sqrt(a * a + b * b);
}
void Complex::Arguments()
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}