/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** initiation CSFML
*/

#include <stdlib.h>
#include <stdio.h>

#include "push_swap.h"

void check_list_tree(dlist_t **list_a, dlist_t **list_b,
dlist_t **node, dlist_t **nide)
{
    if ((*list_a)->nbr <= (*node)->nbr) {
        pb(list_a, list_b, "pb");
        display_list((*list_a), "list_a");
        display_list((*list_b), "list_b");
        printf("\n");
        (*nide) = (*list_b)->next;
        if ((*nide) != NULL) {
            if ((*list_b)->nbr < (*nide)->nbr) {
                sa_sb(list_b, "sb");
                display_list((*list_a), "list_a");
                display_list((*list_b), "list_b");
                printf("\n");
            }
        }
    }
}


void swap_list_b(dlist_t **list_a, dlist_t **list_b, dlist_t **nide)
{
    pb(list_a, list_b, "pb");
    display_list((*list_a), "list_a");
    display_list((*list_b), "list_b");
    printf("\n");
    if ((*list_b)->next != NULL) {
        (*nide) = (*list_b)->next;
        if ((*list_b)->nbr < (*nide)->nbr) {
            sa_sb(list_b, "sb");
            display_list((*list_a), "list_a");
            display_list((*list_b), "list_b");
            printf("\n");
        }
    }
}

void check_list_bis(dlist_t **list_a, dlist_t **list_b,
dlist_t **node, dlist_t **nide)
{
    while ((*list_a)->next != NULL) {
        (*node) = (*list_a)->next;
        if ((*list_a)->nbr > (*node)->nbr) {
            sa_sb(list_a, "sa");
            display_list((*list_a), "list_a");
            display_list((*list_b), "list_b");
            printf("\n");
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

void display_list(dlist_t const *list, char *c)
{
    dlist_t *tmp = NULL;

    tmp = list;
    printf("\n%s = ", c);
    while (tmp != NULL) {
        printf("%d ", tmp->nbr);
        tmp = tmp->next;
    }
}