// Print heart shape using loops
// By RAO ALI NAWAZ
//         *                   *
//       * * *               * * *
//     * * * * *           * * * * *
//   * * * * * * *       * * * * * * *
// * * * * * * * * *   * * * * * * * * *
//   * * * * y o u r   n a m e * * * *
//     * * * * * * * * * * * * * * *
//       * * * * * * * * * * * * *
//         * * * * * * * * * * *
//           * * * * * * * * *
//             * * * * * * *
//               * * * * *
//                 * * *
//                   *

#include <iostream>
using namespace std;
int main()
{
	int rows;
	string name;
	cout << "Enter no of rows: ";
	cin >> rows;
	cout << "Enter name: ";
	cin.ignore();
	getline(cin, name);
	cout << endl;
	for (int i = 1; i < 2 * rows; i++)
	{
		for (int j = 1; j < 2 * rows; j++)
		{
			if (i <= rows / 2)
			{

				if (j < rows)
				{
					if (j >= rows / 2 - (i - 1) && j <= rows / 2 + (i - 1))
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
				else
				{
					if (j >= (3 * rows / 2) - (i - 1) && j <= (3 * rows / 2) + (i - 1))
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
			}
			else
			{
				if (j <= (i - rows / 2) || j >= ((2 * rows - 1) - (i - rows / 2 - 1)))
				{
					cout << "  ";
				}
				else
				{
					if(i == rows/2 + 1)
					{
						if(j == ((2 * rows - name.length())/2) + 1)
						{
	
							for(int k = 0; name[k] != '\0'; k++)
							{
								cout << name[k] << " ";
								j++;
							}
						}
						cout << "* ";
					}
					else
					cout << "* ";
				}
			}
		}
		cout << endl;
	}
}