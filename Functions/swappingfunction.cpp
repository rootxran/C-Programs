//Write a function to swap values of two variables
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
void swap(int &a, int &b)//Swap function with inputs taking address of variables
{
    int temp;
    temp = b;
    b = a;
    a = temp;
}
int main()
{
    float first, second;
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;
    cout << "--------------------------" << endl;
    cout << "Before Swaping" << endl;
    cout << "--------------------------" << endl;
    cout << "a = " << first << "\tb = " << second << endl;
    swap(first, second);
    cout << "--------------------------" << endl;
    cout << "After Swaping" << endl;
    cout << "--------------------------" << endl;
    cout << "a = " << first << "\tb = " << second << endl;
    return 0;
}
