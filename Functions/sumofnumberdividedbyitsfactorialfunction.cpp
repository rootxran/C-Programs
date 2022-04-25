//Write a program to find the sum of the series 1/1!+2/2!+3/3!+4/4!+5/5! using the function
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int number = 1;
float sum = 0;
float fact(int num)
{
    if(num == 0 || num == 1)
    {
        return 1;
    }
    return num * fact(num - 1);
}
void add()
{
    if(number <= 5)
    {
        sum = sum + number/fact(number);
        number++;
        add();
    }
    else
    {
        cout << sum;
    }
}
int main()
{
    add();
    return 0;
}
