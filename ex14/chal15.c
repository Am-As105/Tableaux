/*
*/
#include<stdio.h>

int main()
{
    int count_T1;
    int count_T2;
    printf("Enter count Tableau :");
    scanf("%d", &count_T1);
    int i ;
    int Tableau[count_T1];
    for (i  = 0 ; i < count_T1; i++)
    {
        printf("Enter  num %d: ", i);
        scanf("%d", &Tableau[i]);         
    }
    
    printf("Enter count Tableau 2 :");
    scanf("%d", &count_T2);
    
    int Tableau_2[count_T2];

    for (i  = 0 ; i < count_T2; i++)
    {
        printf("Enter  num %d: ", i);
        scanf("%d", &Tableau_2[i]);        
    }
    int total_Tableau[count_T1 + count_T2];

    int j = 0;
    for ( j = 0; j < count_T1 ; j++)
        total_Tableau[j] = Tableau[j];  
    for ( j = 0; j <  count_T2 ; j++)
        total_Tableau[j + count_T1] = Tableau_2[j];

    for ( i = 0; i < count_T1 + count_T2; i++)
        printf(" %d ", total_Tableau[i]);

}