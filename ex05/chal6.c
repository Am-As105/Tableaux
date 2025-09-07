/*
Challenge 6 : Multiplication par Facteur
Développez un programme qui multiplie chaque élément du tableau par un facteur donné.
Processus :
1. Saisir le tableau original
2. Demander le facteur de multiplication
3. Créer et afficher le tableau résultant
Objectif : Manipuler les éléments de tableau avec des opérations arithmétiques.
*/

#include <stdio.h>

int main()
{
    int count ;
    int facteu;
    
    printf("Enter count Tableau :");
    scanf("%d", &count);
    printf("Enter  facteu :");  
    scanf("%d", &facteu);
    int Tableau[count];
    
    int i;
    for ( i = 0; i < count; i++)
    {
        printf("Enter  num %d: ", i);
        scanf("%d", &Tableau[i]);
    }
    for ( i = 0; i < count; i++)
    {
        printf("%d ", Tableau[i]  * facteu) ; 
    }
}