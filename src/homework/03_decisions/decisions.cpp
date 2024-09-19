//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
using std::string;
using std::cin; using std::cout;

string get_letter_grade_using_if(int grade)
{
    string letter_grade;

    if (grade <= 100 && grade >= 90)
    {
        letter_grade = "A";
    }
    else if (grade >= 80)
    {
        letter_grade = "B";
    }
    else if (grade >= 70)
    {
        letter_grade = "C";
    }
    else if (grade >= 60)
    {
        letter_grade = "D";
    }
    else if (grade >= 0)
    {
        letter_grade = "F";
    }
    else
    {
        letter_grade = "Invalid Grade Inputted";
    }

    return letter_grade;
}

string get_letter_grade_using_switch(int grade)
{
    string letter_grade;

    switch (grade/10)
    {
    case 9 ... 10:
        letter_grade = "A";
        break;
    case 8:
        letter_grade = "B";
        break;
    case 7:
        letter_grade = "C";
        break;
    case 6:
        letter_grade = "D";
        break;
    case 0 ... 5:
        letter_grade = "F";
        break;
    default:
        letter_grade = "Invalid Grade Inputted";
        break;
    }

    return letter_grade;
}