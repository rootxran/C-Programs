// Print heart shape using loops
// By RAO ALI NAWAZ
//         *                   *
//       * * *               * * *
//     * * * * *           * * * * *
//   * * * * * * *       * * * * * * *
// * * * * * * * * *   * * * * * * * * *
//   * * * * * * * * * * * * * * * * *
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
	int rows = 10;
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
					cout << "* ";
				}
			}
		}
		cout << endl;
	}
}