// Listing 5.16
// textin1.cpp -- reading chars with a while loop
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;    // use basic input
    cout << "Enter characters; enter # to quit:\n";
    cin >> ch;        // get a character, doesn't read space/tab ...
    while (ch != '#') // test the character
    {
        cout << ch;   // echo the character
        ++count;      // count the character
        cin >> ch;    // get the next character
    }
    cout << endl << count << " characters read\n";
    return 0;
}