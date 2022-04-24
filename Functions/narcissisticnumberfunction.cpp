//Write a function find narcissistic number
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
void narcissistic(int number)
{
    int original_number = number, num = number, order = 0, sum = 0;
    while(num != 0)
    {
        num = num/10;
        order++;
    }
    int multiplier;
    int remainder;
    while(number != 0)
    {
        multiplier = 1;
        remainder = number % 10;
        number = number / 10;
        for(int i = 1; i <= order; i++)
        {
            multiplier = multiplier * remainder;
        }
        sum = sum + multiplier;
    }
    if(sum == original_number)
    {
        cout << original_number << " is a narcissistic number";
    }
    else
    {
        cout << original_number << " is not a narcissistic number";
    }
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    narcissistic(number);
    return 0;
}
