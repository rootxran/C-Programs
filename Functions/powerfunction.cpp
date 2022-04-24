//Write a program to calculate value of a number raised to another number
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
float power(int a, int b)//Power function a for base b is for exponent
{
    float multiplier = 1.0;
    if(b > 0)//if power is positive
    {
        for(int i = 1; i <= b; i++)
        {
            multiplier = multiplier * a;
        }
    }
    else//if power is negative
    {
        for(int i = b; i <= -1; i++)
        {
            multiplier = multiplier * a;
        }
        multiplier = 1/multiplier;
    }  
    return multiplier;//returning value of multiplier variable
}
int main()
{
    int base, exponent;
    float result;
    cout << "Enter a number: ";
    cin >> base;
    cout << "Enter its power: ";
    cin >> exponent;
    result = power(base, exponent);//calling power function
    cout << result;
    return 0;
}
