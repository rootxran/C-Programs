//25 numbers are entered by user and a number is entered by user to check whether it is present in array or not and
//if it is present print its count that how many times it appear
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;
    for(int i = 0; i < 25; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < 10; i++)
    {
        if(a[i] == num)
        {
            count++;
        }
    }
    if(count > 0)
    {
        cout << num << " is found " << count << " times";
    }
    else
    {
        cout << num << " is not found";
    }

}
