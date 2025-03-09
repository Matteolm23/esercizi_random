#include<stdio.h>

int main()
{
    srand(time(NULL));

    int a[10], *p, *q, pos1, pos2;

    printf("\n(int  ) %ld bytes\n", sizeof(int));
    printf("(long ) %ld bytes\n", sizeof(long));
    printf("(int *) %ld bytes\n\n", sizeof(int *));

    printf("array di valori a caso: \n");
    for(int i = 0; i < 10; i++)
    {    
        a[i] = rand() % 11;
        printf("%d  ", a[i]);
    }

    printf("\n\ninserisci la prima posizione: ");
    scanf("%d", &pos1);
    printf("inserisci la seconda posizione: ");
    scanf("%d", &pos2);

    q = a + (pos1 - 1);
    p = a + (pos2 - 1);

    printf("\nn elementi di distanza: %ld \n", q - p);
    printf("\nn byte di distanza: %ld\n\n", (long)q - (long)p);
}
