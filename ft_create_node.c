#include "push_swap.h"

t_stack   *create_node(int nbr)
{
    t_stack   *node;
    node = malloc(sizeof(t_stack));
    if (node == NULL)
        return (NULL);
    node->content = nbr;
    node->next = NULL;
    node->index = 0;
   //  printf("create_node >> %d  \n", nbr);
    return (node);
}

t_stack   *create_empty_stack()
{
    t_stack   *node;
    node = (t_stack *)malloc(sizeof(t_stack));
    if (node == NULL)
        return (NULL);
    //  printf("create_empty_stack >> %d  \n");
    return (node);
}