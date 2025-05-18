#include <stdio.h>

int main() {
    // Variáveis para a primeira cidade
    char c1[4], c2[4];         // Códigos das cidades
    int p1, p2;                // Populações
    float a1, a2;              // Áreas
    float b1, b2;              // PIBs
    int t1, t2;                // Pontos turísticos

    // Cadastro da primeira cidade
    printf("Cadastro da primeira cidade\n");
    printf("Código (A01): ");
    scanf(" %3s", c1);
    printf("População: ");
    scanf("%d", &p1);
    printf("Área: ");
    scanf("%f", &a1);
    printf("PIB: ");
    scanf("%f", &b1);
    printf("Pontos turísticos: ");
    scanf("%d", &t1);

    // Cadastro da segunda cidade
    printf("\nCadastro da segunda cidade\n");
    printf("Código (B02): ");
    scanf(" %3s", c2);
    printf("População: ");
    scanf("%d", &p2);
    printf("Área: ");
    scanf("%f", &a2);
    printf("PIB: ");
    scanf("%f", &b2);
    printf("Pontos turísticos: ");
    scanf("%d", &t2);

    // Exibição dos dados
    printf("\n--- Dados da Cidade 1 ---\n");
    printf("Código: %s\n", c1);
    printf("População: %d\n", p1);
    printf("Área: %.2f km²\n", a1);
    printf("PIB: R$ %.2f\n", b1);
    printf("Pontos turísticos: %d\n", t1);

    printf("\n--- Dados da Cidade 2 ---\n");
    printf("Código: %s\n", c2);
    printf("População: %d\n", p2);
    printf("Área: %.2f km²\n", a2);
    printf("PIB: R$ %.2f\n", b2);
    printf("Pontos turísticos: %d\n", t2);

    return 0;
}
