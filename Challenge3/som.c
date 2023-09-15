#include<stdio.h>

int main()
{
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a == b)
    {
        a = 3 * (a+b);
    }
    else
        a = a + b;
    printf("Result = %d", a);
}