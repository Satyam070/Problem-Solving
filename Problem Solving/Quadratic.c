#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    printf("Enter the Values of a, b, c:");
    scanf("%d %d %d", &a, &b, &c);
    int d = (b*b-4*a*c);
    float m,n;
    if(d>0)
    {
        m = (-b + sqrt(d))/2*a;
        n = (-b - sqrt(d))/2*a;

        printf("%f %f",m,n);
    }
    else if(d == 0)
    {
        m = -b/(2*a);
        n = m;
        printf("%f %f ",m, n);
    }

    else
    {
        printf("No Real Roots ");
    }
}