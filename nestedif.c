#include <stdio.h>

int main(void) {
    int idade = 20;
    int tem_lista_vip = 1; // 1 = sim, 0 = nao

    if (idade >= 18) {
        // if externo passou -> só agora checamos o if interno
        if (tem_lista_vip) {
            printf("Entra na area VIP\n");
        } else {
            printf("Entra na pista normal\n");
        }
    } else {
        printf("Nao pode entrar\n");
    }

    return 0;
}