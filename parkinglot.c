#include<stdio.h>

/* Function for printing the current state of the lot */
void printlot(int arr[][10]){
    int i, j;
   
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10 ; j++){
            printf("%5d\t", arr[i][j]);
        }
        printf("\n");
    }
}

/* Function for parking the new car */
void park(int arr[][10]){
    /* The "parked" variable ensures whether the entered car has parked. If not zero, the program understands that it shouldn't add the number to other spaces, therefore the car is parked only once. */
    int i, j, ticket, parked = 0;
    printf("A new car is entering. Please input a ticket number:\n");
    scanf("%d", &ticket);
    
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(arr[i][j] == -1 && parked == 0){
                arr[i][j] = ticket;
                parked++;
            }
        }
    }
}

/* Function for leaving the parked car */
void leave(int arr[][10]){
    /* The "left" variable ensures whether the entered car has left. If not zero, the program understands that it shouldn't remove the number of the other cars with the same number, therefore only one car is removed. */
    int i, j, ticket, left = 0;
    printf("A car is leaving. Please input the ticket number of the leaving car:\n");
    scanf("%d", &ticket);
    
    for(i = 9; i >= 0; i--){
        for(j = 9; j >= 0; j--){
            if(arr[i][j] != -1 && arr[i][j] == ticket && left == 0){
                arr[i][j] = -1;
                left++;
            }
        }
    }
    
    if(left == 0){
        printf("There is no such car with this ticket number.\n");
    }
}

/* Main function */
int main(){
    int lot[10][10], choice, i, j;
    
    /* Initializing the parking lot */
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            lot[i][j] = -1;
        }
    }
    
    printf("Welcome\n");
    
    do{
        printf("Please input your command:\n");
        scanf("%d", &choice);
        
        switch(choice){
            case 0:
                printf("Goodbye. Here is the final Parking Lot:\n");
                printlot(lot);
                break;
            case 1:
                printf("Parking Lot:\n");
                printlot(lot);
                break;
            case 2:
                park(lot);
                break;
            case 3:
                leave(lot);
                break;
            default:
                printf("Incorrect command, new command is needed. ");
                break;
        }
    }while(choice != 0);
    
    return 0;
}
