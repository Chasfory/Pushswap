/*
** EPITECH PROJECT, 2021
** test_my_printf
** File description:
** my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "push_swap.h"

void redirect_criterion(void)
{
    cr_redirect_stdout();
    cr_redirect_stdout();
}

Test(pushwap, first_test, .init = redirect_criterion)
{
    int ac = 3;
    char *av[3] = {"./push_swap", "15", "20"};
    char **tab = malloc(sizeof(char *) * 4);

    tab[0] = strdup("./push_wap");
    tab[1] = strdup("15");
    tab[2] = strdup("20");
    tab[3] = NULL;
    push_swap(ac, tab);
    cr_assert_stdout_eq_str("\n");
}

Test(pushwap, second_test, .init = redirect_criterion)
{
    int ac = 4;
    char *av[4] = {"./push_swap", "0"};
    char **tab = malloc(sizeof(char *) * 3);

    tab[0] = strdup("./push_wap");
    tab[1] = strdup("0");
    tab[2] = NULL;
    push_swap(ac, tab);
    cr_assert_stdout_eq_str("\n");
}

Test(pushwap, thirdly_test, .init = redirect_criterion)
{
    int ac = 7;
    char *av[7] = {"./push_swap", "-15", "15", "2", "26", "486", "-45"};
    char **tab = malloc(sizeof(char *) * 8);

    tab[0] = strdup("./push_swap");
    tab[1] = strdup("-15");
    tab[2] = strdup("15");
    tab[3] = strdup("2");
    tab[4] = strdup("26");
    tab[5] = strdup("486");
    tab[6] = strdup("-45");
    tab[7] = NULL;
    push_swap(ac ,tab);
    cr_assert_stdout_eq_str("pb sa pb pb sa pb sb pa sb pa sb pa sb pa pa pa\n");
}

Test(pushwap, fourth_test, .init = redirect_criterion)
{
    int ac = 11;
    char *av[11] = {"./push_swap", "-15", "15", "2", "26", "486", "-45", "789", "-56", "1", "7895"};
    char **tab = malloc(sizeof(char *) * 12);

    tab[0] = strdup("./push_swap");
    tab[1] = strdup("-15");
    tab[2] = strdup("15");
    tab[3] = strdup("2");
    tab[4] = strdup("26");
    tab[5] = strdup("486");
    tab[6] = strdup("-45");
    tab[7] = strdup("789");
    tab[8] = strdup("-56");
    tab[9] = strdup("-1");
    tab[10] = strdup("7895");
    tab[11] = NULL;
    push_swap(ac ,tab);
    cr_assert_stdout_eq_str("pb sa pb pb pb sa pb sb pb sa pb sb sa pb sb pb pa pa pa sb pa sb pa sb pa sb pa sb pa sb pa pa pb pb pb sa pb sb pb sa pb sb pb pb pb pa pa pa pa sb pa pa sb pa pa pa pa\n");
}