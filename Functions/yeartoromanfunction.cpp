//Write a function to convert year from integer in to roman 
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int roman(int year, int number, char alphabet)
{
    int j;
    if(year == 9)
    {
        cout << "IX";
        return 0;

    }
    if(year == 4)
    {
        cout << "IV";
        return 0;

    }
    if(year >= 40 && year < 50)
    {
        cout << "XL";
        return (year % 40);
    }
    j = year / number;
    for(int i = 1; i <= j; i++)
    {
        cout << alphabet;
    }
    return (year % number);
}
int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    year = roman(year,1000,'M');
    year = roman(year,500,'D');
    year = roman(year,100,'C');
    year = roman(year,50,'L');
    year = roman(year,10,'X');
    year = roman(year,5,'V');
    year = roman(year,1,'I');
    return 0;
}
