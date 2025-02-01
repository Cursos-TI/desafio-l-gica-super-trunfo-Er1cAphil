#include <stdio.h>

int main() {

// DADOS DO JOGADOR NÚMERO 1
    int codigo1;
    char pais1[20];
    double populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

// DADOS DO JOGADOR NÚMERO 2
    int codigo2;
    char pais2[20];
    double populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

//******************************************* */

    char cidadeVencedora[20]; 

    printf("*** Super Trufo - Países ***\n");

    printf("Insira o Código do País do Jogador 1:\n");
    scanf("%d", &codigo1);
    printf("Código da Cidade do Jogador 1 é: %d\n", codigo1);

    printf("Nome do País do Jogador 1:\n");
    scanf("%s", pais1); 
    printf("Nome do País  do Jogador 1 é: %s\n", pais1);

    printf("Quantidade da População do Jogador 1:\n");
    scanf("%lf", &populacao1);
    printf("Quantidade da População  do Jogador 1 é: %.2lf\n", populacao1);

    printf("Qual tamanho da área do Jogador 1:\n");
    scanf("%f", &area1);
    printf("O tamanho da área do Jogador 1 é: %.2lf km²\n", area1);

    printf("Qual o PIB do Jogador 1:\n");
    scanf("%f", &pib1);
    printf("O PIB do Jogador 1 é: %.2lf\n", pib1);

    printf("Quantidade de Pontos Turísticos do Jogador 1:\n");
    scanf("%d", &pontosturisticos1);
    printf("Quantidade de Pontos Turísticos do Jogador 1 é: %d\n", pontosturisticos1);

    printf("***************************************************\n");

    // Entrada de dados do jogador 2
    printf("Insira o Código do País do Jogador 2:\n");
    scanf("%d", &codigo2);
    printf("Código da Cidade do Jogador 2 é: %d\n", codigo2);

    printf("Nome do País do Jogador 2:\n");
    scanf("%s", pais2);  
    printf("Nome do País  do Jogador 2 é: %s\n", pais2);

    printf("Quantidade da População do Jogador 2:\n");
    scanf("%lf", &populacao2);
    printf("Quantidade da População  do Jogador 2 é: %.2lf\n", populacao2);

    printf("Qual tamanho da área do Jogador 2:\n");
    scanf("%f", &area2);
    printf("O tamanho da área do Jogador 2 é: %.2lf km²\n", area2);

    printf("Qual o PIB do Jogador 2:\n");
    scanf("%f", &pib2);
    printf("O PIB do Jogador 2 é: %.2lf\n", pib2);

    printf("Quantidade de Pontos Turísticos do Jogador 2:\n");
    scanf("%d", &pontosturisticos2);
    printf("Quantidade de Pontos Turísticos do Jogador 2 é: %d\n", pontosturisticos2);


    printf("*******************RESULTADO********************\n");

    if (populacao1 > populacao2) {
        printf("Jogador 1 tem maior população.\n");
        snprintf(cidadeVencedora, sizeof(cidadeVencedora), "%s", pais1);
    } else if (populacao1 < populacao2) {
        printf("Jogador 2 tem maior população.\n");
        snprintf(cidadeVencedora, sizeof(cidadeVencedora), "%s", pais2);
    } else {
        printf("Ambos os jogadores têm a mesma população.\n");
    }

    if (area1 > area2) {
        printf("Jogador 1 tem maior área.\n");
        snprintf(cidadeVencedora, sizeof(cidadeVencedora), "%s", pais1);
    } else if (area1 < area2) {
        printf("Jogador 2 tem maior área.\n");
        snprintf(cidadeVencedora, sizeof(cidadeVencedora), "%s", pais2);
    } else {
        printf("Ambos os jogadores têm a mesma área.\n");
    }

    if (pib1 > pib2) {
        printf("Jogador 1 tem o maior PIB.\n");
        snprintf(cidadeVencedora, sizeof(cidadeVencedora), "%s", pais1);
    } else if (pib1 < pib2) {
        printf("Jogador 2 tem o maior PIB.\n");
        snprintf(cidadeVencedora, sizeof(cidadeVencedora), "%s", pais2);
    } else {
        printf("Ambos os jogadores têm o mesmo PIB.\n");
    }

    if (pontosturisticos1 > pontosturisticos2) {
        printf("Jogador 1 tem mais pontos turísticos.\n");
        snprintf(cidadeVencedora, sizeof(cidadeVencedora), "%s", pais1);
    } else if (pontosturisticos1 < pontosturisticos2) {
        printf("Jogador 2 tem mais pontos turísticos.\n");
        snprintf(cidadeVencedora, sizeof(cidadeVencedora), "%s", pais2);
    } else {
        printf("Ambos os jogadores têm a mesma quantidade de pontos turísticos.\n");
    }

    printf("\nA cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
