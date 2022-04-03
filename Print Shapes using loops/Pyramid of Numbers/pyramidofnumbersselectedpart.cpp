//Write a program to print pyramid of numbers of selected part using loop
//By RAO ALI NAWAZ
//     1     
//    1 1    
//   1 2  1   
//  1 3  3  1  
// 1 4  6  4  1 
#include <iostream>
using namespace std;
int main()
{
    int rows = 5, number = 1, r3 = -2, r3number = 0;//declaring variables and initializing variable row to 5 number to 1 for outer boundary 
 //r3 for row number 3 which is initialized to -2 because when row 3 will come it will become zero due to incrementation
//r3number is the which is initialized to 0 because when row 3 will come it will become 2  due to incrementation which will be printed in middle of row 3
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= (2 * rows); j++)
        {
            if(i > 2 && i <=5)//for inner pyramid
            {
                if(j == (rows - r3) || j == (rows + r3))
                {
                    cout << r3number;
                }
            }
            if(i == 5)//for row number 5 middle number
            {
                if(j == rows)
                {
                    cout << "6";
                }
            }
            if(j == rows - (i - 1) || j == rows + (i - 1))//for outer pyramid
            {
                cout << number;
            }
            else
            {
                cout << " ";
            }
        }
        r3++;
        r3number++;
        cout << endl;
    }
    return 0;
}
