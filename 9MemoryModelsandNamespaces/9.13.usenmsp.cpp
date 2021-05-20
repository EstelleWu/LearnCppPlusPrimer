// usenmsp.cpp -- using namespaces
// g++ 9.13.usenmsp.cpp 9.12.namesp.cpp --std=c++11; otherwise, linker error
#include <iostream>
#include "9.11.namesp.h"

void other(void);
void another(void);
int main(void)
{
    using debts::Debt;
    using debts::showDebt;   
    Debt golf = {{"Benny", "Goatsniff"}, 120.0};
    showDebt(golf);
    other();
    another();
    return 0;
}

void other(void)
{
    using std::cout;
    using std::endl;
    using namespace debts;   // to compare with line10
    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << endl;
    cout << endl;
    Debt zippy[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        getDebt(zippy[i]);
    }
    for (i = 0; i < 3; i++)
    {
        showDebt(zippy[i]);
    }
    cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
    return;
}

void another(void)
{
    using pers::Person;
    Person collector = {"Milo", "Rightshift"};
    pers::showPerson(collector);
    std::cout << std::endl;
}