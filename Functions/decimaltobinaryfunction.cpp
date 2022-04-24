//Write a function to convert decimal to binary
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
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
    int number;
    cout << "Enter a number: ";
    cin >> number;
    binary(number);
    return 0;
}
