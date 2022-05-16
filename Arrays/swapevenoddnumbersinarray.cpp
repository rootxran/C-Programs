//Write a program to swap even and odd numbers of array
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int temp;
    int students[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++)
    {
        if(((students[i] % 2 == 0) && (students[i + 1] % 2 == 1)) || ((students[i] % 2 == 1) && (students[i + 1] % 2 == 0)))
        {
            temp = students[i];
            students[i] = students[i + 1];
            students[i + 1] = temp;
        }
    }
    for(int j = 0; j < 5; j++)
    {
        cout << students[j] << "\t";
    }
}
