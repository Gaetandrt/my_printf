/*
** EPITECH PROJECT, 2021
** All the conversion i need
** File description:
** conversion
*/

#include "../../include/my_printf.h"
#include <stdio.h>
#include <stdlib.h>

char hex_base_upper(int nb)
{
    if (nb == 10)
        return ('A');
    if (nb == 11)
        return ('B');
    if (nb == 12)
        return ('C');
    if (nb == 13)
        return ('D');
    if (nb == 14) {
        return ('E');
    } else {
        return ('F');
    }
}

char hex_base_lower(int nb)
{
    if (nb == 10)
        return ('a');
    if (nb == 11)
        return ('b');
    if (nb == 12)
        return ('c');
    if (nb == 13)
        return ('d');
    if (nb == 14)
        return ('e');
    else
        return ('f');
}

char *base_to_hex_lower(int nb)
{
    char *str = malloc(sizeof(char) * (my_intlen(nb) + 1));
    int result = nb;
    int i = 0;

    while (result != 0) {
        if (result % 16 >= 10 && result % 16 <= 15) {
            str[i] = hex_base_lower(result % 16);
            result = result / 16;
        } else {
            str[i] = (result % 16) + '0';
            result = result / 16;
        }
        i++;
    }
    return (my_revstr(str));
}

char *base_to_hex_upper(int nb)
{
    char *str = malloc(sizeof(char) * (my_intlen(nb) + 1));
    int result = nb;
    int i = 0;

    while (result != 0) {
        if (result % 16 >= 10 && result % 16 <= 15) {
            str[i] = hex_base_upper(result % 16);
            result = result / 16;
        } else {
            str[i] = (result % 16) + '0';
            result = result / 16;
        }
        i++;
    }
    return (my_revstr(str));
}

char *base_to_octal(int nb)
{
    char *str = malloc(sizeof(char) * (my_intlen(nb)));
    int result = nb;
    int i = 0;

    while (result != 0) {
        str[i] = (result % 8) + '0';
        result = result / 8;
        i++;
    }
    str[i] = '\0';
    return (my_revstr(str));
}

char *base_to_binary(int nb)
{
    char *str = malloc(sizeof(char) * (my_intlen(nb)));
    int result = nb;
    int i = 0;

    while (result != 0) {
        str[i] = (result % 2) + '0';
        result = result / 2;
        i++;
    }
    str[i] = '\0';
    return (my_revstr(str));
}
