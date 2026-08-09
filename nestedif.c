#include <stdio.h>
#include <stdbool.h>

int main() {
    
    float price = 10.00;
    bool isStudent = true;

    if(isStudent){
        printf("desconto de 10%");
        price *= 0.9;
    }

    printf("the price of a ticket is: $%.2f\n", price);
}