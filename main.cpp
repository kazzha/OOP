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
		std::cout << "������" << std::endl;
	}
	void Massage()
	{
		std::cout << "�޽���" << std::endl;
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
	// instantiate(�ν��Ͻ�ȭ)
    Galaxy myPhone;

	myPhone.
}