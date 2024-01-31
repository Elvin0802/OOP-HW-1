#pragma once

Fraction::Fraction(int numer, int denom)
{
	SetNumer(numer); SetDenom(denom);
}

void Fraction::SetNumer(int numer) {
	if (numer != 0) {
		this->_numerator = numer;
	}
}

void Fraction::SetDenom(int denom) {
	if (denom != 0) {
		this->_denominator = denom;
	}
}

int Fraction::GetNumer() { return this->_numerator; }

int Fraction::GetDenom() { return this->_denominator; }

Fraction Fraction::Multiply(const Fraction& other)
{
	int newNumer, newDenom;

	newNumer = (this->_numerator) * (other._numerator);
	newDenom = (this->_denominator) * (other._denominator);

	return Fraction(newNumer, newDenom);
}

Fraction Fraction::Add(const Fraction& other)
{
	int newNumer, newDenom;

	newDenom = (this->_denominator) * (other._denominator);

	newNumer = (this->_numerator * other._denominator) + (this->_denominator * other._numerator);

	return Fraction(newNumer, newDenom);
}

Fraction Fraction::Minus(const Fraction& other)
{
	int newNumer, newDenom;

	newDenom = (this->_denominator) * (other._denominator);

	newNumer = (this->_numerator * other._denominator) - (this->_denominator * other._numerator);

	return Fraction(newNumer, newDenom);
}

Fraction Fraction::Divide(const Fraction& other)
{
	int newNumer, newDenom;

	newNumer = (this->_numerator) * (other._denominator);
	newDenom = (this->_denominator) * (other._numerator);

	return Fraction(newNumer, newDenom);
}

void Fraction::Simplify()
{
	int gcd, copyDenom, temp;

	gcd = GetNumer();
	copyDenom = GetDenom();

	while (copyDenom != 0) {
		temp = copyDenom;
		copyDenom = gcd % copyDenom;
		gcd = temp;
	}

	SetNumer(_numerator / gcd);
	SetDenom(_denominator / gcd);
}


// =====================================================================


Point::Point() {
	Set_X(0);
	Set_Y(0);
}

Point::Point(int valueX, int valueY)
{
	Set_X(valueX);
	Set_Y(valueY);
}

void Point::Set_X(int valueX) {
	if (valueX >= 0) {
		this->_x = valueX;
	}
	else { cout << "\nX Don't Setted.\n"; }
}

void Point::Set_Y(int valueY) {
	if (valueY >= 0) {
		this->_y = valueY;
	}
	else { cout << "\nY Don't Setted.\n"; }
}

int Point::Get_X() {
	return this->_x;
}

int Point::Get_Y() {
	return this->_y;
}

void Point::Print() {

	cout << "\nValue of X : " << this->_x << endl;
	cout << "\nValue of Y : " << this->_y << endl;
}


// =====================================================================


Counter::Counter() {
	Set_Max(10);
	Set_Min(0);
	Set_Current(1);
}

Counter::Counter(int minValue, int maxValue) {
	Set_Max(maxValue);
	Set_Min(minValue);
	Set_Current(minValue);
}

void Counter::Set_Min(int valueMin) {
	if (valueMin < this->_max) {
		this->_min = valueMin;
	}
	else cout << "\nMin Value Don't Setted.\n";
}

void Counter::Set_Max(int valueMax) {
	this->_max = valueMax;
}

void Counter::Set_Current(int valueCurrent) {
	if (valueCurrent >= _min && valueCurrent <= _max)
		this->_currentValue = valueCurrent;
	else cout << "\nCurrent Value Don't Setted.\n";
}

int Counter::Get_Min() {
	return this->_min;
}

int Counter::Get_Max() {
	return this->_max;
}

int Counter::Get_Current() {
	return this->_currentValue;
}

void Counter::increment() {
	if (_currentValue < _max)
		this->_currentValue++;

	if (_currentValue == _max)
		this->_currentValue = this->_min;
}

void Counter::decrement() {
	if (_currentValue > _min)
		this->_currentValue--;
}