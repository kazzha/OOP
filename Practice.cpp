#include <iostream>
#include "Point2D.h"


// Ŭ���� �ȿ����� �Լ��� ���� ���� ��� ����. �� �������� ���̱� ����
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
	Monster(int level=0, int health =0) : mHealth{ level }, mLevel{ health } // ��� �ʱ�ȭ ����Ʈ
		//�ʱ�ȭ���� mHealth(),mLevel() �̷��� �� ���� ��. �ؿ��� �߰�ȣ�� �Ἥ
	{
		//�̷��� ���� ����� �ʱ�ȭ �����ϴ� �����ڿ����� ��� �ʱ�ȭ ����Ʈ�� ���� ���� ����
	}
	void Print()
	{
		std::cout << "Health : " << mHealth << std::endl;
		std::cout << "Level : " << mLevel << std::endl;
	}
};

// ���� �迭
// Wrapper Class : � ����� Ŭ������ ���δ� ��

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
class Sword; // ���� ����

class Player
{
public:
	void AttackWith(Sword& sword);
};

class Sword
{
	friend void Player::AttackWith(Sword& sword);
	friend void Upgrade(Sword& sword); // �����Լ��� ģ���� ���� -> �ش�Ŭ���� ��� ����� ���� ����

private:
	int mDamage;

public:
	Sword(int dmg) : mDamage(dmg) {}

};

// ����� ���� �и�
void Player::AttackWith(Sword& sword)
{
	std::cout << "Į�� �ֵѷ�" << sword.mDamage << "��ŭ ���ظ� �־���!" << std::endl;
}


// ���� �Լ�
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
		std::cout << " + [�⺻������]" << std::endl;
	}
	MyInt(int value) : mValue{ value }
	{
		std::cout << " + [������] : " << value << std::endl;
	}
	~MyInt()
	{
		std::cout << " - [�Ҹ���] : " << mValue << std::endl;
	}
};

MyInt operator + (MyInt op1, MyInt op2)
{
	return MyInt(op1.mValue + op2.mValue);
}

MyInt Square(MyInt val)
{
	return MyInt(val.mValue * val.mValue);
}
int main()
{
	Point2D pt1{ 2,3 };
	Point2D pt2{ 3,4 };

	Point2D pt3 = pt1 + pt2;

	MyInt x(1), y(2);
	
	Point2D pt7{};

	pt7 = ++pt1;

	pt7[0] = 10;
	pt7[1] = 20;

	Point2D pt9{};
	//
	std::cout << "-----------------" << std::endl;
	std::cout << pt1[0] << ", " << pt2[1] << std::endl;

	std::cout << pt9 << std::endl; // �ٷ� ��� ���� ( << ������ �����ε� ����)
}