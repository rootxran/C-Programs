//Write a program to print prime numbers to a certain number using nested loop
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int range, check;
    cout << "Enter a number: ";
    cin >> range;//storing user input number in range variable
    for(int i = 2; i <= range; i++)//first loop to user input certain number 
    {
        check = 0;//updating check variable to 0 in every iteration
        for(int j = 2; j <= i/2; j++)//second loop to check prime numbers to half of that number
        {
            if(i % j == 0)
            {
                check = 1;//if number is not prime then update check value to 1
                break;//if number is not prime then come out of loop
            }
        }
        if(check == 0)//if check variable has 0 value
        {
            cout << i << " is prime number" << endl;
        }
    }
    return 0;
}
