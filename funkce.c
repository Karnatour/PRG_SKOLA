//
// Created by vojta on 13.09.2023.
//
#include <string.h>
#include "header.h"

void nacteni(Tauta *auta, int pocet)
{
    for (int i = 0; i < pocet; ++i)
    {
        fflush(stdin);
        printf("Zadejte model \n");
        gets(auta[i].model);
        printf("zadejte rychlost v km/h \n");
        scanf("%f", &auta[i].rychlost);
        printf("Zadejte cenu v CZK \n");
        scanf("%f", &auta[i].cena);
        printf("Zadejte rok vyroby \n");
        scanf("%d", &auta[i].rok_vyroby);
    }
}

void vypis(Tauta *auta, int pocet)
{
    for (int i = 0; i < pocet; ++i)
    {
        printf("\nNazev modelu %s\n"
               "Cena %f\n"
               "Rychlost %f\n"
               "Rok vyroby %d\n", auta[i].model, auta[i].cena, auta[i].rychlost, auta[i].rok_vyroby);
    }

}

void ulozdobin(Tauta *auta, int pocet)
{
    FILE *f;
    f = fopen("file.bin", "wb");
    fwrite(&pocet, sizeof(int), 1, f);
    fwrite(auta, sizeof(Tauta), pocet, f);
    fclose(f);
}

void nactizbin(Tauta *auta, int *pocet)
{
    FILE *f;
    f = fopen("file.bin", "rb");
    fread(pocet, sizeof(int), 1, f);
    fread(auta, sizeof(Tauta), *pocet, f);
    fclose(f);
}

void bublinkove_razezni(Tauta *auta, int pocet)
{
    Tauta pom;
    int volba, i, loop;
    printf("Razeni podle ceny = 1, podle modelu = 2\n");
    fflush(stdin);
    scanf("%d", &volba);
    if (volba == 1)
    {
        do
        {
            loop = 0;
            for (i = 0; i < pocet - 1; i++)
            {
                if (auta[i].cena > auta[i + 1].cena)
                {
                    pom = auta[i];
                    auta[i] = auta[i + 1];
                    auta[i + 1] = pom;
                    loop = 1;
                }
            }
        } while (loop == 1);
    } else
    {
        do
        {
            loop = 0;
            for (i = 0; i < pocet - 1; i++)
            {
                if (strcmp(auta[i].model,auta[i + 1].model) > 0)
                {
                    pom = auta[i];
                    auta[i] = auta[i + 1];
                    auta[i + 1] = pom;
                    loop = 1;
                }
            }
        } while (loop == 1);
    }
    fflush(stdin);
}
