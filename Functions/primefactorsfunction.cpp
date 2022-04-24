//Write a function to obtain prime factors of a number
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
void prime_factors(int number)//Prime factors function
{
    int i = 2;
    while(number != 1)
    {
        if(number % i == 0)//if number is completely divisible by i value
        {
            cout << i << endl;
        }
        else//if number is not divisible by i value
        {
            i++;//incrementing i
            continue;
        }
        number = number / i;//Dividing number and assigning that value to number variable everytime when number is completely divisible by i value
    }
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    prime_factors(number);//calling prime_factors function
    return 0;
}
