#include<stdio.h>
int main (void)
{
    double n1, n2, result;
    char operation;
    printf("\nSIMPLE CALCULATOR v.1.0 \n~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    printf("\n\nInstructions: \n ");
    printf("\n + \t Addition \n - \t Subtraction \n * \t Multiplication \n / \t Division \n");
    printf("\n \t Example: 2+8\n");
    
    printf("\nPlease enter your operation: > ");
    scanf("%lf%c%lf",&n1,&operation,&n2);
    
    if(operation == '+')
        {result = n1 + n2;}
    else if(operation == '-')
        {result = n1 - n2;}
    else if(operation == '/')
        {result = n1 / n2;}
    else if(operation == '*')
        {result = n1 * n2;}
    else
    {result = 0;
        printf("\n SYNTAX ERROR: Invalid operation. Please restart the program.");}
        
    printf("\n\n    The result is %lf \n\nPlease restart the program to make another operation.\n\n", result);
    
    return(0);
}
