#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void guess(int *number)
{
    srand(time(NULL));
    *number = rand()%101;
}
void game(int *round, int *guess_number, int *player_number, char *status)
{
    if(*player_number != *guess_number)
    {
        *status='L';
        if((*player_number < *guess_number) && (*round!=3))
            printf("Try a bigger number!\n");
        else if((*player_number > *guess_number) && (*round!=3))
            printf("Try a smaller number!\n");
    }
    else
        *status='W';
}
int main()
{
    int rnd, guessnumber, playernumber, account, bet;
    char status, choice;
    printf("\nEnter a start account for the game $: ");
    scanf("%d", &account);
    do{
        do{
            printf("Enter the bet amount: ");
            scanf("%d", &bet);
            if(bet > account)
                printf("You can't bet more than your balance.\n");
        }while(bet  > account);
        guess(&guessnumber);
        //printf("%d", guessnumber);
        for(rnd=1; rnd<=3; rnd++)
        {
            do{
                printf("Enter a number between 0 and 100: ");
                scanf("%d", &playernumber);
                if(playernumber>100 || playernumber<0)
                {
                    printf("The number should be between 0 and 100\n");
                    playernumber=101;
                }
            }while(playernumber==101);
            game(&rnd, &guessnumber, &playernumber, &status);
            if(status=='W')
            {
                printf("You win the game! The number was %d.\n", guessnumber);
                account+=bet;
                break;
            }
        }
        if(status=='L')
        {
            printf("You lost the game! The number was %d.\n", guessnumber);
            account-=bet;
        }
        printf("Your account is %d$\n", account);
        if(account<=0)
        {
            printf("You lost all your money!\n");
            choice='n';
        }
        else
        {
            printf("Do you want to play again? (y/n)\n");
            scanf(" %c", &choice);
            if(choice=='Y')
                choice='y';
        }
    }while(choice=='y');
    printf("Thank you for playing. See you next time!\n");
    return 0;
}
