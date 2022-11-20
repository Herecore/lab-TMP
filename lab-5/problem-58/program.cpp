/* Лабораторная, Строки. Задание 58: 
Дана строка. Создать новую строку, заменив все малые латинские буквы
на большие.
*/
#include <cctype>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string S1;
	cout << "Enter the first string: ";
	cin >> S1;
	
	for (int i = 0; i < int(S1.length()); ++i)
		S1[i]=char(toupper(S1[i]));

	cout << "The final string is: \"" << S1 << "\"\n";
}
