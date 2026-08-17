#include <stdio.h>
#include <stdbool.h>

// pergunta e sai do programa
bool ageCheck(int age) {
    return age >= 18;
}


int main() {

    int age;

    printf("sua idade?: ");
    scanf("%d", &age);

    if(ageCheck(age)) {
        printf("entra\n");
    }
    else{
        printf("larga\n");
    }
}