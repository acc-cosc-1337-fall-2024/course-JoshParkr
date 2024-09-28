//add include statements
#include <iostream>
#include "repetition.h"
//add function(s) code here
using std::cin; using std::cout;
using std::string;

int factorial(int num)
{
    int sum = 1;
    if(!(num > 0))
    {
        sum = 0;
    }

    while(num > 0)
    {
        sum = num * sum;
        num--;
    }
    return sum;
}

int gcd(int num1, int num2)
{
    while(num1 != num2)
    {
        if(num1 < num2)
        {
            int temp_num = num1;
            num1 = num2;
            num2 = temp_num;
        }
        if(num1 > num2)
        {
            num1 = num1 - num2;
        }
    }
    return num1;
}

void menu()
{
    enum menu_options {factorials=1, greatest_common_divisor, exit};
    int user_menu_choice;
    int user_num1;
    int user_num2;
    char user_exit_confirmation;
    do
    {
        display();
        
        cout << "Enter a Menu option: ";
        cin >> user_menu_choice;

        switch (user_menu_choice)
        {
        case factorials:
            cout << "\nFactorial:\n\nPlease enter a number greater than 0: ";
            cin >> user_num1;
            if(user_num1 > 0)
            {
                cout << "\n= " << factorial(user_num1) << "\n\n";
            }
            else
            {
                cout << "Invalid Input, number must be greater than 0.\n\n";
            }

            break;
        
        case greatest_common_divisor:
            cout << "\nGreatest Common Divisor:\n\nPlease enter two numbers:\n";
            cout << "1st Number: ";
            cin >> user_num1;
            cout << "2nd Number: ";
            cin >> user_num2;
            cout << "\n= " << gcd(user_num1, user_num2) << "\n\n";

            break;

        case exit:
            cout << "Are you sure you want to exit? (Y or y): ";
            cin >> user_exit_confirmation;
            if (!(user_exit_confirmation == 'Y' || user_exit_confirmation == 'y'))
            {
                user_menu_choice = 0;
            }
            else
            {
                cout << "Exiting program... Goodbye :)\n";
            }
            break;

        default:
            cout << "Invalid option was entered. Please enter an option given on the menu (1, 2, or 3).\n\n";
            break;
        }
    }
    while(user_menu_choice !=3);


}

void display()
{
    cout << "-------------------------\n\n";
    cout << "1-Factorial\n";
    cout << "2-Greatest Common Divisor\n";
    cout << "3-Exit\n\n";
    cout << "-------------------------\n\n";

}