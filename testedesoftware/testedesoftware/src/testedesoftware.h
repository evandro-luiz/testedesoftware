#include <stdio.h>

float calcular_preco_unitario(int idade) {
    if (idade <= 12 && idade >= 0) {
        return 10.0f;
    }
    else if (idade <= 59) {
        return 30.0f;
    }
    else {
        return 15.0f;
    }
}

float calcular_preco_total(int idade, int quantidade) {
    if (idade < 0) {
        printf("Idade inválida.\n");
        return 1.0f;
    }
    if (quantidade > 5) {
        printf("O limite maximo e de 5 bilhetes por pessoa.\n");
        return 1;
    }

    float preco_unitario = calcular_preco_unitario(idade);
    return quantidade * preco_unitario;
}