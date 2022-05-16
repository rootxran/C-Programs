// Take two integer arrays of size 5 each.
// Initialize both of them by any way you want.
// Now append/concatenate both these arrays and place into third array of size 10
// in such a way that the first array gets placed into third array in the forward order
// but second array gets placed in reverse order.
// By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1,2,3,4,5};
    int b[5] = {6,7,8,9,10};
    int c[10];
    int j = 0;
    cout << "First Array: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl << "Second Array: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    for(int i = 0; i < 5; i++)
    {
        c[i] = a[i];
        j++;
    }
    for(int i = 4; i >= 0; i--)
    {
        c[j] = b[i];
        j++;
    }
    cout << endl << "Concatenated Array: " << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }
}
