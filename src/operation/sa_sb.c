/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** initiation CSFML
*/

#include <stdio.h>

#include "push_swap.h"

void sa_sb(dlist_t **list_a, char *c)
{
    dlist_t *tmp = (*list_a);

    tmp = tmp->next;
    if ((*list_a)->next == NULL)
        return;
    (*list_a)->next = tmp->next;
    tmp->next = (*list_a);
    (*list_a) = tmp;
    my_putstr(c);
    my_putchar(' ');
}