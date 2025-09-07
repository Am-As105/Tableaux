/*
Challenge 2 : Saisie Interactive de Tableau
Développez un programme qui demande la taille du tableau puis ses éléments, et les
affiche.
Étapes :
1. Demander le nombre d'éléments
2. Saisir chaque élément
3. Afficher le tableau complet
Objectif : Gérer la taille dynamique et la saisie utilisateur.
Challenge 3 : Calculateur de Somm*/
#include<stdio.h>

int main()
{
    int count;
    printf("Enter count Tableau :");
    scanf("%d", &count);
    
    int Tableau[count];
    int i = 0;
    for ( i = 0; i < count; i++)
    {
        printf("Enter  num %d: ", i);
        scanf("%d", &Tableau[i]);
    }
    
     for ( i = 0; i < count; i++)
    {
        printf(" %d ", Tableau[i]);

    }
}