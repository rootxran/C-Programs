//Write a function to calculate square of a number
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
float sqr(int n)//Square root function
{
    float check = 0, sqr;
    sqr = n/2;
    while(sqr != check)
    {
        check = sqr;
        sqr = (n/check + check)/2;
    }
    return sqr;
}
int main()
{
    int num;
    float squareroot;
    cout << "Enter a number: ";
    cin >> num;
    squareroot = sqr(num);
    cout << squareroot;
    return 0;
}
