#include <stdio.h>
int main(void)
{
    char choice;
    double n1, n2;
    
    do{
        printf("\nSelect one\n\ns or S: \t Square\nr or R: \t Rectangle\nc or C: \t Circle\ne     : \t Exit\n\n> ");
        scanf(" %c", &choice);
        if((choice=='s') || (choice=='S'))
        {printf("\nEnter the length of one side in meters: ");
            scanf("%lf", &n1);
            printf("\nArea = %.2lf\n\n", n1*n1);
        }
        else if((choice=='r')||(choice=='R'))
        {
            printf("\nEnter the two sides respectively in meters: ");
            scanf("%lf %lf", &n1, &n2);
            printf("\nArea = %.2lf\n\n", n1*n2);
        }
        else if((choice=='c')||(choice=='C'))
        {
            printf("\nEnter the radius in meters: ");
            scanf("%lf", &n1);
            printf("\nArea = %.2lf\n\n", 3.14*n1*n1);
        }

    }while(choice!='e');
    printf("\nProgram ended.\n");
    return(0);
}
