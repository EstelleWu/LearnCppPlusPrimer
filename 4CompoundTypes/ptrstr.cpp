// Listing 4.20
// ptrstr.cpp -- using pointers to strings
#include <iostream>
#include <cstring>        // declare strlen(), strcpy()
int main()
{
    using namespace std;
    char animal[20] = "bear";    // animal holds bear
    const char * bird = "wren";  // bird holds address of string
                                 // "wren" actually represents the address of the string
                                 // the statement assigns the address of "wren" to the bird pointer
    char * ps;                   // uninitialzed

    // cout recognize it is a c-style string since bird is a pointer to char (compared to arrayone.cpp)
    cout << animal << " and ";   // display bear
    cout << bird << "\n";        // display wren!!! cout recognize it is a c-style string since bird is a pointer to char
    // cout << ps << "\n";          // may display garbage(in this machine), may cause a crash 

    cout << "Enter a kind of animal: ";
    cin >> animal;               // ok if input < 20 chars
    cin >> ps;                   // too horrible a blunder to try; ps doesn't point to allocated space
                                 // (crash in this machine)

    ps = animal;                 // set ps to point to string
    cout << ps << "!\n";         // ok, same as using animal
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int*) animal << endl;
    cout << ps << " at " << (int*) ps << endl;

    ps = new char[strlen(animal) + 1];   // get new storage
    strcpy(ps, animal);                  // copy string to new storage
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int*) animal << endl;
    cout << ps << " at " << (int*) ps << endl;
    delete [] ps;
    return 0;
}