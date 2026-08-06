f#include <stdio.h>

struct Retangulo {
    float altura;
    float largura;
};

// função definida FORA do main, aqui em cima
float calcular_area(struct Retangulo r) {
    return r.largura * r.altura;  // usa o . pra acessar os campos da struct recebida
}

int main() {
    struct Retangulo meuRetangulo;  // cria a "ficha"
    meuRetangulo.largura = 5.0;
    meuRetangulo.altura = 3.0;

    float area = calcular_area(meuRetangulo);  // chama a função e guarda o resultado

    printf("Área: %.2f\n", area);

    return 0;
}