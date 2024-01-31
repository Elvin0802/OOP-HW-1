#pragma once

class Fraction
{	//	   suret	    mexrec
	int _numerator, _denominator;

public:

	Fraction(int numer, int denom);
	void SetNumer(int numer);
	void SetDenom(int denom);
	int GetNumer();
	int GetDenom();
	Fraction Multiply(const Fraction& other);
	Fraction Add(const Fraction& other);
	Fraction Minus(const Fraction& other);
	Fraction Divide(const Fraction& other);
	void Simplify();

};


class Point
{
	int _x, _y;

public:

	Point();
	Point(int valueX, int valueY);
	void Set_X(int valueX);
	void Set_Y(int valueY);
	int Get_X();
	int Get_Y();
	void Print();

};


class Counter
{
	int _min, _max, _currentValue;

public:

	Counter();
	Counter(int minValue, int maxValue);
	void Set_Min(int valueMin);
	void Set_Max(int valueMax);
	void Set_Current(int valueCurrent);
	int Get_Min();
	int Get_Max();
	int Get_Current();
	void increment();
	void decrement();

};
