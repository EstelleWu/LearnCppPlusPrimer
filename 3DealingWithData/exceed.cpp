// exceed.cpp -- exceeding some integer limits
#include <iostream>
#define ZERO 0                 // make ZERO symbol for 0 value
#include <climits>             // define INT_MAX as largest int value
int main()
{
    using namespace std;
    short sam = SHRT_MAX;     // initialize a variable to max value
    unsigned short sue = sam; // okay if variable sam already defined

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited. " << endl
         << "Add $1 to each account." << endl << "Now ";
    sam = sam + 1;            // will go beyond the upper limit of (signed) short
    sue = sue + 1;            // will not go beyond the upperlimit of unsigned short
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl;
    cout << "Take $1 from each account." << endl << "Now ";
    sam = sam - 1;            // will not go below the lower limit of (signed) short
    sue = sue - 1;            // will go below the lower limit of (signed) short
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
    return 0;
}