#include<stdio.h>

int main()
{
    int m,n;
    m = n;
    int count = 0;
    scanf("%d",&m);
    while (m > 0)
    {
        m = m/10;
        count ++;
    }
    m = n;
    int sum1 =0;
    int c =0;

    while (c!=(count/2))
    {
        sum1 = sum1+m%10;
        m = m/10;
        c++;
    }
     m = m/10
     
    
    
}