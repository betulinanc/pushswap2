# include "push_swap.h"

void sort_list(t_list *a, t_list *b, int size)
{ 
    if(size/2 < 2)
        sort_tree(a, size);
    else
    {
        if(a->index > a->next->index)
            sa(a);
        if(already_sorted(a))
            return;
        sort_plus(a, b, size);
    }
}