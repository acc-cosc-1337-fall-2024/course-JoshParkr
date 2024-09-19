//write include statements
#include<iostream>
#include "decisions.h"

using std::cin; using std::cout;

int main() 
{
	int user_grade;

	cout << "Enter your Grade: ";
	cin >> user_grade;

	auto letter_grade_if = get_letter_grade_using_if(user_grade);
	auto letter_grade_switch = get_letter_grade_using_switch(user_grade);

	cout << "\n";
	cout << "Your Letter Grade is: " << letter_grade_if << "\n(This uses an if-else-if)\n\n";
	cout << "Your Letter Grade is: " << letter_grade_switch << "\n(This uses a switch)\n";

	return 0;
}