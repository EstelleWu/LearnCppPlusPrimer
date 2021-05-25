// usestok1.cpp -- using the Stock class
// compile with stock10.cpp
#include <iostream>
#include "10.4.stock10.h"

int main()
{
    {
        using std::cout;
        cout << "Using constructors to create new objects\n";
        Stock stock1("NanoSmart", 12, 20.0);           // syntax1
        stock1.show();
        Stock stock2 = Stock("Boffo Objects", 2, 2.0); // syntax2
        /*
        syntax2, compiler might choose diff approaches to execute
        approach1: same as syntax1 (create a Stock object called stock1, initialize its data members)
        approach2: create a temp object that is then (deep) copied to stock2;
                   and then the temp object is discard (destructor being called)
        my compiler uses approach1
        */
        stock2.show();

        cout << "Assigning stock1 to stock2:\n";
        stock2 = stock1;
        cout << "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();

        cout << "Using a constructor to reset an object\n";
        stock1 = Stock("Nifty Foods", 10, 50.0); 
        // temp object (to be copied to stock1), destructor would be called
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done\n";
    } 
    // this parenthesis before the "return" allow you to see the destructor being called
    // otherwise, the destroctors are being called when the program exit the main()
    //                  -> the windows / file is closed
    return 0;
}