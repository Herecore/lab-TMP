/* Лабораторная, Строки. Задание 11: 
Составить программу, в результате выполнения которой из первой
заданной строки удаляется каждый символ, не принадлежащий также
второй строке
*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string S1, S2;
	cout << "Enter the first string: ";
	cin >> S1;
	cout << "Enter the second string: ";
	cin >> S2;
	
	for (int i = 0; i < int(S1.length()); ++i) {
		for (int j = 0; j < int(S2.length()); ++j) {
			if (S1[i] == S2[j]) {
				S1.erase(remove(S1.begin(), S1.end(), 't'), S1.end());
			}
		}
	}
	
	cout << "The final string is: \"" << S1 << "\"\n";
}
