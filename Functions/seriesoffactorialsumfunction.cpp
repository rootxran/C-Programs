//Write a function sum of series from user input start and end value
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int factorial(int number)//factorial function
{
    int fact = 1;
    for(int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int start, end, sum = 0;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;
    for(int i = start; i <= end; i++)
    {
        sum = sum + factorial(i);//calling factorial function
    }
    cout << sum;
    return 0;
}
