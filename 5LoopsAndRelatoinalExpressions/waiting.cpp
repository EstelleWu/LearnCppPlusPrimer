// Listing 5.14
// waiting.cpp -- using clock() in a time-delay loop
#include <iostream>
#include <ctime>    // describe clock() function, clock_t type
int main()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;  // convert to clock ticks
    cout << "starting\a\n";
    clock_t start = clock();         // Returns the processor time consumed by the program.
    while (clock() - start < delay)  // wait until time elapse
        ;                            // note the semicolon
    return 0;
}