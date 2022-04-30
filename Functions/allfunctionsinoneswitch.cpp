//Write a program to use switch for using specific functions
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
double factorial(float number)
{
    double fact = 1;
    for(int i = 1; i <= number; i++)
    {
    fact = fact * i;
    }
    return fact;
}
void oddtable()
{
    int number = 1;
    for(int i = 1; number <= 100; i++)
    {
        if(number % 2 && i == 1)
        {
            cout << ">>>>>>> Table of " << number << " <<<<<<<" << endl << endl;
        }
        if(number % 2 == 1)
        {
            cout << number << " x " << i << " = " << number * i << endl;
        }
        if(i == 10)
        {
            cout << endl;
            i = 0;
            number++;
        }
    }
}
void fibonacci(int num)
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
void binary(int number)
{
    int reverse = 1;
    int binary = 0;
    int remainder;
    while(number != 0)
    {
        remainder = number % 2;
        number = number / 2;
        binary = binary + remainder * reverse;
        reverse = reverse * 10;
    }
    cout << binary;
}
int main()
{
    int choice;
    cout << "Press <1> for sum of factorial of all even numbers between 1 and 100" << endl;
    cout << "Press <2> for sum of factorial numbers from starting to ending value" << endl;
    cout << "Press <3> for sum of reverse factorial numbers from starting to ending value" << endl;
    cout << "Press <4> for printing fibonacci series upto certain number" << endl;
    cout << "Press <5> for finding narcissitic number" << endl;
    cout << "Press <6> for power (a, b) to calculate the value of a raised to b" << endl;
    cout << "Press <7> for evaluating binary of a decimal number" << endl;
    cout << "Press <0> for exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice)
    {
        case 1:
        {
            double sum = 0;
            for(int i = 1; i <= 100; i++)
            {
                if(i % 2 == 0)
                {
                    sum = sum + factorial(i);
                }
            }
            cout << sum << " is the sum of factorials of even numbers up to 100" << endl;
            cout << "\n>>>>>>>>>>>>><<<<<<<<<<<<<<" << endl;
            cout <<   ">>>>>>>> Odd tables <<<<<<< " << endl;
            cout <<   ">>>>>>>>>>>>><<<<<<<<<<<<<<\n" << endl;
            oddtable();
            break;
        }
        case 2:
        {
            int start, end, sum = 0;
            cout << "Enter starting number: ";
            cin >> start;
            cout << "Enter ending number: ";
            cin >> end;
            for(int i = start; i <= end; i++)
            {
                sum = sum + factorial(i);
            }
            cout << sum;
            break;
        }
        case 3:
        {
            int start, end;
            float sum = 0;
            cout << "Enter starting number: ";
            cin >> start;
            cout << "Enter ending number: ";
            cin >> end;
            for(int i = start; i <= end; i++)
            {
                sum = sum + (1/factorial(i));
            }
            cout << sum << " is the sum of reciprocal factorials";
            break;
        }
        case 4:
        {
            int number;
            cout << "Enter a number: ";
            cin >> number;
            fibonacci(number);
            break;
        }
        case 5:
        {
            int number;
            cout << "Enter a number: ";
            cin >> number;
            narcissistic(number);
            break;
        }
        case 6:
        {
            int base, exponent;
            float result;
            cout << "Enter a number: ";
            cin >> base;
            cout << "Enter its power: ";
            cin >> exponent;
            result = power(base, exponent);//calling power function
            cout << result;
            break;
        }
        case 7:
        {
            int number;
            cout << "Enter a number: ";
            cin >> number;
            binary(number);
            break;
        }
        case 0:
        {
            break;
        }
        default:
        {
            cout << "Enter valid number from 0 to 7";
        }
        }
        return 0;
}
