//Write a function to find sum of reciprocal factorials from user input start and end number
// 1 /1!+ 1 / 2!+ 1 / 3!+ 1 /4!+ 1 / 5!
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
float factorial(int number)
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
    int start, end;
    float sum = 0;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;
    for(int i = start; i <= end; i++)
    {
        sum = sum + (1/factorial(i));//dividing factorial value by 1 and adding in previous sum
    }
    cout << sum << " is the sum of reciprocal factorials";
    return 0;
}
