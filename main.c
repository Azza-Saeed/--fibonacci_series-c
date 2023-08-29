#include <stdio.h>
#include <stdlib.h>

#include "Fab.h"

int main()
{
    int number;

    printf("Please enter the number you need:\n");
    scanf("%d",&number);

    Fibonacci(number);

    return 0;
}
