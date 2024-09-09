/*
** EPITECH PROJECT, 2019
** test_my_revstr
** File description:
** dzafezfe
*/

#include <criterion/criterion.h>

Test(my_revstr, reverse_string)
{
    char test1[9] = "Bonchour\0";
    char test2[9] = "ruohcnoB\0";
    my_revstr(test1);    
    cr_assert_str_eq (test1, test2);
}
