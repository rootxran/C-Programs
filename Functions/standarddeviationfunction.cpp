//Write a function that receives five integers and return the sum, average and standard
//deviation of these numbers. Call this function from main() and print the result in main()
//By RAO ALI NAWAZ
#include <iostream>
#include <math.h>
using namespace std;
float fun(int num1, int num2, int num3, int num4, int num5, int choice)
{
    float sum = num1 + num2 + num3 + num4 + num5;
    float mean = sum/5.0;
    float first_square_difference = (mean - num1) * (mean - num1);
    float second_square_difference = (mean - num2) * (mean - num2);
    float third_square_difference = (mean - num3) * (mean - num3);
    float fourth_square_difference = (mean - num4) * (mean - num4);
    float fiveth_square_difference = (mean - num5) * (mean - num5);
    float squared_difference_sum = first_square_difference + second_square_difference + third_square_difference + fourth_square_difference + fiveth_square_difference;
    float variance = squared_difference_sum/5.0;
    float standard_deviation = sqrt(variance);
    if(choice == 1)
        return (sum);
    
    if(choice == 2)
       return (mean);
    
    if (choice == 3)
    return (standard_deviation);
}
int main()
{
    int num1, num2, num3, num4, num5;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    cout << "Enter fourth number: ";
    cin >> num4;
    cout << "Enter fiveth number: ";
    cin >> num5;
    float sum = fun(num1, num2, num3, num4, num5, 1);
    float average = fun(num1, num2, num3, num4, num5, 2);
    float standarddeviation = fun(num1, num2, num3, num4, num5, 3);
    cout << "Sum of these numbers is " << sum << endl;
    cout << "Average of these numbers is " << average << endl;
    cout << "Standard Deviation of these numbers is " << standarddeviation;
    return 0;
}
