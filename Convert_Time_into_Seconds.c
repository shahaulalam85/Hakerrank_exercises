#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int toSeconds();

int main()
{
    int hours, minutes, seconds;
    scanf("%d %d %d", &hours, &minutes, &seconds);
    toSeconds(hours, minutes, seconds);
    return 0;
}

int toSeconds(int hours, int minutes, int seconds)
{
    scanf("%d %d %d", &hours, &minutes, &seconds);
    int res = hours * 3600 + minutes * 60 + seconds;
    printf("Total seconds: %d\n", res);
    return 0;
}
