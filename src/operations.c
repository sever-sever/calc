#include <stdio.h>
#include "operations.h"

// a + b
int add(int x, int y)
{
    return x + y;
}

// a - b
int substract(int x, int y)
{
    return x - y;
}

// a * b
int multiply(int x, int y)
{
    return x * y;
}

// a / b
int divide(int x, int y)
{
    if (y == 0)
    {
        printf("Error: Zero division!\n");
        return -1;
    }
    return x / y;
}

// print calculation result
void print_result(int x, int y, char operation, int result)
{
    printf("---\nResult: %d %c %d = %d\n", x, operation, y, result);
}
