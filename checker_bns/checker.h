#ifndef CHECKER_H
#define CHECKER_H

#include <stdlib.h>

typedef struct node
{
    int data;
    int index;
    int target;
    int total_moves;
    struct node *link;
}t_check;


#endif
