#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	setlocale(LC_ALL,"RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string str;
	std::cout << "Введите строку: "; std::cin >> str;
	std::string back1 = "(";
	std::string back2 = ")";
	int pos1, pos2;
	pos1 = str.rfind(back1);
	pos2 = str.rfind(back2);
	std::cout << "1: " << pos1 << std::endl;
	std::cout << "2: " << pos2 << std::endl;
}