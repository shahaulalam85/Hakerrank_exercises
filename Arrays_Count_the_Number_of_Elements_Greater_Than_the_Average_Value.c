#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int count = 0;
    long long sum = 0;
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    double avg = (double)sum / n;
    for (int i = 0; i < n; i++)
    {
        if (avg < a[i])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
