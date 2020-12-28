// Listing 5.12
// compstr2.cpp
#include <iostream>
#include <string>     // string class
int main()
{
    using namespace std;
    string word = "?ate";
    // string class overloads the != operator
    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}