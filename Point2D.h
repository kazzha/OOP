#pragma once
#include <iostream>

class Point2D
{
private:
	int mX;
	int mY;

public:
	Point2D() : Point2D(0, 0) // �븮 ������
	{
		std::cout << "<�⺻ ������>" << std::endl;
	}

	Point2D(int x, int y) : mX(x), mY(y)
	{
		std::cout << "<�⺻ ������>" << std::endl;
	}
	~Point2D();

	void Distance() const;
	void Print() const;
	void Input(int x, int y);
};

void Point2D::Print() const
{
	std::cout << "( " << mX << " , " << mY << " )" << std::endl;
}

void Point2D::Distance() const
{
	std::cout << sqrt(std::pow(mX, 2) + std::pow(mY, 2)) << std::endl;
}

void Point2D::Input(int x, int y)
{
	mX = x;
	mY = y;
}