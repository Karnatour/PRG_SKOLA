//
// Created by vojta on 13.09.2023.
//

#ifndef INC_13_09_2023_HEADER_H
#define INC_13_09_2023_HEADER_H

#include <stdlib.h>
#include <stdio.h>

typedef struct{
    char model[20];
    float rychlost;
    float cena;
    int rok_vyroby;
}Tauta;

void nacteni(Tauta auta[],int pocet);
void vypis(Tauta auta[],int pocet);
void ulozdobin(Tauta auta[], int pocet);
void nactizbin(Tauta auta[],int *pocet);
void bublinkove_razezni(Tauta auta[],int pocet);



#endif //INC_13_09_2023_HEADER_H