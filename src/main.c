#include <stdio.h>
#include "operations.h"

#define OP_ADD '+'
#define OP_SUB '-'
#define OP_MUL '*'
#define OP_DIV '/'


int main()
{
    int first_operand;
    int second_operand;
    char operation;
    int result;

    printf("Enter first number: ");
    scanf("%d", &first_operand);

    printf("Enter operation [+|-|*|/]: ");
    scanf(" %c", &operation);
    
    printf("Enter second number: ");
    scanf("%d", &second_operand);

    switch (operation)
    {
        case OP_ADD:
            result = add(first_operand, second_operand);
            break;

        case OP_SUB:
            result = substract(first_operand, second_operand);
            break;
        
        case OP_MUL:
            result = multiply(first_operand, second_operand);
            break;

        case OP_DIV:
            result = divide(first_operand, second_operand);
            break;
        
        default:
            puts("Invalid operation!");
            return 1;
    }

    print_result(first_operand, second_operand, operation, result);
    return 0;

}
