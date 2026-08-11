#include <stdio.h>

// operadores, && os dois tem que ser verdade para funcionar, || apenas um precisa ser verdade


int main() {
    int temp = -12;

    if(temp <= 14 && temp >= 6 ){
        printf("Frio\n");
    }

    else if(temp >=15 && temp <27 ) {
        printf("Boa\n");
    }

    else if(temp >=28 && temp <=35){
        printf("Calor\n");
    }
    else if(temp <= 4 || temp >= 36){
        printf("NO good\n");
    }
}