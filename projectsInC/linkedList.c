#include <stdio.h>
void insert_list(list **l, item_type x)
{
    list *p;               /* temporary pointer */

    p = malloc(sizeof(list));
    p->item = x;
    p->next = *l;
    *l = p;
}

void delete_list(list **l, list **x)
{
    list *p;               /* item pointer */
    list *pred;            /* predecessor pointer */

    p = *l;
    pred = item_ahead(*l, *x);

    if (pred == NULL)      /* splice out of list */
    {
        *l = p->next;
    }
    else {
        pred->next = (*x)->next;
    }
    free(*x);              /* free memory used by node */
}

main()
{
    typedef struct list {
    item_type item;           /* data item */
    struct list *next;        /* point to successor */
    } list;

    list *search_list(list *l, item_type x)
    {
        if (l == NULL)
        {
            return(NULL);
        }
        if (l->item == x)
        {
            return(l);
        }
        else
        {
            return(search_list(l->next, x));
        }
    }




}
