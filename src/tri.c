#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {

    #define SIZE 100

    int tableau[SIZE];
    int *tableauPtr = tableau;
    int temp;
   
    /* Initialise le générateur de nombre aléatoir */
    srand(time(NULL));

    //On allimente le tableau de nombre aléatoir
    for(int i = 0 ; i < SIZE ; i++ ) {
        *(tableauPtr+i)=rand() % 10001;
    }

    //On affiche le tableau avant le trie
    printf("Tableau non trié\n");
    for(int i = 0; i < SIZE; i++)
      printf("%d ", *(tableauPtr+i));


    /* Trie dans l'ordre croissant */
    for(int i=0;i<SIZE-1;i++)
    {
        for(int j=i+1;j<SIZE;j++)
        {
            if(*(tableauPtr+i) > *(tableauPtr+j))
            {
                temp=*(tableauPtr+i);
                *(tableauPtr+i) = *(tableauPtr+j);
                *(tableauPtr+j) = temp;
            }
        }
    }

    //On affiche le tableau après le trie
    printf("\nTableau trié dans l'ordre croissant\n");
    for(int i = 0; i < SIZE; i++)
      printf("%d\n", tableau[i]);

    return (0);
}