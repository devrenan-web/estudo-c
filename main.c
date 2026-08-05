#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main() {
    // data types
/*
    int age = 19;       // numeros inteiros (4 bytes em sistemas moder)
    int year = 2026;
    int quantity = 1;

    printf("Tu tem %d anos\n", age);
    printf("o ano e %d\n", year);
    printf("voce comprou %d x items\n", quantity);


    float gpa = 2.5;    //single precision decimal number (4 bytes)
    float price = 19.99;
    float temperature = -10.1;

    printf("teu gpa e %.1f\n", gpa);
    printf("o preco e $%.2f\n", price);
    printf("a temperatura e %.2f\n", temperature);


    double valorAletorio = 3.142113124141412;   // double-precision decimal (lf)number (8 Bytes)

    printf("o valor e %.10lf\n", valorAletorio);


    char grade = 'A';               // unico caracter (1 Byte)

    printf("your grade is %c\n", grade);

    char name[] = "Renan";              // array de caracteres (tamanho varia)

    printf("seu nome e %s\n", name);

    bool isOnline = true; // verdadeiro ou falso (1 Byte)

    printf("%d\n", isOnline);



    int x = 1;
    int y = 2;
    int z = 0;

    z = x + y;

    printf("o valor e %d\n", z);

    int age;
    float gpa;
    char grade;
    char name [10];

    printf("Entre your age: ");
    scanf(" %d", &age);

    printf("enter your gpa: ");
    scanf(" %f", &gpa);

    printf("enter you grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) -1] = '\0';

    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    char item[50];
    float price;
    int quantity;
    char currency = '$';
    float total;


    printf("what item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);

    printf("what is the price for each?: ");
    scanf("%f", &price);

    printf("how many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nyou have bought %d %s\n", quantity, item);
    printf("the total is: %c%.2f\n", currency, total);

    char noun[50] = "";
    char verb[50] = "";
    char adject1[50] = "";
    char adject2[50] = "";
    char adject3[50] = "";

    printf("enter an adjective (description)\n: ");
    fgets(adject1, sizeof(adject1), stdin);
    adject1[strlen(adject1) - 1] = '\0';

    printf("enter an noun (animal or a person)\n: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';


    printf("enter an adjective (description)\n: ");
    fgets(adject2, sizeof(adject2), stdin);
    adject2[strlen(adject2) - 1] = '\0';


    printf("enter a verb (ending w/ - ing)\n: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';


    printf("enter an adjective (description)\n: ");
    fgets(adject3, sizeof(adject3), stdin);
    adject3[strlen(adject3) - 1] = '\0';


    printf("\ntoday i went to a %s zoo. \n", adject1);
    printf("in an exhibit, i saw a %s.\n", noun);
    printf("%s was %s and %s!\n", noun, adject2, verb);
    printf("i was %s!\n", adject3);

    char name[50] = "";
    
    printf("enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
        printf("you did not enter your name\n");
    }
    else{
        printf("hello %s\n", name);
    }

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("weight Conversion calculator\n");
    printf("1. kg to pounds\n");
    printf("2. pounds to kg\n");
    printf("enter your choice  (1 or 2); ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("enter the weight in kg \n");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    }


    else if(choice == 2){
        printf("enter the weight in pounds \n");
        scanf("%f", &pounds);
        kilograms = pounds * 2.20462;
        printf("%2.f kilograms is equal to %.2f pounds \n",pounds, kilograms);


    }else{
        printf("invalid choice\n");
    }
*/

    char choice = '\0';
    float feh = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program");
    printf("C. Celsius to feh");
    printf("f. feh to Celsius");
    printf("is the temp in celsius (C) or fah (F)?: ");

    scanf("%c", &choice);

    if(choice == 'C'){
        printf("enter the temperature in celsius: \n");
        scanf("%f", &celsius);
        feh = (celsius * 9 / 5) + 32;
        printf("%.1f, Celsius is equal to %.1f feh\n", celsius, feh);
    }
    else if(choice ==  'F'){
        printf("enter the temperature in fah: \n");
        scanf("%f", &feh);
        celsius = (feh - 32) * 5 / 9;
        printf("%.1f, feh is equal to %.1f celsius\n", feh, celsius);
    }
    else{
        printf("invalid choice, please select c or f\n");
    }








    return 0;
}