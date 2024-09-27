// check weather given floating value is even or odd
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char choice = 'y';
    while (choice == 'y')
    {
        double number, remainder;
        int whole_part, decimal_part;
        cout << "\n\n\n\t\t\t\t-------**Check even OR odd**--------\n"
             << endl;
        cout << "\t\t\t\t\tEnter a float number: ";
        cin >> number;

        whole_part = number;
        remainder = number - whole_part;

        ostringstream str1;
        str1 << remainder;
        cout << remainder << endl;

        if (remainder != 0)
        {
            string text = str1.str();

            text.erase(0, 2);
            cout << text << endl;
            decimal_part = stoi(text);
        }

        if (decimal_part % 2 == 0)
        {
            cout << "\n\t\t\t\t\t\t[" << number << "] is Even\n\n";
        }
        else if ((whole_part % 2 == 0 && decimal_part % 2 == 0))
        {
            cout << "\n\t\t\t\t\t\t[" << number << "] is Even\n\n";
        }
        else if (isfinite(number) && number == static_cast<int>(number))
        {
            if (static_cast<int>(number) % 2 == 0)
            {
                cout << "\t\t\t\t\tValue is=[" << number << "]" << endl;
                cout << "\t\t\t\t\tValue is even" << endl;
            }
            else
            {
                cout << "\t\t\t\t\tValue is=[" << number << "]" << endl;
                cout << "\t\t\t\t\tValue is odd" << endl;
            }
        }
        else
        {
            cout << "\n\t\t\t\t\t\t[" << number << "] is Odd\n\n";
        }

        cout << "\t\t\t\t\tDo you want to continue? y/n" << endl;
        cin >> choice;
        if (choice == 'n')
        {
            cout << "\t\t\t\t-------**End of the program**-------\n\n";
            break;
        }
    }

    return 0;
}
