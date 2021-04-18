// Listing 8.15
// choices.cpp -- choosing a template
#include <iostream>

template<class T>   // or template <typename T>
T lesser(T a, T b)  // #1
{
    return a < b ? a : b;
}

int lesser(int a, int b) // #2
{
    // get absolute value
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    return a < b ? a : b;
}

int main()
{
    using namespace std;
    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;

    cout << lesser(m, n) << endl;      // use #2,             bc regular function over template function
    cout << lesser(x, y) << endl;      // use #1 with double, bc argumets, only matches with #1 (template)
    cout << lesser<>(m, n) << endl;    // use #1 with int,    bc <>, only matches with #1 (template)
    cout << lesser<int>(x, y) << endl; // use #1 with int,    bc <int>, <> (only matches with #1 (template)); int (will create a #1 func with int as inputs)
}