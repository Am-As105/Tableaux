/*
Challenge 13 : Filtrage des Nombres Impairs
Créez un programme qui affiche uniquement les éléments impairs d'un tableau.
Condition : element % 2 != 0 pour identifier les impairs.
Objectif : Renforcer les techniques de filtrage conditionnel
*/

#include<stdio.h>

int main()
{
    int count;
    printf("Enter count Tableau :");
    scanf("%d", &count);
    
    int Tableau[count];
    for ( int i = 0; i < count; i++)
    {
        printf("Enter  num %d: ", i);
        scanf("%d", &Tableau[i]);
    }
    
    for (int  i = 0; i < count; i++)
    {
        if (Tableau[i] % 2  != 0)
        {
            printf("%d ", Tableau[i]);
            
        }
    }
   
}