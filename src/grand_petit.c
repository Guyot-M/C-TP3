#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int entier[100];
    srand(time(NULL));   /* Initialise le générateur de nombre aléatoir */
    
    for (int i = 0; i < 100 ; i++)
    {
        entier[i]=rand() % 10001;   //génére un nbr aléatoire entre 10 000 et 1
    }

    int grand = entier[0];
    int petit = entier[0];
   

    for (int i = 0; i < 100 ; i++)
    {
        if (entier[i] >= grand)
        {
            grand = entier[i];
        }

        if(entier[i] <= petit)
        {
            petit = entier[i];
        }

    }
    printf ("le plus petit nbr est : %d\n", petit);
    printf ("le grand petit nbr est : %d\n", grand);

    return 0;
}