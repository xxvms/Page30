// Page30.cpp : Defines the entry point for the console application.
//

#include <iostream>


int main()
{
	enum trade { buy, sell };

	trade share1 = buy;
	trade share2 = sell;

	int choice;
	std::cout << "Type 0 for buy, 1 for sale" << std::endl;
	std::cin >> choice;

	if (choice == share1)
	{
		std::cout << share1 << std::endl;
		std::cout << "Buy" << std::endl;
	}
	else
	{

		std::cout << share2 << std::endl;
		std::cout << "Sell" << std::endl;
	}

	system("pause");

    return 0;
}


	//enum suite // enum help organize code.
	//{
	//	heart = 20, diamond, club, spade
	//};

	//suite card1;
	//suite card2;
	//card1 = heart;
	//card2 = diamond;
	//std::cout << card1 << std::endl;
	//std::cout << card2 << std::endl;
