//Write a program to swap two numbers using pointers
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 1, b = 2;
    cout << "Before Swapping: " << endl;
    cout << "a = " << a << " b = " << b << endl;
    swap(&a, &b);
    cout << "After Swapping: " << endl;
    cout << "a = " << a << " b = " << b << endl;
}
