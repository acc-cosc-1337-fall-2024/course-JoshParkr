//add include statements
#include "func.h"
//add function code here
using std::cout; using std::cin;

void display_menu()
{
    cout << "-------------------------\n\n";
    cout << "1- Get GC Content\n";
    cout << "2- Get DNA Complement\n";
    cout << "3- Exit\n\n";
    cout << "-------------------------\n\n";
}

void menu_controller()
{
    enum menu_options {gc_content=1, dna_complement, exit};
    int user_menu_choice;
    string dna;
    char user_exit_confirmation;

    do
    {
        display_menu();
        
        cout << "Enter a Menu option: ";
        cin >> user_menu_choice;

        switch (user_menu_choice)
        {
        case gc_content:
            cout << "\nGC Content:\n\n Please enter the DNA: ";
            cin >> dna;
            cout << "\n= " << get_gc_content(dna) << "\n\n";

            break;
        
        case dna_complement:
            cout << "\nDNA Complement:\n\n Please enter the DNA: ";
            cin >> dna;
            cout << "\n= " << get_dna_complement(dna) << "\n\n";

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

double get_gc_content(const string& dna)
{
    double gc_content;
    int gc_amount = 0;

    for(auto i = 0; i < dna.length(); i++)
    {
        if(dna[i] == 'G' || dna[i] == 'C')
        {
            gc_amount++;
        }
    }

    gc_content = static_cast<double>(gc_amount)/dna.length();

    return gc_content;
}

string get_dna_complement(string dna)
{
    string replaced_dna;

    dna = reverse_string(dna);

    for(auto i = 0; i < dna.length(); i++)
    {
         if(dna[i] == 'A')
        {
            replaced_dna.append(1, 'T');
        }
        else if(dna[i] == 'T')
        {
            replaced_dna.append(1, 'A');
        }
        else if(dna[i] == 'G')
        {
            replaced_dna.append(1, 'C');
        }
        else if(dna[i] == 'C')
        {
            replaced_dna.append(1, 'G');
        }
    }

    return replaced_dna;
}

string reverse_string(string dna)
{
    string reversed_dna;
    for(auto i = (dna.length() - 1); i != -1; i--)
    {
         reversed_dna.append(1, dna[i]);

    }
    return reversed_dna;
}