#include<stdio.h>
#include "swap.h"

int main(void)
{
    int a, b;
    printf("inserisci 2 numeri\n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("prima dello scambio:\na = %d\nb = %d\n", a, b);
    swap1(a,b);
    printf("dopo lo scambio dei valori:\na = %d\nb = %d\n", a, b);
    swap2(&a,&b);
    printf("dopo lo scambio degli indirizzi di memoria:\na = %d\nb = %d\n", a, b);
}