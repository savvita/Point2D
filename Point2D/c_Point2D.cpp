#include "c_Point2D.h"
#include<iostream>

c_Point2D::c_Point2D()
{
	this->coordX = this->coordY = 0;
}

c_Point2D::c_Point2D(int x, int y)
{
	this->coordX = x;
	this->coordY = y;
}

c_Point2D c_Point2D::operator+(c_Point2D other) const
{
	return c_Point2D(this->coordX + other.getX(), this->coordY + other.getY());
}

c_Point2D c_Point2D::operator-(c_Point2D other) const
{
	return c_Point2D(this->coordX - other.getX(), this->coordY - other.getY());
}

c_Point2D c_Point2D::operator*(c_Point2D other) const
{
	return c_Point2D(this->coordX * other.getX(), this->coordY * other.getY());
}

c_Point2D c_Point2D::operator/(c_Point2D other) const
{
	return c_Point2D(this->coordX / other.getX(), this->coordY / other.getY());
}

bool c_Point2D::operator<(c_Point2D other) const
{
	return (this->coordX < other.getX()) && (this->coordY < other.getY());
}

bool c_Point2D::operator>(c_Point2D other) const
{
	return !(*this < other);
}

bool c_Point2D::operator<=(c_Point2D other) const
{
	return !(*this > other);
}

bool c_Point2D::operator>=(c_Point2D other) const
{
	return !(*this < other);
}

bool c_Point2D::operator==(c_Point2D other) const
{
	return (this->coordX == other.getX()) && (this->coordY == other.getY());
}

bool c_Point2D::operator!=(c_Point2D other) const
{
	return !(*this == other);
}

void c_Point2D::Show() const
{
	std::cout << "x: " << this->coordX << "\ty: " << this->coordY << "\n";
}
