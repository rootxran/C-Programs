// Write a program that reads 6 real numbers from the user (negative and positive numbers) into an array, then it does the following:
// a)	Find the sum and average of positive numbers of the array and display them.
// b)	Count negative numbers of the array and display it.
// c)	Find the minimum value of the array and display it.
// d)	Find the index of the minimum value of the array and display it.

#include <iostream>
using namespace std;
int main()
{
    int a[6], min = a[0], index;
    int negative = 0, sum = 0;
    float average;
    cout << "Enter positive and negative numbers for array: ";
    for(int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < 6; i++)
    {
        sum = sum + a[i];
    }
    cout << "Sum of numbers of array is " << sum << endl;
    average = sum / 6.0;
    cout << "Average of numbers of array is " << average << endl;
    for(int i = 0; i < 6; i++)
    {
        if(a[i] < 0)
        {
            negative++;
        }
    }
    cout << "Negative numbers in array are " << negative << endl;
    for(int i = 0; i < 6; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            index = i;
        }
    }
    cout << "Minimum Number in array is " << min << endl;
    cout << "Index of minimum number in array is " << index;
}
