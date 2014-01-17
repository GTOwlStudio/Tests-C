//
//  main.c
//  Pointeurs
//
//  Created by Guillaume on 17/01/2014.
//  Copyright (c) 2014 Guillaume. All rights reserved.
//

#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>
#include "tests.h"

//IMPORTANT: déclarer les fonctions AVANT le main ou DANS UN FICHIER .H
void setVariable(int *pointeur, int valeur);

int main(int argc, const char * argv[])
{
    bool run = true;
    do {
        printf("Que voulez-vous faire ?\n");
        printf("    0: Quitter\n    1: test pointeurs\n    2: test structure\n> ");
        int choix = 0;
        scanf("%d", &choix);
        switch (choix) {
            case 1:
                pointeurTest();
                printf("\n");
                break;
            case 2:
                structureTest();
                printf("\n");
                break;
            default:
                goto end;
        }
    } while (run);
    end: printf("Au revoir !");
    return 0;
}

