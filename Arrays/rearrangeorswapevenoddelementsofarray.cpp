//Write a program to interchange (swap) the odd and even elements of array
#include <iostream>
using namespace std;
int main()
{
    int temp;
    int numbers[25];
    for(int i = 0; i < 25; i++)
    {
        cin >> numbers[i];
    }
    for(int i = 0; i < 25; i++)
    {
        if(numbers[i] % 2 != 0)
        {
            for(int j = 24; j > i; j--)
            {
                if(numbers[j] % 2 == 0)
                {
                    temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
            }
        }
    }
    for(int k = 0; k < 25; k++)
    {
        cout << numbers[k] << "\t";
    }
}
