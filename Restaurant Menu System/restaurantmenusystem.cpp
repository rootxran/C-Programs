//Restrictions >> you can only use if else, switch and goto
//Write a program for restaurant menu system in which user can order multiple items and in the end calculate total amount of order and
//deduct order amount from his balance in credit card
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
    int balance, choice, discount, gst;
    int order = 0;//initializing order to zero to add integers into it
    int neworder = 0;//initializing neworder to zero to not add that amount to order if user not want to reorder 
    char member;//declaring variable for restaurant members
    char reorder;//declaring variable for ordering more items
    cout << "Enter your balance in credit card: ";
    cin >> balance;//storing user input to balance variable

    Menu:
    {
        //making menu for printing each time to make it easier for user to select items
        cout << "Press following numbers to buy:" << endl;
        cout << "Press |  Item    | Price" << endl;
        cout << "  1   |  Pizza   | 1500 " << endl;
        cout << "  2   |  Rice    | 350"   << endl;
        cout << "  3   |  Dumba   | 1100"  << endl;
        cout << "  4   | Spagetti | 500"   << endl;
        cout << "  5   |   Tea    | 30"    << endl;
        cout << "Press 0 to complete your order." << endl;
        cout << "Enter your choice: ";
        cin >> choice;//storing user input to choice variable
        switch(choice)//making switch so we can add amount according to user choice
        {
            case 1:order = order + 1500; goto Menu; break;
            case 2:order = order + 350; goto Menu; break;
            case 3:order = order + 1100; goto Menu; break;
            case 4:order = order + 500; goto Menu; break;
            case 5:order = order + 30; goto Menu; break;
            case 0: goto Calculation; break;
            default: cout << "Press valid number."; goto Menu;
        }
    }
    Calculation:
    {
        // Calculations
        cout << "Are you member of restaurant: (y/n)";
        cin >> member;
        if(member == 'y' || member == 'Y')//if user is restaurant member
        {
        discount = (10 * order) / 100;//giving 10% discount to user
        order = order - discount;
        }
        gst = (16 * order) / 100;//calculating 16 % of order
        order = order + gst;//adding gst value to order
        if(balance >= order)//if balance is greater than or equal to order
        {
            balance = balance - order;//subtracting value of order from balance to show remaining balance
            cout << order + neworder << " has been deducted from your credit card." << endl;
            cout << "Balance in your credit card is " << balance << endl;
            cout << "Do you want to order more (y/n)";
            cin >> reorder;
            if(reorder == 'y' || reorder == 'Y')//if user wants to add more items
            {
                neworder = neworder + order;
                order = 0;
                goto Menu;
            }
            cout << "\nThank you for purchasing.";
        }
        else//if balance is lesser than order
        {
            cout << "You don't have enough balance to complete your order.";
        }
    }
    return 0;
}
