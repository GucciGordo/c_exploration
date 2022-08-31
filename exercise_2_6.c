/* For test, assume x = 10011010, p = 6, n = 2, y = 11101010 */
#include <stdio.h>

int setbits(unsigned char x, int p, int n, unsigned char y);
                                    /* The bytes that we are manipulating need to be signed. */
main()
{
    setbits(154,6,2,234);           /* With this configuration, we want to arrive at 170 = 10101010. */
    return 0;
}

int setbits(unsigned char x, int p, int n, unsigned char y)
{
    char mask;
    char temp;

    mask = ~0;                      /* 11111111 */
    mask = mask >> 8 - n;           /* Shift the mask right 8 - n spaces. These are the bits we want to use from y. */
    temp = y & mask;                /* Temp is the rightmost n bits of y isolated (all others are zero). */
    temp = temp << p - n;           /* Shift the temp bits left to the position we want to change in x. */
    mask = mask << p - n;           /* Shift the mask bits left to the position we want to change in x. */
    x = x & ~mask;                  /* Clear the zone in x we want to replace with the selected bits from y. */
    x = x | temp;                   /* Insert the selected n bits of y into position p of x. */
    printf("%d",x);                 /* Display that shit. */
}
