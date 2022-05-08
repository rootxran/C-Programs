//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter no of rows: ";
    cin >> rows;
    int count = 1;
    int number = 1; 
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= 2 * rows - 1; j++)
        {
            if(i == 1)
            {
                if(j == rows)
                {
                    cout << "1";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if(j >= rows - (i - 1) && j <= rows + (i - 1))
                {
                    if(j <= rows)
                    {
                        cout << number;
                        number++;
                    }
                    if(j > rows)
                    {
                        if(j == rows + 1)
                        {
                            number--;
                        }
                        number--;
                        cout << number;
                    }
                }
                else
                {
                    cout << " ";
                }
            }
            
        }
        number++;
        cout << endl;
    }
}
