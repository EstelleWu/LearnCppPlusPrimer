// file1.cpp -- example of a three-file program
// UNIX compile command: CC file1.cpp file2.cpp
// g++ 9.2.file1.cpp 9.3.file2.cpp --std=c++11
#include <iostream>
#include "9.1.coordin.h" // structure templates, function prototypes
using namespace std;
int main()
{
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y) // slick use of cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Bye!\n";
    return 0;
}