//

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
    int sorted = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            sorted = 0;
            break;
        }
    }
    if (sorted)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }

    return 0;
}
