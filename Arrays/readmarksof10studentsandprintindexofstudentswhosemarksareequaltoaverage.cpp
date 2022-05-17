//Write a progrram to read marks of 10 students into an arrauy and print index of all students whose marks are equal to average
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    float average;
    int marks[10];
    for(int i = 0; i < 10; i++)
    {
        cin >> marks[i];
    }
    for(int i = 0; i < 10; i++)
    {
        sum = sum + marks[i];
    }
    average = sum/10.0;
    cout << average << endl;
    for(int i = 0; i < 10; i++)
    {
        if(marks[i] == average)
        {
            cout << i << " is the index" << endl;
        }
    }
}
