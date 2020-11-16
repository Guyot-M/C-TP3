# include <stdio.h>

int main()
{

    typedef struct couleur color;     //on dit struct couleur = color
    struct couleur      //déclaration de la structure couleur
    {
        unsigned char R;
        unsigned char G;
        unsigned char B;
        unsigned char A;
        char n;
    };

    color tab[10];                              //déclaration d'un tableau de 10 structure couleur

    tab[0].R = 0x0D;
    tab[0].G = 0x20;
    tab[0].B = 0x8B;
    tab[0].A = 0x0F;
    tab[0].n = 1;
    tab[1].R = 0x80;
    tab[1].G = 0x02;
    tab[1].B = 0x02;
    tab[1].A = 0x02;
    tab[1].n = 1;
    tab[2].R = 0x04;
    tab[2].G = 0x04;
    tab[2].B = 0x04;
    tab[2].A = 0x04;
    tab[2].n = 1;
    tab[3].R = 0x08;
    tab[3].G = 0x08;
    tab[3].B = 0x08;
    tab[3].A = 0x08;
    tab[3].n = 1;
    tab[4].R = 0x0A;
    tab[4].G = 0x0A;
    tab[4].B = 0x0A;
    tab[4].A = 0x0A;
    tab[4].n = 1;
    tab[5].R = 0x1C;
    tab[5].G = 0x1C;
    tab[5].B = 0x1C;
    tab[5].A = 0x1C;     //ect...  même chose pour 6 à 9
    tab[5].n = 1;
    tab[6].R = 0x10;
    tab[6].G = 0xFF;
    tab[6].B = 0xF4;
    tab[6].A = 0x0F;
    tab[6].n = 1;
    tab[7].R = 0x80;
    tab[7].G = 0x02;
    tab[7].B = 0x02;
    tab[7].A = 0x02;
    tab[7].n = 1;
    tab[8].R = 0x04;
    tab[8].G = 0x04;
    tab[8].B = 0x04;
    tab[8].A = 0x04;
    tab[8].n = 1;
    tab[9].R = 0x08;
    tab[9].G = 0x08;
    tab[9].B = 0x08;
    tab[9].A = 0x08;
    tab[9].n = 1;

for(int i = 0; i < 10; i++)         //on prend une couleur pour la comparer aux autres
    { 
        if(tab[i].n != -1)          //si la couleur n'a pas déja été tester
        {
            for(int j = 0; j < 10; j++)
            {
                if((i != j)&&(tab[i].R==tab[j].R)&&(tab[i].G==tab[j].G)&&(tab[i].B==tab[j].B)&&(tab[i].A==tab[j].A))  //on compare la couleur choisit à chaques autres couleurs
                {
                    tab[i].n +=1;         //on incrémente le compteur 
                    tab[j].n = -1;      //la couleur présente en double et ne sera pas affichée 
                }
            }
        }
    }

    for(int i = 0; i < 10; i++)
    { 
        if(tab[i].n != -1)
        {
            printf("%#x ",tab[i].R);
            printf("%#x ",tab[i].G);
            printf("%#x ",tab[i].B);
            printf("%#x ",tab[i].A);
            printf("%d\n",tab[i].n);
        }
    }
    return 0;
}
