/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-antman-nathan.baudelin
** File description:
** print
*/
#include "../include/antman.h"

void display_leaf (tree_t **my_leaf)
{
    for (int i = 0; my_leaf[i]->occ != 0; i++) {
        printf ("%c : %d\n", my_leaf[i]->c, my_leaf[i]->occ);
    }
}

void display_tree (tree_t *tree)
{
    printf ("%c : %d\n", tree->c, tree->occ);
    if (tree->gauche != NULL) {
        display_tree (tree->gauche);
    }
    if (tree->droit != NULL) {
        display_tree (tree->droit);
    }
}

void display_dico (dico_t *dico, int size)
{
    for (int p = 0; p < size; p++)
        printf ("%c : %s (%d)\n", dico[p].c, dico[p].code, dico[p].taille);
}
