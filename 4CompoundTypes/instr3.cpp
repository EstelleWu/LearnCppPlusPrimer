// Listing 4.5
// instr3.cpp -- reading more than one word with get() & get()

#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    // cout << "Enter your name:\n";
    // cin.get(name, ArSize);    // read string, without newline
    // cout << "Enter your favorite dessert:\n";
    // cin.get(dessert, ArSize);
    // cout << "name is " << strlen(name) << endl;
    // cout << "dessert is " << strlen(dessert) << endl;    // strlen(dessert) == 0 as only the newline character is put into the dessert

    cout << "Enter your name:\n";
    cin.get(name, ArSize).get();    // read string, newline
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();  
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}