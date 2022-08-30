#include <stdio.h>

main()
{
    char letter;
    for(letter='A';letter<='z';++letter)
    {
        printf("%c is %d\n",letter,letter);
    }
}
