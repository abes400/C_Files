#include<stdio.h>
int main()
{
    int length=1, r, c;
    
    printf("\nABES' ASCII SQUARE DRAWING TOOL v1.0\n~~~~~~~~~~~~~~~~~~~~~~~~~\n(c)2021 All rights reserved.\n\nEnter the length of the square as an \ninteger value and the tool will \ndraw the ASCII square for you.\n\n\n");
    
    do{
    printf("\nEnter the length of the square: ");
    scanf("%d", &length);

    if(length==1)
        printf("*\n");
        
    else if (length>1)
    {
    for(r=1; r<=length; ++r)
        printf("*");
    printf("\n");
    
    for(r=1; r<=length-2; ++r)
    {
        printf("*");
        for(c=1; c<=length-2; ++c)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for(r=1; r<=length; ++r)
        printf("*");
    printf("\n");
    }
    else
        printf("\nERROR Invalid integer.\n\n");

    }while(length!=0);
        
    return(0);
}
