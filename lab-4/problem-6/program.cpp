/* Лабораторная, Массивы. Задание 6:  
Даны две последовательности по n целых чисел в каждой. Найти
наименьшее среди тех чисел первой последовательности, которые не
входят во вторую последовательность (считая, что хотя бы одно число
есть).
*/
#include <iostream>
using namespace std;

const int n = 4;
int arr1[n], arr2[n];

void fillarr()
{
    cout << "Enter the values for array 1:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter the element " << i + 1 << " of a first array:\n";
        cin >> arr1[i];
    }
    cout << "\n\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter the element " << i + 1 << " of a second array:\n";
        cin >> arr2[i];
    }
}

int main()
{
    fillarr();
    int smallest = 10000;

    for(int i = 0; i < 5; ++i) {
        bool breakflag = false;
        for (int j = 0; j < 5; ++j)
            if (arr1[i] == arr2[j]) {
                breakflag = true;
                break;
            }
        if (breakflag == false && smallest > arr1[i])
            smallest = arr1[i];
    }

    cout << "Smallest number from arr1 that is not in the arr2 is " << smallest 
        << "\n\n";
}
