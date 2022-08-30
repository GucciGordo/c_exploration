#include <stdio.h>



int main()
{
    printf("%d", tempCalc(32));
    tempCalcChart();
}

int tempCalcChart()
{
    int fahr, celsius;
    int lower, upper, step;
    lower=0;
    upper=300;
    step=20;
    fahr=lower;
    printf("fahr\tcelsius\n");
    while(fahr <= upper)
    {
        celsius = 5*(fahr -32)/9;
        printf("%d\t%d\n",fahr,celsius);
        fahr=fahr+step;
    }
}
int tempCalc(int fahr)
{
    int celsius;
    celsius = 5*(fahr -32)/9;
    return celsius;
}
