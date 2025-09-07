/*
Challenge 8 : Copie de Tableau
Développez un programme qui copie un tableau dans un autre tableau.
Vérification : Afficher les deux tableaux pour confirmer la copie correcte.
Objectif : Maîtriser la copie d'éléments entre tableaux.
*/

#include<stdio.h>



int main()
{
    int count ;
    printf("Enter count Tableau :");
    scanf("%d", &count);
    
    int Tableau[count];
    int T_copy[count];
    
    int i = 0;
    
    for ( i = 0; i < count; i++)
    {
        printf("Enter  num %d: ", i);
        scanf("%d", &Tableau[i]);
    }
    for ( int j = 0; j < count; j++)
    {
      T_copy[j] = Tableau[j];
    }
    
}