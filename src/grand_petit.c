#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int entier[100];
    int *entierPtr = entier;
    srand(time(NULL));   /* Initialise le générateur de nombre aléatoir */
    
    for (int i = 0; i < 100 ; i++)
        *(entierPtr+i)=rand() % 10001;   //génére un nbr aléatoire entre 10 000 et 1

    int grand =  *(entierPtr);
    int petit =  *(entierPtr);
   
    //On recherche le plus petit nombre et le plus grand nombre parmis ceux dans le tableau
    for (int i = 0; i < 100 ; i++)
    {
        if ( *(entierPtr+i) >= grand) //Si le nombre que je regarde "*(entierPtr+i)" est plus grand que le nombre que je possède "grand", je prend le nombre que je regarde
            grand =  *(entierPtr+i);

        if( *(entierPtr+i) <= petit)
            petit =  *(entierPtr+i);
    }
    printf ("le plus petit nbr est : %d\n", petit);
    printf ("le grand petit nbr est : %d\n", grand);

    return 0;
}