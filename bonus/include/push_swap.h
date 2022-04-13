/*
** EPITECH PROJECT, 2021
** push_swap.h
** File description:
** hunter
*/

#ifndef _PUSH_SWAP_H_
#define _PUSH_SWAP_H_

#include <stdlib.h>
#include <stdio.h>

#include "my.h"
#include "struc.h"

dlist_t *elem_first(dlist_t *list, int nb);
void finish_pa(dlist_t **list_a, dlist_t **list_b, char *c);
void pa(dlist_t **list_a, dlist_t **list_b, char *c);
void pb(dlist_t **list_a, dlist_t **list_b, char *c);
void ra(dlist_t *list_a, dlist_t *node, char *c);
void rb(dlist_t *list_a, dlist_t *node, char *c);
void rrb(dlist_t *list_a, dlist_t *node, char *c);
void rra(dlist_t *list_a, dlist_t *node, char *c);
void sa_sb(dlist_t **list_a, char *c);
dlist_t *node_create(int nb);
void free_list(dlist_t *list);
void check_list_tree(dlist_t **list_a, dlist_t **list_b,
dlist_t **node, dlist_t **nide);
void check_list_bis(dlist_t **list_a, dlist_t **list_b,
dlist_t **node, dlist_t **nide);
void check_the_order_of_the_list(dlist_t **list_a,
dlist_t **list_b, dlist_t *node, int compt);
void check_list_la_lb(dlist_t **list_a, dlist_t **list_b, dlist_t *node, int compt);
int push_swap_test(int ac, char **av);
void swap_list_b(dlist_t **list_a, dlist_t **list_b, dlist_t **nide);
void struc_free_list(dlist_t *list_a, dlist_t *list_b);
int order_of_the_list(dlist_t **list_a,
dlist_t *node, int compt);
void display_list(dlist_t const *list, char *c);

#endif