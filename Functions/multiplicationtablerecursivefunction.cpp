//Write a program to print multiplication table using recursive function
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int i = 1;//declaring variable globally
int table(int a)
{
    if(i <= 10)
    {
        cout << "2 x " << i << " = " << a * i << endl;
        i = i + 1;
        return (a * table(a));
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    table(number);//calling table function
    return 0;
}
