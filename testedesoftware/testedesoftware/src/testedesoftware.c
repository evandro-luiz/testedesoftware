#include <stdio.h>
#include <C:\testedesoftware\src\testedesoftware.h>

int main() {
    int idade, quantidade;

    printf("Digite a idade do visitante: ");
    scanf("%d", &idade);

    printf("Digite a quantidade de bilhetes desejada: ");
    scanf("%d", &quantidade);

    
    float preco_total = calcular_preco_total(idade, quantidade);

    printf("Preco total: R$ %.2f\n", preco_total);

    return 0;
}