#include "minunit-master/minunit.h"
#include "C:\testedesoftware\src\testedesoftware.h"

MU_TEST(teste_idade_menos_um_qtd_3) {
    mu_assert_double_eq(1.0f, calcular_preco_total(-1, 3)); // invalido
}
MU_TEST(teste_idade_0_qtd_3) {
    mu_assert_double_eq(30.0f, calcular_preco_total(0, 3));  // criança
}

MU_TEST(teste_idade_12_qtd_3) {
    mu_assert_double_eq(30.0f, calcular_preco_total(12, 3)); // criança
}

MU_TEST(teste_idade_13_qtd_3) {
    mu_assert_double_eq(90.0f, calcular_preco_total(13, 3)); // adulto
}

MU_TEST(teste_idade_59_qtd_3) {
    mu_assert_double_eq(90.0f, calcular_preco_total(59, 3)); // adulto
}

MU_TEST(teste_idade_60_qtd_3) {
    mu_assert_double_eq(45.0f, calcular_preco_total(60, 3)); // idoso
}
MU_TEST(teste_qtd_0_idade_20) {
    mu_assert_double_eq(0.0f, calcular_preco_total(20, 0)); // zero bilhetes
}

MU_TEST(teste_qtd_1_idade_20) {
    mu_assert_double_eq(30.0f, calcular_preco_total(20, 1)); // válido
}

MU_TEST(teste_qtd_5_idade_20) {
    mu_assert_double_eq(150.0f, calcular_preco_total(20, 5)); // válido
}

MU_TEST(teste_qtd_6_idade_20) {
    mu_assert_double_eq(1.0f, calcular_preco_total(20, 6)); // limite de bilhetes exedido9
}

MU_TEST_SUITE(test_suite) {
    // Testes de idade com quantidade 3
    MU_RUN_TEST(teste_idade_menos_um_qtd_3);
    MU_RUN_TEST(teste_idade_0_qtd_3);
    MU_RUN_TEST(teste_idade_12_qtd_3);
    MU_RUN_TEST(teste_idade_13_qtd_3);
    MU_RUN_TEST(teste_idade_59_qtd_3);
    MU_RUN_TEST(teste_idade_60_qtd_3);

    // Testes de quantidade com idade 20
    MU_RUN_TEST(teste_qtd_0_idade_20);
    MU_RUN_TEST(teste_qtd_1_idade_20);
    MU_RUN_TEST(teste_qtd_5_idade_20);
    MU_RUN_TEST(teste_qtd_6_idade_20);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}