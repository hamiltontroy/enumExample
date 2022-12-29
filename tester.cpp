#include <stdio.h>

void yort()
{
    enum
    {
        get,        // set to 0 at compile time
        post,       // set to 1 at compile time
        foo = 999,  // set to 999 at compile time
        bar,        // set to 1000 at compile time
        kaf,        // set to 1001 at compile time
        cat = 88,   // set to 88 at compile time
        dog         // set to 89 at compile time
    };
    
    printf("%d\n", kaf);    // prints 1001
}

int main()
{
    yort();
}
