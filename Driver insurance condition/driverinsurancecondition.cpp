//Write a program to check insurrance of driver depending on different situations
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	char marital_status, gender; 
	int age;
	cout << "Married = m\nSingle = n\nWhat is your marital status: ";
	cin >> marital_status;
	// first check marital status	
	if(marital_status == 'm')
	{
		cout << "The driver is insurred.";
	}
	// if single then check gender and age
	else
	{
		cout << "Male = m\nFemale = f\nEnter your gender: ";
		cin >> gender;
		cout << "Enter your age: ";
		cin >> age;
	}
	// if gender is male
	if(gender == 'm')
	{
		if(age > 30)
		{
			cout << "The driver is insurred.";
		}
		else
		{
			cout << "The driver is not insurred";
		}
	}
	//if gender is female
	else if (gender == 'f') 
	{
		if(age > 25)
		{
			cout << "The driver is insurred";
		}
		else
		{
			cout << "The driver is not insurred";
		}
	}			
	return 0;
}



