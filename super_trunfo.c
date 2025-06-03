#include <stdio.h> //inserção da biblioteca.

int main() {
    // declarar as variáveis das cartas
    char estado[3], estado2[3], cidade[50], cidade2[50]; // texto
    int codigo, codigo2, habitantes, habitantes2, pturistico, pturistico2; // inteiros
    float area, area2, pib, pib2; // decimais
    double pibpercapita, pibpercapita2; // variáveis para o cálculo do PIB per capita
    float densidade_pop, densidade_pop2; // variáveis para o cálculo da densidade populacional
    
    // início do programa

    printf("Super Trunfo - Cartas de Cidades Brasileiras\n\n"); // Imprime o título do jogo.
    printf("Seja bem vindo(a) ao Super Trunfo, as cartas são compostas por:\n"); // Explica as características das cartas.
    printf("Estado (A a H), Código, Nome da Cidade, População, Área, PIB, Número de Pontos Turísticos, Densidade Populacional e PIB per capita.\n\n"); // Explica as características das cartas.

    printf("Digite os dados da Carta 01:\n\n"); // Solicita ao usuário a inserção dos dados da carta 01

    printf("Estado (A a H):\n");
    scanf("%s", estado);

    printf("Digite o código:\n");
    scanf("%d", &codigo);

    printf("Digite nome da cidade:\n");
    scanf(" %[^\n]", cidade);

    printf("Digite a População:\n");
    scanf("%d", &habitantes);

    printf("Digite a Área:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &pturistico);

    printf("\nDigite os dados da Carta 02:\n");  // Solicita ao usuário a inserção dos dados da carta 02

    printf("Digite o Estado (A a H):\n");
    scanf("%s", estado2);

    printf("Digite o codigo:\n");
    scanf("%d", &codigo2);

    printf("Digite nome da cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("Digite o número de habitantes:\n");
    scanf("%d", &habitantes2);

    printf("Digite a Área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &pturistico2);

    // Formulas do PIB per capita e densidade populacional
    // PIB per capita = PIB / População
    // Densidade populacional = População / Área
    pibpercapita = pib / habitantes;
    pibpercapita2 = pib2 / habitantes2;
    densidade_pop = habitantes / area;
    densidade_pop2 = habitantes2 / area2;

    printf("\nCarta 01\n Estado: %s \n Código: %s%d \n Nome da Cidade: %s \n População: %d habitantes\n Área: %.2f km²\n PIB: %.2f bilhões de reais \n Número de Pontos turísticos: %d\n", estado, estado, codigo, cidade, habitantes, area, pib, pturistico);
    printf(" Densidade Populacional: %.2f hab/km²\n", densidade_pop);
    printf(" PIB per capita: %.2f reais\n", pibpercapita);

    printf("\nCarta 02\n Estado: %s \n Código: %s%d \n Nome da Cidade: %s \n População: %d habitantes\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de Pontos turísticos: %d\n", estado2, estado2, codigo2, cidade2, habitantes2, area2, pib2, pturistico2);
    printf(" Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf(" PIB per capita: %.2f reais\n", pibpercapita2);

    return 0;
} // Fim do programa.
