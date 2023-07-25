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
		
	}

	Point2D(int x, int y) : mX(x), mY(y)
	{
	
	}
	~Point2D(){}

	void Distance() const;
	void Print() const;
	void Input(int x, int y);

	friend Point2D operator + (Point2D arg1, Point2D arg2);

	Point2D operator - (const Point2D& op)
	{
		return Point2D(mX - op.mX, mY - op.mY);
	}

	/// ---------- ++ ������ �����ε�
	friend const Point2D& operator ++ (Point2D& arg1)
	{
		arg1.mX++;
		arg1.mY++;

		return arg1;
	}

	// ----------- -- ������ �����ε�
	 Point2D& operator -- ()
	{
		mX--;
		mY--;

		return *this;
	}

	 // ----------- ���� ������: ���� ģ�� �Լ�
	 friend const Point2D& operator++ (Point2D& arg1, int v) // �ڿ��� �ƹ� �Ű������� �߰�;
	 {
		 //���� ��
		 Point2D temp(arg1.mX, arg1.mY);

		 // ����
		 arg1.mX++;
		 arg1.mY++;

		 return temp;
	 }

	 // ----------- ���� ������ : ��� �Լ�
	 Point2D operator -- (int v)
	 {
		 // ���� ��
		 Point2D temp(mX, mY);

		 // ����
		 mX--;
		 mY--;

		 return temp;
	 }
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

Point2D operator + (Point2D arg1, Point2D arg2)
{
	Point2D result;

	result.mX = arg1.mX + arg2.mX;
	result.mY = arg1.mY + arg2.mY;

    return result;
}