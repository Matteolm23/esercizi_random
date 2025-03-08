#include<stdio.h>

int main()
{

size_t n;

printf("\ninserisci un numero positivo: ");
scanf("%lu", &n);

int *pn = &n;

printf("\nPRIMO BYTE DEL NUMERO INSERITO:\n%p\n\n", pn);

printf("TUTTI I BYTE DEL NUMERO INSERITO: \n");

unsigned char *q = (unsigned char *)pn;

for(int i = 0; i < 4; i++)
{    
    printf("%d \t %p\n", *q, q);
    q++;
}

printf("\n\nNUMERO INSERITO IN BINARIO:\n");

int a[32];

for(int i = 32; i > 0; i--)
{
    a[i-1] = n % 2;
    n /= 2;
}

for(int i = 0; i < 32; i++)
{
    if (i % 8 == 0 && i > 7)
        printf("   ");

    if (i % 4 == 0 && i > 3)
        printf(" ");

    printf("%d", a[i]);
}

printf("\n   MSB\t\t\t\t\t  LSB");

printf("\n\n");

}
