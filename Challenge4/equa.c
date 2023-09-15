#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    int b;
    int c;
    int delta;
    int x;
    float x1;
    float x2;

    printf("Entrer a: ");
    scanf("%d", &a);
    printf("Entrer b: ");
    scanf("%d", &b);
    printf("Entrer c: ");
    scanf("%d", &c);

    delta = (pow(b, 2) - (a *c));

    if (delta == 0)
    {
        x = (-(b)/(2*a));
        printf("solution de %dx²+%dx+%d = 0", a,b,c);
        printf("x = %d", x);

    }
    else if (delta > 0)
    {
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
        printf("solution de %dx²+%dx+%d = 0\n", a,b,c); 
        printf("x1 = %f\n", x1);
        printf("x2 = %f", x2);
    }
    else
        printf("Pas solution");
    

}