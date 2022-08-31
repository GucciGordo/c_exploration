/* Rotate a number right n times */
#include <stdio.h>

int rightrot(unsigned char x, int n);

main()
{
    rightrot(154,3);             /* We want to print 83 for this example */
    return 0;
}

int rightrot(unsigned char x, int n)
{
    unsigned char first, last;    /* Declaring unsigned ensures that when right-shifted, vacated bits are filled with zeros. */

    last = x << 8 - n;            /* Set LAST to be the bits we are going to rotate to the front. */
    first = x >> n;               /* Set FIRST to be the bits we are going to rotate to the back (right). */
    x = first | last;             /* OR-ing them will stitch them together because all other bits are 0. */
    printf("%d",x);               /* Display that MF. */
}
