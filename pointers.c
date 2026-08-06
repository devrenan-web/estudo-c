#include <stdio.h>

int main(){
    int x = 10;
                        //&x e quem guarda o endereco de x dentro do xpointer
    int *xpointer = &x;    // * diz que essa variavel e do tipo pointero pra int

    printf("valor de x: %d\n", x);
    printf("endereco de x: %p\n", &x);
    printf("valor guardado no pointeiro: %p\n", xpointer);
    printf("valor apontado: %d\n", *xpointer);

    *xpointer = 20;

    printf("depois: x = %d\n", x);

    return 0;
}