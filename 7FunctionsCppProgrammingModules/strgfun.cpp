// Listing 7.9
// strgfun.cpp -- functions with a string argument
// a string function prototype should use type char * as the type for the 
// formal parameter representing a string
#include <iostream>
unsigned int c_in_str(const char * str, char ch);
int main()
{
    using namespace std;
    char mmm[15] = "minimum";   // string in an array

    // string literal 's type is const char[]
    const char *wail = "ululate";

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;
    return 0;
}

// this function counts the number of ch characters
// in the string str
unsigned int c_in_str(const char * str, char ch)
{
    unsigned int count = 0;
    
    while (*str)     // quit when *str is '\0'
    {
        if (*str == ch)
            count++;
        str++;       // move pointer to next char
    }
    return count;
}