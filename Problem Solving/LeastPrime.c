#include <stdio.h>

int main()
{
    int n = 6;
    for (int j = 2; j <= n; j++)
    {
        for (int i = 0; i <= j; i++)
        {
            if (j % i == 0)
            {
                printf("%d", j);
                break;
            }
        }
    }
}