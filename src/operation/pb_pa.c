/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** initiation CSFML
*/

#include <stdio.h>

#include "push_swap.h"

dlist_t *elem_first(dlist_t *list, int nb)
{
    dlist_t *list_tmp;

    list_tmp = malloc(sizeof(dlist_t));
    if (list_tmp == NULL)
        return (NULL);
    list_tmp->nbr = nb;
    list_tmp->next = list;
    list = list_tmp;
    return list;
}

void finish_pa(dlist_t **list_a, dlist_t **list_b, char *c)
{
    int tmp = 0;

    if (*list_b == NULL)
        return;
    tmp = (*list_b)->nbr;
    (*list_a) = elem_first((*list_a), tmp);
    (*list_b) = (*list_b)->next;
    my_putstr(c);
}

void pa(dlist_t **list_a, dlist_t **list_b, char *c)
{
    int tmp = 0;

    if (*list_b == NULL)
        return;
    tmp = (*list_b)->nbr;
    (*list_a) = elem_first((*list_a), tmp);
    (*list_b) = (*list_b)->next;
    my_putstr(c);
    my_putchar(' ');
}

void pb(dlist_t **list_a, dlist_t **list_b, char *c)
{
    int nb = 0;

    if ((*list_a) == NULL)
        return;
    nb = (*list_a)->nbr;
    (*list_b) = elem_first((*list_b), nb);
    (*list_a) = (*list_a)->next;
    my_putstr(c);
    my_putchar(' ');
}