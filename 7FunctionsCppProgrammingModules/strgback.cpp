// Listing 7.10
// strgback.cpp -- a function that returns a pointer to char
#include <iostream>
char * buildstr(char c, int n);    // prototype
int main()
{
    using namespace std;
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;           // free memory
    ps = buildstr('+', 20); // reuse pointer
    cout << ps << "-DONE-" << ps << endl;
    delete [] ps;           // free memory
    return 0;
}

// builds string made of n c characters
char * buildstr(char c, int n)
{
    char * pstr = new char[n + 1];
    pstr[n] = '\0';     // terminate string
    while (n-- > 0)
        pstr[n] = c;    // fill rest of string
    return pstr;
}

/*
Q: why we don't need to delete pstr in the "buildstr" method?
A: the var pstr is local to the "buildstr" function, 
   when the function terminates, the memory used for pstr (but not for the string) is freed;
   bc the function returns the value of pstr (address of the built string),
   the program is able to access the new string through the ps pointer in main()
   (the string is still needed)

Q: why we need to delete ps in the "main" method?
A: "delete" is used to free memory used for the string after the string is no longer needed,
   then it reuses ps to point to the new block of memory obtained for the next string and frees that memory
   it's the programmer's responsibility to remember to use "delete"

*/