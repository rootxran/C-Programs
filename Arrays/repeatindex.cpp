#include <iostream>
using namespace std;
int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int index;
	cin >> index;
	for(int i = index; i < 10; i++)
	{
		cout << arr[i] << " ";
		if(i == 9)
		{
			i = -1;
		}
		if(i == index - 1)
		{
			break;	
		}
		
	}
}