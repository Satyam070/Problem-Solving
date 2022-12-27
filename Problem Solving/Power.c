#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, k,m;
    printf("Enter the value of a,b,k:");
    scanf("%d %d %d",&a, &b, &k);
    m = pow(a,b);
    int c=1,r;
    while(c!= k)
    {
        m = m/10;
        c++;
    }
    r = m % 10;

    printf("%d",r);
    return 0;
}