/*
** EPITECH PROJECT, 2021
** algo_bis.c
** File description:
** pushwap
*/

#include <stdlib.h>
#include <stdio.h>

#include "push_swap.h"

int order_of_the_list(dlist_t **list_a,
dlist_t *node, int compt)
{
    int tmp = 1;

    node = (*list_a);
    while (node->next != NULL && node->nbr <= node->next->nbr) {
        node = node->next;
        tmp++;
    }
    if (tmp == compt)
        return (1);
    return (0);
}