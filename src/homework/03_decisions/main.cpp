//write include statements
#include<iostream>
#include "decisions.h"

using std::string;
using std::cin; using std::cout;

int main() 
{
	int user_grade;
	int user_menu_choice;
	string letter_grade;

	cout << "\tMAIN MENU\n\n" << "1-Letter grade using if\n" << "2-Letter grade using switch\n" << "3-Exit\n\n";
	cin >> user_menu_choice;

	switch (user_menu_choice)
	{
	case 1:
		cout << "Enter your Grade: ";
		cin >> user_grade;

		letter_grade = get_letter_grade_using_if(user_grade);

		cout << "\n";
		cout << "Your Letter Grade is: " << letter_grade << "\n(This uses an if-else-if)\n";
		break;
	case 2:
		cout << "Enter your Grade: ";
		cin >> user_grade;

		letter_grade = get_letter_grade_using_switch(user_grade);

		cout << "\n";
		cout << "Your Letter Grade is: " << letter_grade << "\n(This uses an switch)\n";
		break;
	case 3:
		cout << "Exiting program, goodbye :)\n";
		break;
	default:
		cout << "Invalid input, ending program.\n";
	}

	return 0;
}