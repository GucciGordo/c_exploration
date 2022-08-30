/* WRITE A PROGRAM TO PRINT ALL INPUT LINES THAT ARE LONGER THAN LONGBOI CHARACTERS */
#include <stdio.h>
#define MAXLINE 1000
#define MAXMAXLINE MAXLINE * MAXLINE
#define LONGBOI 8

int getline(char line[], int maxline);
void copy(char to[],char from[]);

main()
{
    int len;
    int max;
    int i = 0;
    int j;
    char line[MAXLINE];
    char lines[MAXMAXLINE];

    while((len = getline(line,MAXLINE)) > 0)
    {
        if(len > LONGBOI)
        {
            for(j=0;j<len;++i,++j)                            /* LINES ARRAY GETS APPENED BY LINE ARRAY  */
            {
                lines[i] = line[j];
            }
        }
    }
    printf("These lines are longer than %d characters:\n %s",LONGBOI, lines);
    return 0;

}
getline(char s[],int lim)
{
    int c, i;
    for(i=0;i<lim-1 && (c=getchar())!= EOF && c != '\n'; ++i)
        s[i] = c;
    if(c == '\n')
    {
        s[i] = c;
        ++i;
    }
    return i;
}
