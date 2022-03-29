//Write menu driven program using switch statement
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int choice, number, factorial = 1;//declaring variables and initializing factorial variable to 1
	cout << "Enter a number: ";// taking input from user then performing operations
	cin >> number;//storing value into number variable
	//Making Menu for user
	cout << "\nOption 1 = Factorial\nOption 2 = Prime or not\n";
	cout << "Option 3 = Odd or even\nOption 4 = Exit\n";
	cout << "\nEnter any option between 1 and 4: ";
	cin >> choice;//storing value of option into choice variable
	cout << endl;
	// Here switch starts
	switch(choice)
	{
		case 1: //factorial choice
			int i;//declaring variable for using that in loop
			//using for loop for evaluating factorial of number
			for(i = 1; i <= number; i++)
			{
				factorial = factorial * i;
			}
			cout << "Factorial of " << number << " is " << factorial; 
			break;
		case 2://Prime or not choice
			if(number == 0 || number == 1)//checking conditions for 0 and 1
			{
   				cout << number << " is not a prime number." << endl;
			}
			else if(number == 2 || number == 3)//checking conditions for 2 and 3
			{
				cout << number << " is a prime number." << endl;
			}
			else//checking for other numbers
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
			break;
		case 3://Even or odd choice
			if(number % 2)
			{
				cout << number << " is odd.";
			}
			else
			{
				cout << number << " is even.";
			}
			break;
		case 4://Exit choice
			break;
		default:// Assigning to default so that user input valid value
			cout << "Enter valid number from 1 to 4."; break;
	}
	return 0;
}



