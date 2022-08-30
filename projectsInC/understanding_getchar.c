/* THIS IS HOW GETCHAR WORKS */
#include <stdio.h>
main()
{
    int c;
    while((c = getchar())!= EOF)
    {
        putchar('EOF');
    }
}
