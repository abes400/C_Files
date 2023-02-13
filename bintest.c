#include<stdio.h>

void tobin(int num, int bin[]){
    int i = 0, length = 0;
    for(i = 0; i < 0x41; i++){
        bin[i] = 0;
    }
    for(i = 0; num != 0; num /= 2){
        bin[i++] = num % 2;
        length ++;
    }
    bin[i] = 9;
    //printf("%d\n", length);
    for(int i = 0; i < length / 2; i++){
        int temp = bin[i];
        bin[i] = bin[length - 1 - i];
        bin[length - 1 - i] = temp;
    }
}

void printbin(int bin[]){
    int length = 0;
    for(int i = 0; bin[i] != 9; i++){
        length++;
    }
    for(int i = 0; i < length; i++){
        printf("%d", bin[i]);
    }
}

int main(void){
    int num = 0, bin[0x41], i = 0;


    do{
        printf("Enter number: ");
        scanf("%d", &num);
        if(num == 0) break;
        tobin(num, bin);
        printbin(bin);
        printf("\n");
    }while(num != 0);

    return 0;
}