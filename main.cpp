#include <iostream>
#include "Player.h"
#include <cmath>
/*
class Galaxy
{
	// state - member vaiable
private:
	char modelName[10];

public:
	int color;
	int weight;

	// behaviour - member function
	void Phone()
	{
		this->color;
		std::cout << "따르릉" << std::endl;
	}
	void Massage()
	{
		std::cout << "메시지" << std::endl;
	}
};

class Computer
{
private:
	int power{};
	char mainboard[10]{};
	
	void Power()
	{
		std::cout << power << std::endl;
	}

public:
	int cost{};
	int color{};

	void Cost()
	{
		std::cout << cost << std::endl;
	}
};
int main()
{
	// instantiate(인스턴스화)
    Galaxy myPhone;

	
}

*/

// 클래스 안에서는 함수의 선언 순서 상관 없음. 한 블럭으로 묶이기 때문
/*
class AirConditioner
{
	int mTemperature;

public:
	int GetTemperature() const
	{
		return mTemperature;
	}
};
int main()
{
	Player wolf;

	Player::Sword s1;
	Player::Costume costume = Player::Costume::Summer;

	AirConditioner myHouse;

}
*/

class Coordinate
{
	double mX;
	double mY;

public:
	void Distance() const ;
	void Print() const;
	void Input(double x, double y);
};

void Coordinate::Print() const
{
	std::cout << "( " << mX << " , " << mY << " )" << std::endl;
}

void Coordinate::Distance() const
{
	std::cout << std::sqrt(std::pow(mX,2)+std::pow(mY,2)) << std::endl;
}

void Coordinate::Input(double x, double y)
{
	mX = x;
	mY = y;
}

int main()
{
	double x{}, y{};
	Coordinate point;
	std::cin >> x >> y;
	std::cout << std::endl;
	point.Input(x, y);
	point.Distance();
	point.Print();
}