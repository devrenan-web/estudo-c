#include <stdio.h>


int main() {
    
    int number = 0;

    while(number <= 0){
        printf("eNter a number grater than 0: ");
        scanf("%d", &number);
    }

    int number1 = 0;

    do{
        printf("enter a number greater than 0: ");
        scanf("%d", &number);
    }while(number <= 0);


}