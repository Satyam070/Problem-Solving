#include <stdio.h>

int main()
{
    int sum = 0;
    int m;
    scanf("%d",&m);
    while (m / 10 > 0)
    {     sum=0;
        while (m > 0)
        {
            int r = m % 10;
            sum = sum + r;
            m = m / 10;
        }
        if (sum / 10 > 0)
        {
            m = sum;
        }
        else
            break;
    }
    printf("%d", sum);
}