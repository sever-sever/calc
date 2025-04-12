#include <stdio.h>
#include "operations.h"

#define ADD '+'
#define SUB '-'
#define MUL '*'
#define DIV '/'

int main()
{
    int x;
    int y;
    char operation;
    int result_add = 0;
    int result_sub = 0;
    int result_mul = 0;
    int result_div = 0;

    puts("Enter first number: ");
    scanf("%d", &x);

    puts("Enter operation [+|-|*|/]: ");
    scanf(" %c", &operation);
    
    puts("Enter second number");
    scanf("%d", &y);


    switch (operation)
    {
        case ADD:
            result_add = add(x, y);
            printf("%d %c %d = %d\n", x, operation, y, result_add);
            break;

        case SUB:
            result_sub = substract(x, y);
            printf("%d %c %d = %d\n", x, operation, y, result_sub);
            break;
        
        case MUL:
            result_mul = multiply(x, y);
            printf("%d %c %d = %d\n", x, operation, y, result_mul);
            break;

        case DIV:
            result_div = divide(x, y);
            printf("%d %c %d = %d\n", x, operation, y, result_div);
            break;
        
        default:
        break;
    }

    return 0;

}
