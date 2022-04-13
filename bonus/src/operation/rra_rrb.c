/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** initiation CSFML
*/

#include <stdio.h>

#include "push_swap.h"

void rrb(dlist_t *list_a, dlist_t *node, char *c)
{
    int tmp = list_a->nbr;

    while (node->next != NULL) {
        node = node->next;
    }
    list_a->nbr = node->nbr;
    node->nbr = tmp;
    my_putstr(c);
}

void rra(dlist_t *list_a, dlist_t *node, char *c)
{
    int tmp = list_a->nbr;

    while (node->next != NULL) {
        node = node->next;
    }
    list_a->nbr = node->nbr;
    node->nbr = tmp;
    my_putstr(c);
    my_putchar(' ');
}