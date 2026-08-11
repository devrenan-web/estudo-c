#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age){
    printf("\nHappy birthday to you");
    printf("\nHappy birthday dear %s!", name);
    printf("\nHappy birthday to you");
    printf("\nyou are %d years old!\n", age);
}

int main() {

    char name[50] = "";
    int age = 0;

    printf("enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);
}