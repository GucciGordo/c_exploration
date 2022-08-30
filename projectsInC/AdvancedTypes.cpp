#include <stdio.h>

// Structures, Unions, Typedefs, Enum, Casting, Bit Fields or Packed Structures, Arrays of structures

/* STRUCTUREs */
struct bin  // Created a structure named "bin"
    {
        char name[30];
        int quant;
        int cost;
    }
    throwing_axe_bin = { // Specifically named this "bin" one for throwing axes
        "Throwing Axes",
        0,
        2999
    };

/* UNIONs */
union value // Created a union named "value"
    {
        long int i_value;
        float f_value;
    } data;
        int i;
        float f;
int main()
{

    printf("Check line 14 ------> %d\n\n", throwing_axe_bin.cost);

    throwing_axe_bin.cost = 3000;
    printf("Check line 28  ------> %d\n\n", throwing_axe_bin.cost);


    data.f_value = 5.0;
    data.i_value = 3;
    i = data.i_value; // legal
    f = data.f_value; //illegal
        printf("Check line 32 ------> %f\n\n", f);
        printf("Check line 35 ------> %d\n\n", i);

/* TYPEDEFs */

typedef int group[10]; //can definen more complex objects than a #define argument
group totals;
for (i = 0; i < 10; i++)
    totals[i] = 0;

return (0);
}

