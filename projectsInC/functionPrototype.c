#include <stdio.h>

int power(int m, int n);                                   /* called a function prototype */

main()
{
    int i;
    for (i=0;i<10;++i)
    {
        printf("%d %d %d\n", i, power(2,i), power(-3,i));  /* function called in main */
    }
    return 0;
}
int power(int base, int n)                                 /* function defined outside of main */
{
    int i, p;
    p=1;
    for(i=1;i<=n;++i)
    {
        p = p * base;
    }
    return p;
}

