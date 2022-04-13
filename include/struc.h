/*
** EPITECH PROJECT, 2021
** Struc.h
** File description:
** My_hunter
*/

#ifndef _STRUC_H_
#define _STRUC_H_

typedef struct dlist_s {
    int nbr;
    struct dlist_s *next;
} dlist_t;

#endif