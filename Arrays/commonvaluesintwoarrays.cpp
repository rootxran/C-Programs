//Write a program to take 10 values for each two arrays then find common values
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int a1[10];
    int a2[10];
    int common[10];
    int count = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> a1[i];
    }
    for(int i = 0; i < 10; i++)
    {
        cin >> a2[i];
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(a1[i] == a2[j])
            {
                common[count] = a2[j];
                count++;
                break;
            }
        }
    }
    cout << "First Array :" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << a1[i] << " ";
    }
    cout << endl << "Second Array :" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << a2[i] << " ";
    }
    cout << endl << endl << "Common Elements: " << endl;
    for(int i = 0; i < count; i++)
    {
        cout << common[i] << " ";
    }
}
