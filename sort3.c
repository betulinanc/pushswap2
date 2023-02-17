# include "push_swap.h"

void sort_plus(t_list *a, t_list *b, int size)
{
	static int s2;
    int rank;
    int i;
    
    i = 0;
	s2 = size;
    s2= s2 / 2;
    while(ft_lstsize(b) < 3)
    {
            if(a->index < s2)
            {
                pb(&b, &a);
                if(already_sorted(a))
                        break;
            }
            else
            {
				
                rank = find_min_index_rank(a, s2);
                if(rank == ft_lstsize(a))
                {
                    if(already_sorted(a))
                        break;
                    rra(a);
                    pb(&b,&a);
                }
                else
                {
                    if(already_sorted(a))
                        break;
                    ra(a);
                }

            }
        i++;
    }
        //sort_tree(a,size);
            printf("%d",b->data);
            b=b->next;
            printf("%d",b->data);
}
