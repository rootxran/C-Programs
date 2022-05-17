//Write a program to transpose 4x4 matrix
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int matrix[4][4] =  {{1,2,3,4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
    int transposematrix[4][4];
    cout << "Matrix:" << endl;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " "; 
        }
        cout << endl;
    }
    cout << "Transpose Matrix: " << endl;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            transposematrix[i][j] = matrix[j][i];
            cout << transposematrix[i][j] << " ";
        }
        cout << endl;
    }
}
