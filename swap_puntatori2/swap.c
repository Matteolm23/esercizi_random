void swap1(int a, int b)
{
    int c = a;
    a = b;
    b = c;
}

void swap2(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}