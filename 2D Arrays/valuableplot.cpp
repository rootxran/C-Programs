#include <iostream>
using namespace std;
int main()
{
	int arr[5][5] = {{2, 7, 1, 5, 3}, {4, 1, 3, 9, 7}, {4, 9, 4, 3, 6}, {5, 3, 9, 3, 1}, {8, 5, 8, 9, 7}};
	int row_index;
	int col_index;
	int valueable = 0;
	int temp;
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			temp = arr[i][j] + arr[i][j + 1] + arr[i + 1][j] + arr[i + 1][j + 1];
			if(temp > valueable)
			{
				valueable = temp;
				row_index = i;
				col_index = j;
			}		
		}
	}
	cout << endl << "Most Valuable Plot size is " << valueable << endl;
	cout << endl << "Most Valueable Plot: \n" << endl;
	for(int i = row_index; i < row_index + 2; i++)
	{
		for(int j = col_index; j < col_index + 2; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}