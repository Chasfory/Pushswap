/*
** EPITECH PROJECT, 2021
** algo.c
** File description:
** pushwap
*/

#include <stdlib.h>
#include <stdio.h>

#include "push_swap.h"

dlist_t *node_create(int nb)
{
    dlist_t *node = malloc(sizeof(dlist_t));

    if (node == NULL)
        return (NULL);
    node->nbr = nb;
    node->next = NULL;
    return (node);
}

void free_list(dlist_t *list)
{
    dlist_t *tmp;

    while (list != NULL) {
        tmp = list->next;
        free(list);
        list = tmp;
    }
}

void check_list_la_lb(dlist_t **list_a,
dlist_t **list_b, dlist_t *node, int compt)
{
    int tmp = 0;
    node = NULL;
    dlist_t *nide = NULL;

    tmp = order_of_the_list(list_a, node, compt);
    while (tmp == 0) {
        check_list_bis(list_a, list_b, &node, &nide);
        while ((*list_b)->next != NULL) {
            nide = (*list_b)->next;
            if ((*list_b)->nbr < nide->nbr)
                sa_sb(list_b, "sb");
            pa(list_a, list_b, "pa");
        }
    pa(list_a, list_b, "pa");
    tmp = order_of_the_list(list_a, node, compt);
    }
    my_putstr("pa\n");
}

void check_the_order_of_the_list(dlist_t **list_a,
dlist_t **list_b, dlist_t *node, int compt)
{
    int tmp = 0;

    node = (*list_a);
    compt = compt - 2;

    while (node->next != NULL && node->nbr < node->next->nbr) {
        node = node->next;
        tmp++;
    }
    if (tmp == compt) {
        my_putchar('\n');
        return;
    }
    check_list_la_lb(list_a, list_b, node, compt);
}

int push_swap(int ac, char **av)
{
    dlist_t *list_a = node_create(my_getnbr(av[1]));
    dlist_t *node = list_a;
    dlist_t *list_b = NULL;

    if (list_a == NULL)
        return (-1);
    for (int i = 2; i < ac; i++) {
        node->next = node_create(my_getnbr(av[i]));
        if (node->next == NULL)
            return (-1);
        node = node->next;
    }
    node = list_a->next;
    if (node == NULL) {
        my_putchar('\n');
        return (0);
    }
    check_the_order_of_the_list(&list_a, &list_b, node, ac);
    struc_free_list(list_a, list_b);
    return (0);
}