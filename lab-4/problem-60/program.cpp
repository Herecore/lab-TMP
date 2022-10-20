/* Лабораторная, Массивы. Задание 60: 
Дан целочисленный массив x.
Заполнить матрицу A по следующему правилу: A[i,j] = (x[j])^i 
*/
#include <iostream>
#include <random>
#include <cstdlib>
using namespace std;

const int n = 5;
int x[n];
int A[n][n];

void fillarr()
{
	cout << "Filling the array x:\n";
    for (int i = 0; i < n; ++i) {
		cout << "Enter the value " << i + 1 << " of the array x: ";
		cin >> x[i];
    }
}

void printarr()
{
	cout << "\nThe array we are working with:\n";

	bool isfirst = true;
	for (int i = 0; i < n; ++i) {
		if (isfirst == false) {
			cout << ",\t";
			if (i == n)
				cout << "\n"; 
		}

		cout << x[i];
		if (isfirst == true)
			isfirst = false;
	}
	cout << endl;
}

void fillmatrix()
{
	cout << "\n\nMatrix A:\n";
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			A[i][j] = int(pow(x[j], i));
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	fillarr();
	printarr();
	fillmatrix();
}
