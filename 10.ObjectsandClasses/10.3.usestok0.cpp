//usestck0.cpp -- the client program
// compile with stock00.cpp

#include <iostream>
#include "10.1.stock00.h"

int main()
{
    Stock fluffy_the_cat;
    // default constructor 
    // without initialization of the data members (all have default values)
    fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400, 20.00);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(3000000, 40.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(3000000, 0.125);
    fluffy_the_cat.show();
    return 0;
}