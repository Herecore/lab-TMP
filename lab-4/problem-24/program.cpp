// Лабораторная, Массивы. Задание 24: 
// Дан целочисленный массив. Найти сумму нечетных элементов массива.
#include <iostream>
#include <random>
#include <cstdlib>

using namespace std;

const int n = 10;		// Size of an array
int randlimit = 30;	 // Limit for values in the array
int arr[n];

// Fills an array with non-repeating numbers up to randlimit
void fillarr()
{
	srand(unsigned (int(time(0))));	// Allows for random values on each run
	for (int i = 0; i < n; ++i)
	{
		arr[i] = rand() % randlimit;
		
		for (int j = 0; j < i; ++j)
		{
			if (arr[j] == arr[i]) // Repeat the cycle for the same i if it already exists in arr
			{
				--i;
				break;
			}
		}
	}
}

void printarr()
{
	cout << "The array we are working with:\n";
	
	bool isfirst = true;
	for (int i = 0; i < n; ++i)
	{
		if (isfirst == false)
			cout << ",\t";
		
		// Move to new line every five elements
		// for improved readability
		if (i % 5 == 0)
			cout << "\n"; // as a side effect it creates a newline before the first element
		
		cout << arr[i];
		if (isfirst == true)
			isfirst = false;
	}
	cout << endl;
}

int main()
{
	fillarr();
	printarr();
	
	int sum = 0;
	
	for (int i = 1; i < n; ++i) {
		if (arr[i] % 2 == 1)
			sum += arr[i];
	}
	
	cout << "The sum of the odd values in array above is " << sum << endl;
}
