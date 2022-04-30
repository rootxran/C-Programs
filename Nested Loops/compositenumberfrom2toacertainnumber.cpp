//Write a program to print composite numbers from 2 to a certain number
//Composite number has at least one factor other than 1 and itself
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int number, count;
    cout << "Enter a number: ";
    cin >> number;
    for(int i = 2; i <= number; i++)//starting loop from 2 to number value
    {
        count = 0;//in every iteration updating count to 0
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }
        if(count >= 3)//if number has factors greater than or equal to 3 because two are 1 and itself
        {
            cout << i << " is composite number" << endl;
        }
    }
    return 0;
}
