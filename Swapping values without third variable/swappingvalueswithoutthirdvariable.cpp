//Write a program to swap values of two variable without third variable
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int a, b;//declaring only two variables
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "--------------------------" << endl;
    cout << "Before Swaping" << endl;
    cout << "--------------------------" << endl;
    cout << "a = " << a << "\tb = " << b << endl;
    a = a + b;//adding values of two variables and storing that in variable a
    b = a - b;//subtracting value of variable b from updated variable a and storing that in variable b
    a = a - b;//subtracting value of updated variable b from updated variable a and storing that in variable a
    cout << "--------------------------" << endl;
    cout << "After Swaping" << endl;
    cout << "--------------------------" << endl;
    cout << "a = " << a << "\tb = " << b << endl;
}
