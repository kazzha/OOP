#pragma once
#include <iostream>

class Player
{
public:
	class Sword
	{
		int mPrice;
		int mAttack;
	};

	enum Costume
	{
		Hunter = 1,
		Summer = 2,
		Winter = 3
	};

private:
	int mHealth;
	int mAttack;

public:
	Player() : mHealth(0), mAttack(0) 
	{}
	~Player() {}

	void Walk();
	void Run();
	void Jump();

	int GetAttack()
	{
		if (mAttack < 0)
		{
			std::cerr << "Something Wrong!";
		}
		// ���� ���� + ��� ����
		int factor = 1;

		return mAttack * factor;
	}
};


