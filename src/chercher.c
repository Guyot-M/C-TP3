#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tab[100];
    int entier = 50; 
    char n=0;
    srand(time(NULL));   // Initialise le générateur de nombre aléatoir 
    
    for (int i = 0; i < 100 ; i++)
    {
        tab[i]=rand() % 101;   //génére un nbr aléatoire entre 100 et 1
        printf("%d\n",tab[i]);
    }

    for (int i = 0; i < 100 ; i++)
    {
        if(entier == tab[i] )
        {
            n = 1;
        }
    }
    if (n == 1)
    {
        printf("entier present !\n");
    }
    else
    {
        printf("entier non present :(\n");
    }
    return 0;
}