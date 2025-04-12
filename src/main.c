#include <stdio.h>
#include "operations.h"

#define ADD '+'
#define SUB '-'
#define MUL '*'
#define DIV '/'


int main()
{
    int first_operand;
    int seconf_operand;
    char operation;
    int result = 0;

    printf("Enter first number: ");
    scanf("%d", &first_operand);

    printf("Enter operation [ + | - | * | / ]: ");
    scanf(" %c", &operation);
    
    printf("Enter second number: ");
    scanf("%d", &seconf_operand);

    switch (operation)
    {
        case ADD:
            result = add(first_operand, seconf_operand);
            break;

        case SUB:
            result = substract(first_operand, seconf_operand);
            break;
        
        case MUL:
            result = multiply(first_operand, seconf_operand);
            break;

        case DIV:
            result = divide(first_operand, seconf_operand);
            break;
        
        default:
            puts("Invalid operation!");
            return 1;
    }

    print_result(first_operand, seconf_operand, operation, result);
    return 0;

}
