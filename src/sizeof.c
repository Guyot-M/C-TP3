#include <stdio.h>

int main ()
{
    printf("taille du int : %lu\n",sizeof (int));
    printf("taille du int * :%lu\n",sizeof (int *));
    printf("taille du int ** :%lu\n",sizeof (int **));
    printf("taille du char * :%lu\n",sizeof (char *));
    printf("taille du char ** :%lu\n",sizeof (char **));
    printf("taille du char *** :%lu\n",sizeof (char ***));
    printf("taille du float * :%lu\n",sizeof (float *));
    printf("taille du float ** :%lu\n",sizeof (float **));
    printf("taille du float *** :%lu\n",sizeof (float ***));
    
    //la taille renvoyer à chaques fois est 4 car cela renvoie une adresse donc en 64bit est codé sur 4 octets
    
    return 0;
}