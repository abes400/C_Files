#include <stdio.h>
int main(void)

{
    double n1, n2, res;
    char opr, rpt='f';
    
    printf("\n SIMPLE CALCULATOR v2.1 \n ________________________ ");
    printf("\n \n Instructions \n CHARACTER \t \t OPERATION \n + or a or A \t Addition \n - or s or S \t Subtraction \n * or m or M \t Multiplication \n / or d or D \t Division \n \n Example: 3+5 \n \n Enter your operation according to the instructions above: \n ");
    
    do{
    printf("\n > ");
    scanf("%lf%c%lf", &n1, &opr, &n2);
    
    switch(opr)
    {
        case'+': case'a': case'A':
            res = n1+n2;
            printf("\n = %.2lf \n \n", res);
            break;
        
        case'-': case's': case'S':
            res = n1-n2;
            printf("\n = %.2lf \n \n", res);
            break;
            
        case'*': case'm': case'M':
            res = n1*n2;
            printf("\n = %.2lf \n \n", res);
            break;
            
        case'/': case'd': case'D':
            if(n2!=0)
            {res = n1/n2;
            printf("\n = %.2lf \n \n", res);}
            else
                printf("\n ERROR: Can't divide to zero. \n \n");
            break;
            
        default:
            printf("\n ERROR: Invalid operation \n \n");
    }
    }while(rpt!='t');
    
    return(0);
}
