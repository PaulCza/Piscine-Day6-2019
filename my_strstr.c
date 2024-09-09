/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** sjfezf
*/

char *my_strstr(char *str, char const *to_find)
{
    int i;
    int timer;
    timer = 0;
    i = 0;
    while (str[timer] != '\n')
    {
        while (str[timer] != to_find[0])
            timer = timer + 1;
        i = timer;
        while (str[i] = (to_find[i - timer] != '\0'))
            i = i + 1;
        if (to_find[i - timer] == '\0')
            return (&str[timer]);
        timer = timer + 1;
    }
    return (0);
}

