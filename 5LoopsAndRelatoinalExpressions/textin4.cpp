// Listing 5.19
// textin4.cpp -- reading chars with cin.get()
#include <iostream>
int main(void)
{
    using namespace std;
    int ch;             // should be int, not char
    int count = 0;
    while ((ch = cin.get()) != EOF)   // test for end-of-life, will keep asking for input until it meets an EOF
    {
        cout << "a" << endl;
        cout.put(char(ch));
        ++count;
        cout << count << endl;// 
    }
    cout << endl << count << " characters read\n";
    return 0;
}