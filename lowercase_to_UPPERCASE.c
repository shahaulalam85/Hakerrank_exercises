#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char charLower, charUpper;
    scanf("%c", &charLower);
    charUpper = charLower - 32;
    printf("The uppercase of %c is %c\n", charLower, charUpper);
    return 0;
}
