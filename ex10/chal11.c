/*
Challenge 10 : Recherche Linéaire
Développez un programme qui recherche un élément spécifique dans un tableau.
Fonctionnalité : Indiquer si l'élément est présent et éventuellement sa position.
Objectif : Implémenter l'algorithme de recherche linéaire
*/

#include<stdio.h>

int main()
{
    
    int i ;

    int count;
    printf("Enter count Tableau :");
    scanf("%d", &count);

    int Tableau[count];
    for ( i = 0; i < count; i++)
    {
        printf("Enter  num %d: ", i);
        scanf("%d", &Tableau[i]);
    }
    int remplacer;
    int nouvelle;
    printf("entrez la valeur a remplacer :");
    scanf("%d", &remplacer);
    
    printf("Entrez la nouvelle valeur :");
    scanf("%d", &nouvelle);
    for ( int j = 0; j < count; j++)
    {
        if (Tableau[j] == remplacer)
        {
            Tableau[j] = nouvelle;
            
        }
        printf("%d ", Tableau[j]);
       
    }
    

    

    

}