#include<stdio.h>
int main(void)
{
    int num, count;
    double sum=0.0;
    char select, choice;
    
    printf("\nWelcome! How many drinks will be ordered?\n> ");
    scanf("%d", &num);
    
    printf("\nMENU:\n1. Espresso\n2. Latte\n3. Cappuccino\n4. Tea\n");
    
    for(count=1; count<=num; ++count)
    {
        printf("\n> ");
        scanf(" %c", &select);
        
        if(select=='1')
        {
            printf("\nYou have ordered one Espresso, which costs 4.5$\n");
            sum=sum+4.5;
        }
        else if(select=='2')
        {
            printf("\nYou have ordered one Latte, which costs 5.5$\n");
            sum=sum+5.5;
        }
        else if(select=='3')
        {
            printf("\nYou have ordered one Cappuccino, which costs 6.5$\n");
            sum=sum+6.5;
        }
        else if(select=='4')
        {
            printf("\nYou have ordered one Tea, which costs 3.5$\n");
            sum=sum+3.5;
        }
    }
    
    printf("\nWould you like to split the bill between %d guests (y/n)?\n> ", num);
    scanf(" %c", &choice);
    
    switch(choice)
    {
        case 'y': case'Y':
            sum=sum/num;
            printf("\nThe amount each guest needs to pay is: %.2lf$.\n\n",sum);
            break;
            
        case'n': case'N':
            printf("\nThe total amount you have to pay is: %.2lf$.\n\n" ,sum);
    }
    
    return(0);
}
