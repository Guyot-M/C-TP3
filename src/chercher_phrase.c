#include <stdio.h>
int main() {

    #define SIZE 100

    char *chercher= "Pourriez vous me donner l'heure ?";
    char *phrases[] = {"Je m'appelle Mallory",
                            "J'aime le C",
                            "Bonjour le monde",
                            "Aujourd'hui il fait beau",
                            "La fleur à le coeur au bord des pétales",
                            "Pourriez vous me donner l'heure ?",
                            "Il y a trop de sauterelle dans ce melon",
                            "Il pleu des kiwi et des ananas en novembre",
                            "La fontaine pleure car la balaine lui a mangé son quatre heure",
                            "La dichotomie est un dictionnnaire répertoriant toute la vie note cher Tomy"};

    //On prendre les phrases du tableau une par une
    for(int i = 0; i < 10; i++)
    {
        int count = 0;
        //On vérifie, à la même position, si chaque caractère de la pharse prise correspond au caractère de la phrase recherché.
        for (int j= 0 ; j < SIZE; j++) 
        {
            if (*(*(phrases+i)+j) == *(chercher+j))
                count++;
            if (count == SIZE) //La pharse existe quand le nombre de caractère matchant correpsond à la taille de la phrase recherché.
                printf("La pharse existe");
        }
    }
}