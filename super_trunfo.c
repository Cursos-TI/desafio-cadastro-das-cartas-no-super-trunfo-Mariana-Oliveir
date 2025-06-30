#include <stdio.h>

int main(){


    //Carta 1
    char estado1; 
    char codigo1[4];
    char cidade1[30];
    int populaçao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    //Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populaçao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //Entrada de dados da Carta 01. 
    printf("Cadastro da Carta 01: \n");
    printf("Digite uma letra de (A-H) que represente o estado: ");
    scanf(" %c", &estado1);  // Espaço antes do %c para ignorar espaços em branco.
    printf("Digite o código da carta: (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite o numero de população: ");
    scanf("%d", &populaçao1);
    printf("Digite a Area em Km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB em (Bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de Pontos turiscos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    // Exibição dos dados da Carta 01.
    printf("\nCarta 01: \n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Numero de População: %d\n", populaçao1);
    printf("Area: %2f Km²\n", area1);
    printf("PIB: %2f bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos1);
    printf("\n");

    //Entrada de dados da Carta 02. 
    printf("\nCadastro da Carta 02: \n");
    printf("Digite uma letra de (A-H) que representar o estado:");
    scanf(" %c", &estado2);// Espaço antes do %c para ignorar espaços em branco
    printf("Digite o Código da carta: (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite o numero de população: ");
    scanf("%d", &populaçao2);
    printf("Digite a area em Km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB em (Bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de Pontos turiscos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    // Exibição dos dados da Carta 02.
    printf("\nCarta 02: \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Numero de População: %d\n", populaçao2);
    printf("Area: %2f Km²\n", area2);
    printf("PIB: %2f bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
    printf("\n");
    


return 0 ;


}
