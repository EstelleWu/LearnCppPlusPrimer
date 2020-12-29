// Listing 6.14
// cingolf.cpp -- non-numeric input skipped (bc line 16-22)
#include <iostream>
const int Max = 5;
int main()
{
    using namespace std;
    // get data
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    for (i = 0; i < Max; i++)
    {
        cout << "round # " << i + 1 << ": ";
        while (!(cin >> golf[i]))
        {
            cin.clear();                // reset input, without this, the program refuses to read any more input
            while (cin.get() != '\n')   // read the remaining input through the end of the line 
                continue;               // get rid of bad input
            cout << "Please enter a number: ";
        }
    }
    // calculate average
    double total = 0.0;
    for ( i = 0; i < Max; i++)
        total += golf[i];
    // report results
    cout << total / Max << " = average score"
         << Max << " rounds\n";
    return 0;
}