// Listing 4.3
// instr1.cpp -- reading more than one string
/*
problem: 
if we type "aaa ddd" (space inbetween), we are not asked for the second cin

reason:
(word oriented)
the cin technique is to use whitespace - spaces, tabs, and newlines - to delineate a string
cin reads just one word when it gets input for a character array

cin reads aaa as the entire first string and puts it into the name array,
and leaves ddd sitting in the input queue,
when cin searches the input queue for the response to the favorite dessert question,
it finds ddd still there and then gobbles up ddd and puts it into the dessert array
*/
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}