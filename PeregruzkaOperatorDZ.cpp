// PeregruzkaOperatorDZ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// peregruzkaOperationVvedenie.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<time.h>
using namespace std;

class Point
{
	int z;
	int x;
public:
	Point()
	{
		cout << "Construct\n";
		z = x = 0;
	}
	Point(int z1, int x1)
	{
		cout << "Construct by 2 param\n";
		z = z1;
		x = x1;
	}
	void Init()
	{
		z = rand() % 10;
		x = rand() % 10;
	}
	void Init(int z1, int x1)
	{
		z = z1;
		x = x1;
	}
	void Output()
	{
		cout << "Z: " << z << "\tX: " << x << endl;
	}
	Point operator+(Point& b)
	{
		Point temp;
		temp.z = this->z + b.z;
		temp.x = this->x + b.x;
		return temp;
	}
	Point operator-(Point& b)
	{
		Point temp;
		temp.z = this->z - b.z;
		temp.x = this->x - b.x;
		return temp;
	}
	Point operator*(Point& b)
	{
		Point temp;
		temp.z = this->z * b.z;
		temp.x = this->x * b.x;
		return temp;
	}
	Point operator/(Point& b)
	{
		Point temp;
		temp.z = this->z / b.z;
		temp.x = this->x / b.x;
		return temp;
	}

	Point operator+(int a)
	{
		Point temp(z + a, x + a);
		return temp;
	}

	Point operator*(int a)
	{
		Point temp(z * a, x * a);
		return temp;
	}

	Point operator/(int a)
	{
		Point temp(z / a, x / a);
		return temp;
	}
};
int main()
{
	srand(unsigned(time(0)));
	Point a(6, 8);
	Point b(3, 4);
	Point c = a / 2;
	c.Output();
}