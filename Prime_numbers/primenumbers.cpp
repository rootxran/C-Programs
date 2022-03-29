// Write a program to check whether a number is prime or not
//Prime number are the numbers which divide only by 1 and itself
//By RAO ALI NAWAZ

#include <iostream> 
using namespace std; 
int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	if(number == 0 || number == 1) 
	{
   		cout << number << " is not a prime number." << endl;
	}
	else if(number == 2 || number == 3)
	{
		cout << number << " is a prime number." << endl;
	}
	else
	{
		int check = 0;
        for(int i = 2; i <= number/2; i++)
        {
            if(number % i == 0)
            {
            	cout << number << " is not a prime number." << endl;
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
        	cout << number << " is a prime number." << endl;
		}
	}
	return 0;
}

