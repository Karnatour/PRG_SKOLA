#include "header.h"

int main()
{
    int i, volba, loop = 1;
    Tauta auticka[i], autickafromfile[10000];
    do
    {
        printf("1. Nacteni struktur\n"
               "2. Vypis struktur\n"
               "3. Ulozeni do bin souboru\n"
               "4. Nacteni z bin souboru\n"
               "5. Vypis bin souboru\n"
               "6. Ukonceni programu\n"
               "7. Bublinkove razeni\n"
               "8. Bublinkove razeni binarniho souboru nutno zvolit 4 predtim\n");
        scanf("%d", &volba);
        switch (volba)
        {
            case 1:
                printf("Kolik struktur chcete vytvorit ?\n");
                scanf("%d", &i);
                fflush(stdin);
                nacteni(auticka, i);
                break;
            case 2:
                vypis(auticka, i);
                break;
            case 3:
                ulozdobin(auticka, i);
                break;
            case 4:
                nactizbin(autickafromfile, &i);
                break;
            case 5:
                vypis(autickafromfile, i);
                break;
            case 6:
                loop = 0;
                break;
            case 7:
                bublinkove_razezni(auticka, i);
                break;
            case 8:
                bublinkove_razezni(autickafromfile, i);
                break;
            default:
                printf("Tato volba neexistuje\n");
        }
    } while (loop == 1);
    system("pause");
    return 0;
}

