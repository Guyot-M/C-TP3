#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <math.h>

int main() {

    #define SIZE 100
    #define RECHERCHE 3

    int tableau[SIZE];
    int temp;
   
    /* Initialise le générateur de nombre aléatoir */
    srand(time(NULL));

    //On allimente le tableau de nombre aléatoir entre 0 et 100
    for(int i = 0 ; i < SIZE ; i++ ) {
        tableau[i]=rand() % 101;
    }

    //On affiche le tableau avant le trie
    printf("Tableau non trié\n");
    for(int i = 0; i < SIZE; i++)
      printf("%d ", tableau[i]);


    /* Trie dans l'ordre croissant */
    for(int i=0;i<SIZE-1;i++)
    {
        for(int j=i+1;j<SIZE;j++)
        {
            if(tableau[i] > tableau[j])
            {
                temp=tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = temp;
            }
        }
    }
    
    //On affiche le tableau après le trie
    printf("\nTableau trié dans l'ordre croissant\n");
    for(int i = 0; i < SIZE; i++)
      printf("%d", tableau[i]);

    //****Recherche par dichotomie****/

    int millieux = 0;
    int debut = 0;
    int fin = SIZE;
    while (debut <= fin) 
    {
        millieux = floor((debut + fin)/ 2);
        if (tableau[millieux] == RECHERCHE)
        {
            printf("L'entier %i est présent\n", RECHERCHE);
            debut = fin+1;
        }
         else
         {
            if (RECHERCHE > tableau[millieux])
                debut = millieux + 1;
            else
                fin = millieux - 1;
         }
    }

      return (0);
}