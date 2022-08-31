/* Invert the n bits beginning at position p. */
#include <stdio.h>
int invert(unsigned char x, int p, int n);

main()
{
    invert(154,6,2);                     /* Looking for the answer 170 */
    return 0;
}


int invert(unsigned char x, int p, int n)
{
    unsigned char mask;                   /* Be careful with remembering unsigned char. */

    mask = ~0;                            /* 11111111 */
    mask = mask >> 8 - n;                 /* Shift mask right so that only n 1's exist at the rightmost. */
    mask = mask << p - n;                 /* Shift that section of n 1's back to the p position we want in x. */
    x = x ^ mask;                         /* XOR will hold on to all data that we don't want to change, it'll flip the n bits at p. */
    printf("%d",x);                       /* Display that SOB. */
}
