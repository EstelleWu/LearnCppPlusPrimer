// funcptr.cpp -- easy version
#include <cstdio>  // so we can use put()
using namespace std;
/*
Q: When to use function pointer
A: 1) Function pointers can be useful when you want to create callback mechanisum, 
   and need to pass address of a function to another function. 
   (callback 好处的实现需要 function pointer)
   2) They can be useful when you want to store an array of functions, to call
   dynamically for example
*/
void func()
{
    puts("this is func()");
}

int main()
{
    // 1. return type: void
    // 2. the function pointer name: pfunc
    // 3. argument list: empty in this case
    // 4. the actual func: func
    // Now we have a pointer named pfunc which points to func
    void (*pfunc)() = func;

    puts("this is main()");

    // use function ptr
    pfunc();    // c++ syntax
    (*pfunc)(); // c syntax, also works in c++
    return 0;
}