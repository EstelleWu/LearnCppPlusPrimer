// stone1.cpp -- user-defined conversion functions
// compile with stonewt1.cpp
#include <iostream>
#include "11.19.stonewt1.h"

int main()
{
    using std::cout;
    Stonewt poppins(9, 2.8);   // 9 stone, 2.8 pounds
    double p_wt = poppins;     // implicit conversion
    cout << "Convert to double => ";
    cout << "Poppins: " << p_wt << " pounds.\n";
    cout << "Conver to int => ";
    cout << "Poppins: " << int (poppins) << " pounds.\n";
    return 0;
}