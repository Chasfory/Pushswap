/*
** EPITECH PROJECT, 2021
** algo_bis.c
** File description:
** pushwap
*/

#include <stdlib.h>
#include <stdio.h>

#include "push_swap.h"

void check_list_tree(dlist_t **list_a, dlist_t **list_b,
dlist_t **node, dlist_t **nide)
{
    if ((*list_a)->nbr <= (*node)->nbr) {
        pb(list_a, list_b, "pb");
        (*nide) = (*list_b)->next;
        if ((*nide) != NULL) {
            if ((*list_b)->nbr < (*nide)->nbr)
                sa_sb(list_b, "sb");
        }
    }
}

void swap_list_b(dlist_t **list_a, dlist_t **list_b, dlist_t **nide)
{
    pb(list_a, list_b, "pb");
    if ((*list_b)->next != NULL) {
        (*nide) = (*list_b)->next;
        if ((*list_b)->nbr < (*nide)->nbr)
            sa_sb(list_b, "sb");
    }
}

void check_list_bis(dlist_t **list_a, dlist_t **list_b,
dlist_t **node, dlist_t **nide)
{
    while ((*list_a)->next != NULL) {
        (*node) = (*list_a)->next;
        if ((*list_a)->nbr > (*node)->nbr) {
            sa_sb(list_a, "sa");
            swap_list_b(list_a, list_b, nide);
        }
        check_list_tree(list_a, list_b, node, nide);
    }
}

void struc_free_list(dlist_t *list_a, dlist_t *list_b)
{
    free_list(list_b);
    free_list(list_a);
}

int order_of_the_list(dlist_t **list_a, dlist_t *node, int compt)
{
    int tmp = 0;

    node = (*list_a);
    while (node->next != NULL && node->nbr <= node->next->nbr) {
        node = node->next;
        tmp++;
    }
    if (tmp == compt)
        return (1);
    return (0);
}