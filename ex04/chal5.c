/*
Challenge 5 : Recherche du Minimum
Créez un programme qui trouve l'élément le plus petit dans un tableau.
Méthode : Similaire au maximum, mais avec comparaison inverse.
Objectif : Renforcer les algorithmes de recherche d'extremum.

*/
#include<stdio.h>

int sort_min(int *tab , int count)
{
    int i ;
    int swap;
    while ( count >= 0)
    {
        i = 0;
        while (i < count - 1)
        {
            if (tab[i] > tab[i + 1])
            {
                swap = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = swap ;
            }
            i++;
        }
        
        count--;
    }
    return tab[0]; 
}
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
    printf("Min = %d", sort_min(Tableau, count));

}