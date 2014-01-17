//
//  structures.c
//  Variables
//
//  Created by Guillaume on 17/01/2014.
//  Copyright (c) 2014 Guillaume. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include "tests.h"

struct Structure {
    int variable1, variable2;
    
};

void pointeurTest(){
    int variable = 123;
    int *pointeur = &variable;
    printf("Variable: %d \nPointeur: %d \nValeur: %d \n", variable, pointeur, *pointeur);
    setVariable(pointeur, 10000);
    printf("> \"*pointeur = 10000;\" \n");
    printf("pointeur = %d; valeur = %d\n",pointeur, *pointeur);
}

static void setVariable(int *pointeur, int valeur){
    *pointeur = valeur;
}


void structureTest(){
    struct Structure s = {0, 0};
    printf("> \"struct Structure s = {0,0}\" \n");
    printf("Variables dans la structure:%d,%d\n", s.variable1, s.variable2);
    s.variable1 = MACRO_1;
    s.variable2 = MACRO_2;
    printf("> \"s.variable1 = %d;\" \n", s.variable1);
    printf("> \"s.variable2 = %d;\" \n", s.variable2);
    printf("Variables dans la structure:%d,%d\n", s.variable1, s.variable2);
}