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

    if (n == 1)
    {
        printf("Ascending");
        return 0;
    }

    int isAscending = 1;
    int isDescending = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            isAscending = 0;
        }
        if (a[i] > a[i - 1])
        {
            isDescending = 0;
        }
    }

    if (isAscending)
    {
        printf("Ascending");
    }
    else if (isDescending)
    {
        printf("Descending");
    }
    else
    {
        printf("Not Sorted");
    }
    return 0;
}
