//Write a program to take marks from user and then print grade according to that marks using switch
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
	int marks;//declaring variable for marks
	char grade;//declaring variable for grade
	cout << "Enter your marks: ";
	cin >> marks;//storing user input in to marks variable
	switch(marks >= 80)
	{
		case 1: grade = 'A'; break;//if marks greater than or equal to 80 then grade A
		case 0:
		{
			switch(marks >= 70)
			{
				case 1: grade = 'B'; break;//if marks greater than or equal to 70 then grade B
				case 0:
				{
					switch(marks >= 60)
					{
						case 1: grade = 'C'; break;//if marks greater than or equal to 60 then grade C
						case 0:
						{
							switch(marks >= 50)
							{
								case 1: grade = 'D'; break;//if marks greater than or equal to 50 then grade D
								case 0:
								{
									switch(marks >= 40)
									{
										case 1: grade = 'E'; break;//if marks greater than or equal to 40 then grade E
										case 0: grade = 'F'; break;//if marks smaller than 40 then grade F
									}
								}
								break;
							}
							break;
						}
						break;
					}
					break;
				}
				break;
			}
			break;
		}
		break;
	}
	cout << grade << " is grade of your marks.";//printing grade
	return 0;
}
