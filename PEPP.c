#include <stdio.h>
#include<unistd.h>

void calculator(void);
void areacalc(void);
void square(void);
void cafeprice(void);
void credits(void);

/* Main Menu Codes: Remember to state the new function here when added. */
int main (void)
{
    char choice;
    int zz;
    printf("\nPyston Semi-Professional Calculator v1.0\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    sleep(1);
    do{
    printf("\nCOMMANDS:\n1\tCalculator\n2\tArea Calculator Pro\n3\tStar Square Drawer\n4\tAbes Cafe Price Calculator\n5\tAbout this program\n6\tQuit\n\nSelect a mode: ");
    scanf(" %c", &choice);
    
        printf("__________________________________________________\n");
        
        switch(choice)
        {
            case '1':
                calculator();
                break;
            case'2':
                areacalc();
                break;
            case'3':
                square();
                break;
            case'4':
                cafeprice();
                break;
            case'5':
                credits();
                break;
            case'6':
                printf("\nProgram ended.\n");
                sleep(1);
                break;
            case'9':
                for(zz=0;zz<=99999;++zz)
                {
                    printf("9");
                }
                sleep(1);
                break;
                
            default:
                printf("\nError: Invalid input\n");
                sleep(1);
                break;
        }
        
        printf("__________________________________________________\n");
        
    }while(choice!='6');
   
    
    return(0);
}

/* Calculator Codes */
void calculator(void)
{
    double n1, n2;
    char opr, choice;
    
    printf("\nBASIC CALCULATOR\n");
    sleep(1);
    printf("\nOperations:\n+ or a or A\tAddition\n- or s or S\tSubtraction\n* or m or M\tMultiplication\n/ or d or D\tDivision\n");
    do{
        printf("\nEnter your operation: ");
        scanf("%lf%c%lf", &n1, &opr, &n2);
        
        switch(opr)
        {
            case '+': case'a': case'A':
                printf("= %.2lf", n1+n2);
                break;
            case'-': case's': case'S':
                printf("= %.2lf", n1-n2);
                break;
            case'*': case'm': case'M':
                printf("= %.2lf", n1*n2);
                break;
            case'/': case'd': case'D':
                if(n2!=0)
                printf("= %.2lf", n1/n2);
                else
                printf("\nError: Can't divide to zero.");
        }
        sleep(1);
        printf("\nPress q or Q to quit, any other key to do another operation: ");
        scanf(" %c", &choice);
        
        if(choice=='Q')
            choice='q';
    }while(choice!='q');
}

/* Area Calculator codes */
void areacalc(void)
{
    char choice;
    double n1, n2;
    
    printf("\nAREA CALCULATOR");
    sleep(1);
    do{
        printf("\n1\tSquare\n2\tRectangle\n3\tCircle\n4\tQuit\n\nSelect the type of the calculation: ");
        scanf(" %c", &choice);
        
        switch(choice)
        {
            case'1':
                printf("\nEnter the length of one side in meter: ");
                scanf("%lf", &n1);
                printf("\nArea: %.2lf\n\n", n1*n1);
                sleep(1);
                break;
                
            case'2':
                printf("\nEnter the length of sides in meter respectively: ");
                scanf("%lf %lf", &n1, &n2);
                printf("\nArea: %.2lf\n\n", n1*n2);
                sleep(1);
                break;
                
            case'3':
                printf("\nEnter the radius of the circle in meter (PI = 3.14): ");
                scanf("%lf", &n1);
                printf("\nArea: %.2lf\n\n", 3.14*n1*n1);
                sleep(1);
                break;
                
            case'4':
                break;
        }
    }while(choice!='4');
}

/* Square drawer codes */
void square(void)
{
    int num, row, column;
    char choice;
    printf("\nSTAR SQUARE DRAWER\n");
    sleep(1);
    do{
        printf("\nEnter the length of the side in star unit as a positive integer\n> ");
        scanf("%d", &num);
        
        for(row=1; row<=num; ++row)
        {
            if(row==1 || row==num)
            {
                for(column=1; column<=num ; ++column)
                printf("*");
            }
            else
            {
                printf("*");
                for(column=1; column<=num-2; ++column)
                    printf(" ");
                printf("*");
            }
            printf("\n");
        }
        sleep(1);
        
        printf("\nPress q or Q to quit, any other key to draw another square: ");
        scanf(" %c", &choice);
        
        if(choice=='Q')
            choice='q';
        
    }while(choice!='q');
    
}

/* Abes Cafe Price Calc. codes */
void cafeprice(void)
{
    int num, count;
    double sum=0.0;
    char select, choice, cont;
    printf("\nABES' CAFE PRICE CALCULATOR");
    sleep(1);
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
    sleep(1);
    printf("\nPress any key to quit: ");
    scanf(" %c", &cont);
    
    
    sum=0.0;
    
}

/* Credits codes */
void credits(void)
{
    char cont;
    printf("\nPyston Semi-Professional Calculator \nVersion 1.0 \nCopyrignt (C)2021, Pyston Softwares, All rights reserved.\nProgramming by Ibrahim Kaan Bilir\n");
    sleep(1);
    printf("\nPress any key to continue: ");
    scanf(" %c", &cont);
}
