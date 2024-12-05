#include<stdio.h>

int main(void)
{

    int dim, i, nprint;
    int a[2];
    a[0] = 0;
    a[1] = 1;
 
    printf("inserisci la quantita' numeri della serie di fibonacci da stampare: ");
    scanf("%d", &dim);

    printf("0\n");
    printf("1\n");

    for (i = 0; i < dim-2; i++)
    {   
        
        nprint = a[0] + a[1];
     
        a[i%2] = nprint;
      
        printf ("%d\n", nprint);
   
    }

    return 0;

}