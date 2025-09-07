/*
Challenge 9 : Inversion de Tableau
Créez un programme qui inverse l'ordre des éléments d'un tableau.
Exemple : [1, 2, 3, 4, 5] devient [5, 4, 3, 2, 1]
Méthode : Échanger les éléments symétriques (premier avec dernier, etc.)
Objectif : Manipuler les indices de tableau de manière symétrique*/
#include <stdio.h>

int main()
{
    int count;
    printf("Enter count Tableau :");
    scanf("%d", &count);
    
    int Tableau[count];
    
    
   for (int i = 0; i < count; i++)
    {
        printf("Enter  num %d: ", i);
        scanf("%d", &Tableau[i]);
    }
    for (int j = count ; j > 0; j--)
    {
        printf("%d  ", Tableau[j-1]);
        
    }
    
    
}