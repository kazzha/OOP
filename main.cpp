#include <iostream>

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
		std::cout << this->power << std::endl;
	}

public:
	int cost{};
	int color{};

	void Cost()
	{
		std::cout << this->cost << std::endl;
	}
};
int main()
{
	// instantiate(인스턴스화)
    Galaxy myPhone;

	myPhone.
}