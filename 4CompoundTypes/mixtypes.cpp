// Listing 4.23
// mixtypes.cpp -- some type combinations
#include <iostream>

struct antarctica_years_end
{
    int year;
    /* some really interesting data, stc. */
};

int main()
{
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end * pa = &s02;
    pa->year = 1999;
    antarctica_years_end trio[3]; // array of 3 structures
    trio[0].year = 2003;
    std::cout << trio->year << std::endl;
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03}; // array of 3 pointers
    std::cout << arp[1]->year << std::endl;
    // a pointer to a pointer; name of an array -> address of the first ele = pointer to a pointer
    const antarctica_years_end ** ppa = arp;  
    // std::cout << "aaa" << std::endl;
    // std::cout << (int*)ppa << std::endl;
    // std::cout << (int*)(&s01) << std::endl;   different
    // std::cout << "aaa" << std::endl;
    auto ppb = arp; // c++ automatic type deduction
    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppa+1))->year << std::endl;
    return 0;
}