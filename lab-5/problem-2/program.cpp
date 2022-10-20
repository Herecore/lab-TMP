/* Лабораторная, Строки. Задание 2: 
Для заданных трех строк S1, S2 и S3 определить какая из этих строк
является палиндромом
*/
#include <iostream>
#include <algorithm>
using namespace std;

bool ispalindrome(string S)
{
	string tmp = S;
	reverse(tmp.begin(), tmp.end());

	if (S == tmp)
		return true;
	else
		return false;
}

int main()
{
	string S1 = "", S2 = "", S3 = "";

	cout << "Fill the string 1: ";
	cin >> S1;
	cout << "Fill the string 2: ";
	cin >> S2;
	cout << "Fill the string 3: ";
	cin >> S3;

	if (ispalindrome(S1) == true)
		cout << "String 1 is a palindrome\n";
	if (ispalindrome(S2) == true)
		cout << "String 2 is a palindrome\n";
	if (ispalindrome(S3) == true)
		cout << "String 3 is a palindrome\n";
}
