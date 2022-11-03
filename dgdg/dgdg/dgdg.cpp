#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL,"RUS");
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	cout << "введите строку: ";
	string s;
	getline(cin, s);
	int max_length = 0;
	string max_word;
	string min_word;
	istringstream iss(s);
	while (iss >> s)
	{
		if (max_length < s.length())
		{
			max_length = s.length();
			max_word = s;
		}
		if (max_length > s.length())
		{
			min_word = s;
		}
	}
	string w, mw;
	istringstream ss(s);
	ss >> mw;
	while (ss >> w) if (mw.size() > w.size()) mw = w;
	cout << "Максимальное слово= " << max_word << endl;
	cout << "Минимальное слово= " <<mw<< endl;
	return 0;
}