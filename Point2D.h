#pragma once
#include <iostream>

class Point2D
{
private:
	int mX;
	int mY;

public:
	Point2D() : Point2D(0, 0) // 대리 생성자
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

	/// ---------- ++ 연산자 오버로딩
	friend const Point2D& operator ++ (Point2D& arg1)
	{
		arg1.mX++;
		arg1.mY++;

		return arg1;
	}

	// ----------- -- 연산자 오버로딩
	 Point2D& operator -- ()
	{
		mX--;
		mY--;

		return *this;
	}

	 // ----------- 후위 연산자: 전역 친구 함수
	 friend const Point2D& operator++ (Point2D& arg1, int v) // 뒤에는 아무 매개변수나 추가;
	 {
		 //대입 후
		 Point2D temp(arg1.mX, arg1.mY);

		 // 증가
		 arg1.mX++;
		 arg1.mY++;

		 return temp;
	 }

	 // ----------- 후위 연산자 : 멤버 함수
	 Point2D operator -- (int v)
	 {
		 // 대입 후
		 Point2D temp(mX, mY);

		 // 감소
		 mX--;
		 mY--;

		 return temp;
	 }
	 // ----------- [] - member function
	 int& operator [] (int index)
	 {
		 switch (index)
		 {
		 case 0:
			 return mX;
			 break;

		 case 1:
			 return mY;
			 break;

		 default:
			 std::cerr << "Index must be 0 or 1" << std::endl;
			 break;
		 }

		 return mX;
	 }

	 operator double() // 형변환 연산자: 연산자 이름이 반환타입이 됨. 붙이면 오히려 오류
	 {
		 return sqrt(mX * mX + mY * mY);
	 }

	 // 함수 호출 연산자
	 void operator () ()
	 {
		 mX = mY = 0;
	 }

	 void operator() (int x, int y)
	 {
		 mX = x;
		 mY = y;
	 }

	 // 스트림 연산자
	 friend std::ostream& operator << (std::ostream& os,Point2D pt)
	 {
		 os << "(" << pt.mX << "," << pt.mY << ")";

		 return os;
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