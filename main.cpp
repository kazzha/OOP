#include <iostream>
#include "Cat.h"
#include "Dog.h"

/*
class MyClass
{
private:
	int mValue;

public:
	MyClass(int x) : mValue(x)
	{
		std::cout << "老馆 积己磊" << std::endl;
	}

	MyClass(const MyClass& target)
	{
		mValue = target.mValue;
		std::cout << "汗荤 积己磊" << std::endl;
	}

	~MyClass()
	{
		std::cout << "[-]" << std::endl;
	}

};
*/

class Parent
{
public:
	void f1()
	{
		std::cout << "Parent::f1()" << std::endl;
	}
	void f2()
	{
		std::cout << "Parent::f2()" << std::endl;
	}
};
int main()
{
	Cat c1;
	Cat* p = new Cat;

	Animal* pAnimal = new Cat;

}