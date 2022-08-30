/* Print a histogram of the frequencies of different character inputs */
#include <stdio.h>

main()
{
    int c, i, j, p;
    int characters[255];
    for(i=0;i<255;++i)
    {
        characters[i] = 0;
    }
    while((c = getchar()) != EOF)
    {
        if(c >= 32 && c <= 255)
            ++characters[c];
    }
    for(i=0;i<255;++i)
    {
        if(characters[i] != 0)
        {
            printf("%d ",characters[i]);
            for(j=0;j<characters[i];++j)
            {
                putchar(i);
            }
            printf("\n");
        }
    }
}
