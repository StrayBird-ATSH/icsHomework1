#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main() {
    char str[100];
    printf("Enter a integer or a decimal: ");
    gets(str);
    if (strstr(str, ".")) {
        double floatNumber = strtod(str, NULL);
        printf("The integer representation of the "
               "decimal number you input is: %d\n",
               *(int *) (&floatNumber));
    } else {
        long intNumber = strtol(str, NULL, 10);
        printf("The floating point representation of the "
               "integer number you input is: %f\n",
               *(double *) &(intNumber));
    }
    return 0;
}