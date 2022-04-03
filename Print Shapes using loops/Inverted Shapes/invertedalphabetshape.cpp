//Write a program to print inverted alphabet shape using loops
//By RAO ALI NAWAZ
// A B C D E F G F E D C B A 
// A B C D E F   F E D C B A 
// A B C D E       E D C B A 
// A B C D           D C B A 
// A B C               C B A 
// A B                   B A 
// A                       A 
#include <iostream>
using namespace std;
int main()
{
    // int character = 64;
    // char check =  static_cast <char> (character);  
    char check = 'A' - 1;//because we are incrementing it in if statement of loop and we want it give us first alphabet A
    int rows = 7;//declaring variable rows and initializing it to 7
    for(int i = 1; i <= rows; i++)//outer loop for rows
    {
        for(int j = 1; j <= 2 * rows - 1; j++)//inner loop for columns
        {
            if(i == 1 || j <= rows - (i - 1) || j >= rows + (i - 1))
            {
                if(i == 1 && j > rows)//making condition for first row second half
                {
                    check = check - 1;
                    cout << check << " ";
                }
                else if(j <= rows)
                {
                    check++;
                    cout << check << " ";
                }
                else
                {
                    cout << check << " ";
                    check = check - 1;
                }
            }
            else
            {
                cout << "  ";//two spaces to make it synchronize it with spaces of alphabets
            }
        }
        check = '@';//as we are incrementing it in if statement of loop so that we used one before A. A has ascii 65 and @ has ascii 64
        // check = static_cast <char> (64);
        cout << endl;
    }
}
