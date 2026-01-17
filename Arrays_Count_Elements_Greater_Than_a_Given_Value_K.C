#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int k, count = 0;
    scanf("%d", &k);
    for (int j = 0; j < n; j++)
    {
        if (a[j] > k)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
