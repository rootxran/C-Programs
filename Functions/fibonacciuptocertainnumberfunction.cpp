//Write a function to print fibonacci series upto user input certain number
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
void fibonacci(int num)//Fibonacci function
{
    int a = 0, b = 1, sum;
    for(int i = 1; i <= num + 1; i++)
    {
        cout << a;
        sum = a + b; 
        a = b; 
        b = sum;
    }
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    fibonacci(number);
    return 0;
}
