#include <iterator>
#include <locale>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <Windows.h> 

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	long double dollars;
	long double rubles;
	std::cout << "dollar amount: " << std::endl;
	std::cin.imbue(std::locale("en_US.UTF-8"));
	std::cin >> std::get_money(dollars);


	std::cout.imbue(std::locale("en_US.UTF-8"));
	std::cout << std::showbase
		<< "en_US: " << std::put_money(dollars, true)
		<< " or " << std::put_money(dollars, false) << std::endl;

	rubles = dollars * 74.0;
	std::cout.imbue(std::locale("ru_RU.UTF-8"));
	std::cout << "ru_RU: " << std::put_money(rubles, true)
		<< " or " << std::put_money(rubles, false) << std::endl;


	system("pause");
	return 0;
}