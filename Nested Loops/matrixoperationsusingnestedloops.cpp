//Write a program to print 2 matrix by getting value from user then show a menu with following options
//1. Addition
//2. Subtraction
//3. Multiplication
#include <iostream>
using namespace std;
int main()
{
    int choice;
    int A11, A12, A13, A21, A22, A23, A31, A32, A33;
    int B11, B12, B13, B21, B22, B23, B31, B32, B33;
    cout << "Enter enteries for Matrix A: " << endl;
    cin >> A11 >> A12 >> A13 >> A21 >> A22 >> A23 >> A31 >> A32 >> A33;
    cout << "Enter enteries for Matrix B: " << endl;
    cin >> B11 >> B12 >> B13 >> B21 >> B22 >> B23 >> B31 >> B32 >> B33;
    cout << "matrix A" << "\t\t\t\t" << "Matrix B"<< endl;
    cout << A11 << "\t" << A12 << "\t" << A13 << "\t\t\t";
    cout << B11 << "\t" << B12 << "\t" << B13 << endl;
    cout << A21 << "\t" << A22 << "\t" << A23 << "\t\t\t";
    cout << B21 << "\t" << B22 << "\t" << B23 << endl;
    cout << A31 << "\t" << A32 << "\t" << A33 << "\t\t\t";
    cout << B31 << "\t" << B32 << "\t" << B33 << endl;
    cout << "\n1. Addition" << endl << "2. Subtraction" << endl << "3. Multiplication" << endl;
    cout << endl << "Enter a choice: ";
    cin >> choice;
    if(choice == 1)
    {
        for(int i = 1; i <= 3; i++)
        {
            for(int j = i; j <= 3; j++)
            {
                if(j == 1)
                {
                    cout << (A11 + B11) << "\t" << (A12 + B12) << "\t" << (A13 + B13);
                    break; 
                }
                if(j == 2)
                {
                    cout << (A21 + B21) << "\t" << (A22 + B22) << "\t" << (A23 + B23); 
                    break;
                }
                if(j == 3)
                {
                    cout << (A31 + B31) << "\t" << (A32 + B32) << "\t" << (A33 + B33); 
                    break;
                }
            }
            cout << endl;
        }
    }
    if(choice == 2)
    {
        for(int i = 1; i <= 3; i++)
        {
            for(int j = i; j <= 3; j++)
            {
                if(j == 1)
                {
                    cout << (A11 - B11) << "\t" << (A12 - B12) << "\t" << (A13 - B13);
                    break; 
                }
                if(j == 2)
                {
                    cout << (A21 - B21) << "\t" << (A22 - B22) << "\t" << (A23 - B23); 
                    break;
                }
                if(j == 3)
                {
                    cout << (A31 - B31) << "\t" << (A32 - B32) << "\t" << (A33 - B33); 
                    break;
                }
            }
            cout << endl;
        }
    }
    if(choice == 3)
    {
        for(int i = 1; i <= 3; i++)
        {
            for(int j = i; j <= 3; j++)
            {
                if(j == 1)
                {
                    cout << A11 * B11 + A12 * B21 + A13 * B31 << "\t";
                    cout << A11 * B12 + A12 * B22 + A13 * B32 << "\t";
                    cout << A11 * B13 + A12 * B23 + A13 * B33;
                    break; 
                }
                if(j == 2)
                {
                    cout << A21 * B11 + A22 * B21 + A23 * B31 << "\t";
                    cout << A21 * B12 + A22 * B22 + A23 * B32 << "\t";
                    cout << A21 * B13 + A22 * B23 + A23 * B33;
                    break;
                }
                if(j == 3)
                {
                    cout << A31 * B11 + A32 * B21 + A33 * B31 << "\t";
                    cout << A31 * B12 + A32 * B22 + A33 * B32 << "\t";
                    cout << A31 * B13 + A32 * B23 + A33 * B33;
                    break;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
