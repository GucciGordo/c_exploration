/* Write a function reverse() that reverses the character string s. Use it to write a program that reverses its input line by line */
#include <stdio.h>
#define MAXLINE 1000


void reverse(char old[], char new[]);
int getline(char line[],int maxline);

void reverse(char forward[], char backward[])
{
    int i;
    int j = 0;
    for(i=0; forward[i] != '\n'; ++i)
        ;
   while((backward[j] = forward[i]) != '\0')
    {
        ++j;
        --i;
    }
    printf("%s\n",backward);
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
    s[i] = '\0';
    return i;
}
main()
{
    int len;
    char oldline[MAXLINE];
    char newline[MAXLINE];

    while((len = getline(oldline,MAXLINE))>0)
    {
        reverse(oldline, newline);
    }
    return 0;
}


