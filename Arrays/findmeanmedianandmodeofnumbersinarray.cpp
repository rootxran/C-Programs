
#include <iostream>
using namespace std;
int main()
{
    int size = 10;
    int a[size] = {1,2,3,4,4,5,6,7,9,10};
    int sum = 0;
    float mean;
    float evenmean = (a[size/2 - 1] + a[size/2])/2.0;
    for(int i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    mean = sum / size;
    cout << "Mean is " << mean << endl;
    if(size % 2 == 1)
    {
        cout << (size + 1)/2 << " is the median";
    }
    else
    {
        cout << evenmean << " is the median";
    }
    int nextcount = 0;
    int previouscount = 1;
    int mode;
    for(int i = 0; i < 10; i++)
    {
        nextcount = 0;
        for(int j = 0; j < 10; j++)
        {
            if(a[i] == a[j])
            {
                nextcount++;
            }
        }
        if(nextcount > previouscount)
        {
            mode = a[i];
        }
        previouscount = nextcount;
    }
    cout << endl << mode << " is mode" << endl;
}
