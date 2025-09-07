/*
Challenge 14 : Calcul de Moyenne
Développez un programme qui calcule la moyenne arithmétique des éléments d'un tableau.
Formule : Moyenne = Somme des éléments / Nombre d'éléments
Note : Gérer la division par zéro et les nombres décimaux.
Objectif : Combiner calculs cumulatifs et opérations mathématiques.
*/
#include<stdio.h>

int main()
{
    int count;
    printf("Enter count Tableau :");
    scanf("%d", &count);
    int i ;
    int Tableau[count];
    int total = 0 ;
    for (i  = 0 ; i < count; i++)
    {
        printf("Enter  num %d: ", i);
        scanf("%d", &Tableau[i]);
        total = total + Tableau[i];
        
    }
    printf("%d", total / count);
    
}