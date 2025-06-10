#include <stdio.h> //inserção da biblioteca.

int main() {
    // declarar as variáveis das cartas
    char estado[3], estado2[3], cidade[50], cidade2[50]; // texto
    int codigo, codigo2, pop, pop2, pturistico, pturistico2; // inteiros
    float area, area2, pib, pib2; // decimais
    double pibpercapita, pibpercapita2; // variáveis para o cálculo do PIB per capita
    float densidade_pop, densidade_pop2; // variáveis para o cálculo da densidade populacional
    
    // Abertura do programa

    printf("Super Trunfo - Cartas de Cidades Brasileiras\n\n"); // Imprime o título do jogo.
    
    printf("Seja bem vindo(a) ao Super Trunfo, as cartas são compostas por:\n"); // Explica as características das cartas.
    
    printf("Estado (A a H), Código, Nome da Cidade, População, Área, PIB, Número de Pontos Turísticos, Densidade Populacional e PIB per capita.\n\n"); // Explica as características das cartas.
                                             
                                                //NÍVEL NOVATO - CRIAR DUAS CARTAS DO SUPER TRUNFO
    
    printf("Digite os dados da Carta 01:\n\n"); // Solicita ao usuário a inserção dos dados da carta 01

    printf("Estado (A a H):\n");
    scanf("%s", estado);
    printf("Código:\n");
    scanf("%d", &codigo);
    getchar(); // Limpa o buffer antes de ler string
    printf("Nome da Cidade:\n");
    scanf(" %[^\n]", cidade);
    printf("População:\n");
    scanf("%d", &pop);
    printf("Área:\n");
    scanf("%f", &area);
    printf("PIB:\n");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pturistico);
    
    printf("\nDigite os dados da Carta 02:\n");  // Solicita ao usuário a inserção dos dados da carta 02

    printf("Estado (A a H):\n");
    scanf("%s", estado2);
    printf("Código:\n");
    scanf("%d", &codigo2);
    getchar(); // Limpa o buffer antes de ler string
    printf("Nome da Cidade:\n");
    scanf(" %[^\n]", cidade2);
    printf("População:\n");
    scanf("%d", &pop2);
    printf("Área:\n");
    scanf("%f", &area2);
    printf("PIB:\n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pturistico2);
    
                                            //NÍVEL AVENTUREIRO - CALCULAR PIB E DENSIDADE POPULACIONAL.
    
    // Fórmulas do PIB per capita e densidade populacional, PIB per capita = PIB / População e Densidade populacional = População / Área
    pibpercapita = pib / (float)pop;
    pibpercapita2 = pib2 / (float)pop2;
    densidade_pop = pop / area;
    densidade_pop2 = pop2 / area2;

    printf("\nCarta 01\n Estado: %s \n Código: %s%d \n Nome da Cidade: %s \n População: %d hab\n Área: %.2f km²\n PIB: %.2f bilhões de reais \n Número de Pontos turísticos: %d\n", estado, estado, codigo, cidade, pop, area, pib, pturistico);
    printf(" Densidade Populacional: %.2f hab/km²\n", densidade_pop);
    printf(" PIB per capita: %.2f reais\n", pibpercapita);

    printf("\nCarta 02\n Estado: %s \n Código: %s%d \n Nome da Cidade: %s \n População: %d hab\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de Pontos turísticos: %d\n", estado2, estado2, codigo2, cidade2, pop2, area2, pib2, pturistico2);
    printf(" Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf(" PIB per capita: %.2f reais\n", pibpercapita2);

                                         //NÍVEL MESTRE - CALCULAR O SUPER PODER E COMPARAR
    
    float densidadeinv1 = -densidade_pop;
    float densidadeinv2 = -densidade_pop2;
    float super_poder1 = pop + area + pib + pturistico + pibpercapita + densidadeinv1;
    float super_poder2 = pop2 + area2 + pib2 + pturistico2 + pibpercapita2 + densidadeinv2;

    printf("\nO super poder da carta %s%d é: %.2f\n", estado, codigo, super_poder1);
    printf("O super poder da carta %s%d é: %.2f\n", estado2, codigo2, super_poder2);

    printf("\n---Comparação de Atributos:---\n"); // Comparação dos atributos e exibição dos resultados (1 = Carta 1 vence, 0 = Carta 2 vence)

    printf("População: Carta %d venceu (%d)\n", pop > pop2 ? 1 : 2, pop > pop2 ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", area > area2 ? 1 : 2, area > area2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", pib > pib2 ? 1 : 2, pib > pib2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pturistico > pturistico2 ? 1 : 2, pturistico > pturistico2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade_pop < densidade_pop2 ? 1 : 2, densidade_pop < densidade_pop2 ? 1 : 0);
    printf("PIB per capita: Carta %d venceu (%d)\n", pibpercapita > pibpercapita2 ? 1 : 2, pibpercapita > pibpercapita2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", super_poder1 > super_poder2 ? 1 : 2, super_poder1 > super_poder2 ? 1 : 0);

    return 0; //Finaliza o programa.
}
