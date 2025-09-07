/*
Challenge 12 : Filtrage des Nombres Pairs
Développez un programme qui affiche uniquement les éléments pairs d'un tableau.
Condition : Utiliser l'opérateur modulo % pour tester la parité.
Objectif : Appliquer des conditions de filtrage sur les tableaux
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
        if (Tableau[i] % 2  == 0)
        {
            printf("%d ", Tableau[i]);
            
        }
   }
   
}