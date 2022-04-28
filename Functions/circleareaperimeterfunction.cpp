//Write a function that receives radius of a circle and return its area and perimeter
//Call this function from main() and print the result in main()
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
float fun(float radius, int choice)
{
    if(choice == 1)
    {
        float area = 3.14 * radius * radius;
        return area;
    }
    else if(choice == 2)
    {
        float perimeter = 2 * 3.14 * radius;
        return perimeter;
    }
}
int main()
{
    float radius;
    float area;
    float perimeter;
    cout << "Enter radius of circle: ";
    cin >> radius;
    area = fun(radius, 1);
    perimeter = fun(radius, 2);
    cout << "Area of circle is " << area << endl;
    cout << "Perimeter of circle is " << perimeter << endl;
    return 0;
}
