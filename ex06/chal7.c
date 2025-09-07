/*
Challenge 7 : Tri par Ordre Croissant
Créez un programme qui trie un tableau en ordre croissant sans utiliser de fonctions
prédéfinies.
Algorithme suggéré : Tri à bulles ou tri par sélection
Objectif : Implémenter un algorithme de tri de base.

*/
#include<stdio.h>

int main()
{
    
    int i ;
    int swap;
    int count;
    printf("Enter count Tableau :");
    scanf("%d", &count);

    int j = count;
    int Tableau[count];
    for ( i = 0; i < count; i++)
    {
        printf("Enter  num %d: ", i);
        scanf("%d", &Tableau[i]);
    }
    
    for( count = count;  count >= 0 ; count--)
    {
        i = 0;
        for (i = 0 ;  i < count - 1; i++)
        {
            if (Tableau[i] > Tableau[i + 1])
            {
                swap = Tableau[i];
                Tableau[i] = Tableau[i + 1];
                Tableau[i + 1] = swap ;
            }
        
        } 
    }

    for ( i = 0; i < j; i++)
    {
        
        printf("%d ", Tableau[i]);
    
    }
    
}