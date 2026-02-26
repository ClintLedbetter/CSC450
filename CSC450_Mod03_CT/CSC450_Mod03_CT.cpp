#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter first integer: ";
    cin >> a;

    cout << "Enter second integer: ";
    cin >> b;

    cout << "Enter third integer: ";
    cin >> c;

    // Dynamic memory allocation
    int* p1 = new int;
    int* p2 = new int;
    int* p3 = new int;

    *p1 = a;
    *p2 = b;
    *p3 = c;

    cout << "\nValues stored in variables:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "\nValues stored in pointers:\n";
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;
    cout << "*p3 = " << *p3 << endl;

    // Free memory
    delete p1;
    delete p2;
    delete p3;

    return 0;
}
