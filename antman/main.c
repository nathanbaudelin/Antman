/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-antman-nathan.baudelin
** File description:
** main
*/
#include "../include/antman.h"

int main(int ac,char **av)
{
    if (ac != 3) {
        write (1, "Bad number of arguments !\n", 26);
        return (84);
    }
    if ((av[2][0] != '1' && av[2][0] != '2' &&
        av[2][0] != '3') || av[2][1] != '\0') {
        write (1, "Bad filetype !\n", 15);
        return 84;
    }
    if (verif_file (av[1]) == -1)
        return 84;
    char *file;
    if ((file = open_file (av[1])) == NULL)
        return 84;
    free (file);
    return 0;
}
