/* write a loop with multiple conditions without using && or || */
#include <stdio.h>
#define MAX 10
main()
{
    int i = 0, j = 0, k = 0,c;
    int lim = MAX;
    while(i<=lim-1)
    {
        if((c = getchar()) != EOF)   /* see comment below */
        {
            if((c = getchar()) != '\n')
            {
                ++k;
            }

            ++j;
        }
        else
        {
            printf("%d %d %d",i,j,k); /* checking the iterators */
            return 0;
        }
    }
    return 0;
}


/* NOT BULLETPROOF BUT THIS COMPARES TO:

for (i=0; i<=lim-1 && (c = getchar()) != '\n' && c != EOF; ++i) */
