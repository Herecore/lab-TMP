#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

const int n = 5;
int x[n];
int y[n];

int fillarr()
{
    cout << "Fill the array x!\n";
    for (int i = 0; i < n; ++i) {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> x[i];
    }
    cout << "Done!\n\n";
    return 0;
    
}

void p()
{
    for (int i = 0; i < n; ++i)
        y[i] = x[i];

    sort(y, y + n, greater<int>());
}

void printarr()
{
    cout << "The values of array x:\n";
    for (int i = 0; i < n; ++i)
        cout << i + 1 << ".\t" << x[i] << endl;
        
    cout << "The values of array y:\n";
    for (int i = 0; i < n; ++i)
        cout << i + 1 << ".\t" << y[i] << endl;
}

int main()
{
    fillarr();
    p();
    printarr();
}
