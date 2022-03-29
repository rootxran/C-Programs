//Write a program to calculate salary according to conditions
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int years_of_service, salary;//declaring variables with int data type
	char gender, qualifications;//declaring variables with char data type
	cout << "Male = m | Female = f\nEnter your gender: ";
	cin >> gender;//storing input for gender in gender variable
	cout << "Enter your year of experience: ";
	cin >> years_of_service;// storing input for years of service in years_of_service variable
	cout << "Qualifications:\nGraduate = g | Post graduate = p\nEnter your qualifications:";
	cin >> qualifications;//storing input for qualification into qualifications variable
	//if gender is male
	if(gender == 'm')
	{
		if(qualifications == 'p')//post graduate male
		{
			if(years_of_service >= 10)
			{
				salary = 15000;
			}
			else
			{
				salary = 10000;
			}
		}
		else if(qualifications == 'g')//graduate male
		{
			if(years_of_service >= 10)
			{
				salary = 10000;
			}
			else
			{
				salary = 7000;
			}	
		}
	}
	//if gender is female
	else if (gender == 'f')
	{
		if(qualifications == 'p')//post graduate female
		{
			if(years_of_service >= 10)
			{
				salary = 12000;
			}
			else
			{
				salary = 10000;
			}
		}
		else if(qualifications == 'g')//graduate female
		{
			if(years_of_service >= 10)
			{
				salary = 9000;
			}
			else
			{
				salary = 6000;
			}	
		}
	}
	cout << "Your salary is " << salary;
	return 0;
}



