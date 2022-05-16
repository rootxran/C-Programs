// Write a program to find mean median and mode of a generated array of size 20
// By RAO ALI NAWAZ
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int size = 20;
    int a[size];
    int sum = 0;
    int choice;
    float mean;
    int nextcount = 0;
    int previouscount = 1;
    int mode;
    int temp;
    srand(time(NULL));
    for(int i = 0; i < 20; i++)
    {
    	a[i] = rand() % 90 + 1;
	}
	for(int i = 0; i < 20; i++)//rearranging elements in straight order
	{
		for(int j = i + 1; j < 20; j++)
		{
			if(a[i] > a[j])
			{
			    temp = a[i];
			    a[i] = a[j];
			    a[j] = temp;    
			}         
		}
	}
	cout << "Generated Array: \n" << endl;
	for(int i = 0; i < 20; i++)
	{
		cout << a[i] << " ";
	}
    cout << endl << "\nPress 1 for mean" << endl;
    cout << "Press 2 for median" << endl;
    cout << "Press 3 for mode" << endl;
    cout << endl << "Enter a choice: ";
    cin >> choice;
    switch(choice)
    {
    	case 1:
    		{
    			for(int i = 0; i < 20; i++)
			    {
			        sum = sum + a[i];
			    }
			    mean = sum / size;
			    cout << "Mean is " << mean << endl;
			}
			break;
		case 2:
			{
				if(size % 2 == 1)
			    {
			        cout << a[(size)/2] << " is the median";
			    }
			    else
			    {
			        cout << ((a[size/2 - 1]) + (a[size/2]))/2.0 << " is the median";
			    }
			}
			break;
		case 3:
			{
				for(int i = 0; i < 20; i++)//finding mode
			    {
			        nextcount = 0;
			        for(int j = 0; j < 20; j++)
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
			break;
		default:
			{
				cout << "Enter number between 1 and 3";
			}
	}
    return 0;
}
