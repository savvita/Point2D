#pragma once

class c_Point2D
{
private:
	int coordX;
	int coordY;

public:
	c_Point2D();

	c_Point2D(int x, int y);

	//gets
	inline int getX() const
	{
		return this->coordX;
	}

	inline int getY() const
	{
		return this->coordY;
	}

	c_Point2D operator+(c_Point2D other) const;

	c_Point2D operator-(c_Point2D other) const;

	c_Point2D operator*(c_Point2D other) const;
	
	c_Point2D operator/(c_Point2D other) const;
};

