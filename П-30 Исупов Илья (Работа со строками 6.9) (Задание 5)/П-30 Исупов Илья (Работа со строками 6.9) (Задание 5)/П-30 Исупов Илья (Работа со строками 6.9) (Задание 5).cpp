#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string str;
	std::string str2;
	std::string space;
	std::string space2 = " ";
	std::cout << "Введите строку: "; std::getline(std::cin,str);
	auto pos = str.find(" ");
	if (pos != std::string::npos)
	{
		std::string s1 = str.substr(0, pos);
		std::string s2 = str.substr(pos + 1);
		if (s1.length() > s2.length())
		{
			std::cout << s1 <<"-Самое длинное слово." << std::endl;
			std::cout << s2 << "-Самое короткое слово." << std::endl;
		}
		else
		{
			std::cout << s2 <<"-Самое длинное слово." << std::endl;
			std::cout << s1 << "-Самое короткое слово." << std::endl;
		}
	}
}