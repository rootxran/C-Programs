//Write a program to write prime numbers from 1 to 100 using loops
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int check;//declaring variable for print prime numbers only
	for(int i = 1; i <= 100; i++)
	{
		if(i == 1)//making condition for 1
		{
			continue;
		}
		check = 1;//initializing check to 1 because if check will be 1 then if condition for prime number will be true
		for(int j = 2; j <= i/2; j++)//initializing index to 2 because every number is divisible by 1 and making condition to half of that number
      //because number(j) greater than original number half(i/2) will not divide and give non zero remainder
		{
			if(i % j == 0)//if original number(i) is completely divisible by number
			{
				check = 0;//changing check value to 0 so that it will not true if condition of prime number and print all numbers as prime number
				break;
			}
		}
		if(check == 1)//to print only prime numbers
		{
			cout << i << " is a prime number." << endl;
		}
	}
	return 0;
}
