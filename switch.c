#include <stdio.h>

int main() {

    int dayOfWeek = 1;

    printf("enter a day of the week: ");
    scanf("%d", &dayOfWeek);

    switch(dayOfWeek) {
        case 1:
            printf("It is monday");
            break;
        case 2:
            printf("it is tuestay");
            break;
        case 3:
            printf("it is wednesday");
            break;
        case 4:
            printf("it is thursday");
            break;
        case 5:
            printf("it is friday");
            break;
        case 6:
            printf("it is saturday");
            break;
        case 7:
            printf("it is sunday");
            break;
        default:
            printf("enter a number between 1 and 7");
    }

    return 0;
}