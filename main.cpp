#include <iostream>
#include "Point2D.h"


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
/*
int main()
{
	int x{}, y{};
	Point2D point;
	std::cin >> x >> y;
	std::cout << std::endl;
	point.Input(x, y);
	point.Distance();
	point.Print();
}


class Monster
{
private:
	const int mHealth;
	const int mLevel;

public:
	 // default constructor
	Monster(int level=0, int health =0) : mHealth{ level }, mLevel{ health } // 멤버 초기화 리스트
		//초기화에는 mHealth(),mLevel() 이렇게 더 많이 씀. 밑에도 중괄호를 써서
	{
		//이렇게 쓰면 상수도 초기화 가능하니 생성자에서는 멤버 초기화 리스트를 쓰는 것이 좋다
	}
	void Print()
	{
		std::cout << "Health : " << mHealth << std::endl;
		std::cout << "Level : " << mLevel << std::endl;
	}
};

// 동적 배열
// Wrapper Class : 어떤 기능을 클래스로 감싸는 것

class MyArray
{
private:
	int* mArray;
	int mLength;

public:
	MyArray(int len) : mLength(len), mArray{ new int[len] {} }
	{

	}
	~MyArray()
	{
		delete[] mArray;
	}
};
int main()
{
	MyArray array{ 100 };
}

*/

/*
class Sword; // 전방 선언

class Player
{
public:
	void AttackWith(Sword& sword);
};

class Sword
{
	friend void Player::AttackWith(Sword& sword);
	friend void Upgrade(Sword& sword); // 전역함수를 친구로 지정 -> 해당클래스 모든 멤버에 접근 가능

private:
	int mDamage;

public:
	Sword(int dmg) : mDamage(dmg) {}

};

// 선언과 정의 분리
void Player::AttackWith(Sword& sword)
{
	std::cout << "칼을 휘둘러" << sword.mDamage << "만큼 피해를 주었다!" << std::endl;
}


// 전역 함수
void Upgrade(Sword& sword)
{
	int oldDamage = sword.mDamage;
	std::cout << oldDamage << " -> " << (sword.mDamage += sword.mDamage) << std::endl;
}

int main()
{
	Sword muramasa{ 10 };
	Player p1;

	p1.AttackWith(muramasa);
	Upgrade(muramasa);
}

*/

class MyInt
{
public:
	int mValue;

	MyInt() : mValue()
	{
		std::cout << " + [기본생성자]" << std::endl;
	}
	MyInt(int value) : mValue{ value }
	{
		std::cout << " + [생성자] : " << value << std::endl;
	}
	~MyInt()
	{
		std::cout << "-[소멸자 : " << mValue << std::endl;
	}
};

MyInt operator + (MyInt op1, MyInt op2)
{
	return MyInt(op1.mValue + op2.mValue);
}

int main()
{
	Point2D pt1{ 2,3 };
	Point2D pt2{ 3,4 };

	Point2D pt3 = pt1 + pt2;

	MyInt x(1), y(2);
	
}