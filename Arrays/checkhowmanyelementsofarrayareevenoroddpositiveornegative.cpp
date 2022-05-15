//Write a program to check how many of elements are positive, negative or even or odd
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int positive = 0, negative = 0, even = 0, odd = 0;
    int numbers[25];
    for(int i = 0; i < 25; i++)
    {
        cin >> numbers[i];
        if(numbers[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(numbers[i] > 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }
    cout << endl << positive << " are positive numbers" << endl;
    cout << negative << " are negative numbers" << endl;
    cout << even << " are even numbers" << endl;
    cout << odd << " are odd numbers" << endl;
}
