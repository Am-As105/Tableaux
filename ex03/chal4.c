/*
Challenge 4 : Recherche du Maximum
Développez un programme qui trouve l'élément le plus grand dans un tableau.
Algorithme : Initialiser avec le premier élément, puis comparer avec chaque élément
suivant.
*/
#include<stdio.h>

int sort_max(int *tab , int count)
{
    int i ;
    int swap;
    int j =   count;
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
    return tab[j-1]; 
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
    printf("Max = %d", sort_max(Tableau, count));

}