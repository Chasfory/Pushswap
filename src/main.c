/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** initiation CSFML
*/

#include "my.h"
#include "push_swap.h"

int main(int ac, char **av)
{
    if (ac < 2)
        return (84);
    for (int i = 1; i < ac; i++) {
        for (int compt = 0; av[i][compt] != '\0'; compt++) {
            if ((av[i][compt] < '0' || av[i][compt] > '9') &&
            av[i][compt] != '-')
                return (84);
        }
    }
    push_swap(ac, av);
    return (0);
}