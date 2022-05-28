//Write a program to sort elements in array in ascending and descending order using bubble sort algorithm
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
void printarray(int a[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }   
}
void bubblesort(int a[], int choice, int size)
{
    int temp;
    if(choice == 1)
    {
        for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < size - i; j++)
            {
                if(a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        cout << "Ascending Order: " << endl;
}
    if(choice == 2)
    {
        for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < size - i; j++)
            {
                if(a[j] < a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        cout << endl << "Descending Order: " << endl;
    }
    printarray(a, size);
}
int main()
{
    int size = 10;
    int a[size];
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
    bubblesort(a, choice, size);
}
