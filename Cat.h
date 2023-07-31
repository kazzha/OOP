#pragma once
#include "Animal.h"
class Cat : public Animal
{
public:
	enum BREED
	{
		KOREANSHORT,
		MUNCHKIN,
		RUSSIANBLUE,
		TURKISHANGORA
	};

private:
	BREED mBreed;

public:
	Cat();
	~Cat();

	Cat::BREED GetBreed() const; // 명시적으로 써주는게 차후에 에러가 덜 날 수 있음
	void SetBreed(Cat::BREED breed); 

	void Grooming();
};

