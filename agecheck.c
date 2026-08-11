#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age) {
    if(age >= 18){
        return true;
    }
}

int main() {
    int age = 21;

    if(ageCheck(age)) {
        printf("you may sign up\n");
    }
    else{
        printf("you must be 1 to sign up\n");
    }
}