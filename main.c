/*
    Name : Discord8
    Date : 04/11/2023
    Time :

*/



#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char chaine[133];

    setlocale(LC_CTYPE,"");

    printf("\n!---Programme de suppression de \"e\"----!");

    printf("\nEntrez une chaine de caractères : ");
    gets(chaine);

    for( int i = 0; chaine[i] !='\0'; i++ )

    {
        if(chaine[i] == 'e' || chaine[i] == 'E')
        {

                for(int j = i ; chaine[j] != '\0'; j++)
                {
                     chaine[j] = chaine[j+1];
                }
                //chaine[i] =" ";


          i--;
        }

    }
    printf("La chaine de caractère sans les \"e\" , %s. \n", chaine);




    return 0;
}








