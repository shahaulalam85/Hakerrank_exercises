#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int target_sum;
    scanf("%d", &target_sum);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target_sum)
            {
                printf("%d %d", a[i], a[j]);
                return 0;
            }
        }
    }
    printf("-1\n");
    return 0;
}