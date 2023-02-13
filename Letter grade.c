#include <stdio.h>
int main(void)

{
    double mt1, mt2, mt3, mtfin, final, project, result;
    char bonus;
    
    printf("\n Enter your 3 midterm grades, final grade and project grade respectively: ");
    scanf("%lf %lf %lf %lf %lf", &mt1, &mt2, &mt3, &final, &project);
    
    printf("\n Dou you receive any bonus grades on your project? \n Type E or e if you studied for extra topic. \n Type C or c if you created an interface. \n Type N or n if you did none of them. \n> ");
    
    scanf(" %c", &bonus);

    if(bonus=='E' || bonus=='e')
    {printf("\n You get +10 bonus on your project grade for your extra topic. ");
        project = project+10;
    }
    else if (bonus=='C' || bonus=='c')
    {printf("\n You get +20 on your project grade for your interface.");
        project = project+20;
    }
    else if (bonus=='N' || bonus=='n')
    {printf("\n You don't get any bonus points.");}
    
    printf("\n Your project grade is %.2lf", project);
    
    project = project*20/100;
    
    if(mt1>=mt2)
    {if(mt2>=mt3)
        mtfin = (mt1*20/100)+(mt2*20/100);
        else
            mtfin = (mt1*20/100)+(mt3*20/100);}
    
    else if(mt2>=mt1)
    {if(mt1>=mt3)
        mtfin = (mt2*20/100)+(mt1*20/100);
        else
            mtfin = (mt2*20/100)+(mt3*20/100);}
    
    else if (mt3>=mt2)
    {if(mt2>=mt1)
        mtfin = (mt2*20/100)+(mt3*20/100);
        else
            mtfin = (mt1*20/100)+(mt3*20/100);}
    
    final = final*40/100;
    result = final + project + mtfin;
    printf("\n \n Your average grade is %.2lf", result);
    
    if(result<=89)
    { if(result>=80)
        printf("\n Your letter grade is BB. \n");
        else if (result<=79)
        {if (result>=70)
            printf("\n Your letter grade is CC. \n");
            else if (result<=69) {if (result>=60)
                printf("\n Your letter grade is DD. \n");
                else
                    printf("\n Your letter grade is FF. \n");
                
                }
            }
    }
    else
        printf("\n Your letter grade is AA. \n");
    
    return(0);
}
