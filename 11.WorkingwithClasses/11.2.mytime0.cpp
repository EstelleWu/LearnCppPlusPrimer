// mytime0.cpp -- implementing Time methods
#include <iostream>
#include "11.1.mytime0.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time Time::Sum(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}
/*
the return value cannot be a reference
the function creates a new Time object(sum) that represents the sum of the other two Time objects
case1: return type were Time, creates a COPY of the object that the calling function (caller) can use
case2: return type were Time &, the reference would be to the sum object.
       but the sum object is a local variable and is destroyed when the function terminates,
       so the reference would be a reference to a non-existent object. 
*/

void Time::Show() const
{
    std::cout << hours << " hours, " << minutes << " minutes";
}