/* Лабораторная, Массивы. Задание 39:  
Найти минимальный элемент матрицы. Строку, содержащую
минимальный элемент, поменять с первой строкой матрицы.
*/
#include <iostream>
using namespace std;

const int n = 3;
int arr[n][n];

int fillarr()
{
	cout << "Fill the array with non-repeating values:\n";
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << "Enter the value on line " << i + 1 << " column " << j + 1 << ": ";
			cin >> arr[i][j];
		}
	}
	return 0;
}

void printarr()
{
	cout << "The array we are working with:\n";
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
    fillarr();
	printarr();

	int smallest = 10000;
	int smallestline = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (arr[i][j] < smallest) {
				smallest = arr[i][j];
				smallestline = i;
			}
		}
	}

	cout << "The line " << smallestline << " has the smallest value " 
		<< smallest << "\n";

	cout << "Swapping the first line and line " << smallestline << "\n";
	
	// stores line 1
	int temparr[n]; 
	for (int i = 0, j = 0; j < n; ++j) {
		temparr[j] = arr[i][j];
	}

	for (int i = smallestline, j = 0; j < n; ++j) {
		arr[0][j] = arr[i][j];
		arr[i][j] = temparr[j];
	}

	printarr();
}
