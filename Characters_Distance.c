#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char char1, char2;
    scanf("%c %c", &char1, &char2);
    printf("The distance between %c and %c is %d\n", char1, char2, char2 - char1);
    return 0;
}
