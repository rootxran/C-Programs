//Write a program to sort elements in array in ascending and descending order using bubble sort algorithm
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int temp;
    int choice;
    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << "1. Ascending Order" << endl;
    cout << "2. Descending Order" << endl;
    cout << endl << "Press a number : ";
    cin >> choice;
    if(choice == 1)
    {
        for(int i = 0; i < 10; i++)
        {
            for(int j = i + 1; j < 10; j++)
            {
                if(a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        cout << "Ascending Order: " << endl;
        for(int i = 0; i < 10; i++)
        {
            cout << a[i] << " ";
        }    
    }
    if(choice == 2)
    {
        for(int i = 0; i < 10; i++)
        {
            for(int j = i + 1; j < 10; j++)
            {
                if(a[i] < a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        cout << endl << "Descending Order: " << endl;
        for(int i = 0; i < 10; i++)
        {
            cout << a[i] << " ";
        }
    }
}
