#include <stdio.h>

int main() {

    // Variavéis das Cartas 01 e 02
    
    char letra1, letra2;
    char codigo1[3], codigo2[3]; 
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2; 
    float pib1, pib2; 
    int turistico1, turistico2;

    //scanf(''formato'', &variavel);

    //Cadastro da Carta 01

    //Declarar a Cidade da 1° Carta
    printf("Cadastro da Carta 01:\n\n");
    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade1);
    printf("\n");

    //Declarar a Letra do Estado da 1° Carta
    printf("Digite a Letra que representa o Estado (A a H): ");
    scanf(" %c", &letra1);
    printf("\n");

    // Declarar o Estado da Cidade da 1° Carta
    printf("Digite o Código do Estado da Cidade (01 a 04): ");
    scanf(" %s", codigo1);
    printf("\n");

    // Declarar a popolação da Cidade
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("\n");

    // Declarar a área da Cidade
    printf("Digite a Área: ");
    scanf(" %f", &area1);
    printf("\n");

    // Declarar o PIB da Cidade
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("\n");

    //Declarar os Pontos turísticos
    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &turistico1);
    printf("\n\n");


     //Cadastro da Carta 02

    //Declarar a Cidade da 2° Carta
    printf("Cadastro da Carta 02:\n\n");
    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);
    printf("\n");

    //Declarar a Letra do Estado da 2° Carta
    printf("Digite a Letra que representa o Estado (A a H): ");
    scanf(" %c", &letra2);
    printf("\n");

    // Declarar o Estado da Cidade da 2° Carta
    printf("Digite o Código do Estado da Cidade (01 a 04): ");
    scanf(" %s", codigo2);
    printf("\n");

    // Declarar a popolação da Cidade da 2° Carta
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("\n");

    // Declarar a área da Cidade da 2° Carta
    printf("Digite a Área: ");
    scanf(" %f", &area2);
    printf("\n");

    // Declarar o PIB da Cidade da 2° Carta
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("\n");

    //Declarar os Pontos turísticos da 2 ° Carta
    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &turistico2);
    printf("\n\n");

    // Adcionando os atriuitos para ter o PIB per capita e a densidade populacional (Carta 01)

    float quociente1 = (float) populacao1 / area1;
    float quociente2 = (float) pib1 / populacao1;
    float quociente3 = (float) populacao2 / area2;
    float quociente4 = (float) pib2 / populacao2; 

    //printf(''texto com formatação'', variavel1, variavel2, ...);

    // Dados da Carta 01
    
    printf("Dados Cadastrado: Carta 01");
    printf("\n\n");
    printf("Estado: %c\n", letra1);
    printf("Código: %c%s\n", letra1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", quociente1);
    printf("PIB per Capita: %.2f reais\n\n", quociente2);

    // Dados da Carta 02
    
    printf("Dados Cadastrado: Carta 02");
    printf("\n\n");
    printf("Estado: %c\n", letra2);
    printf("Código: %c%s\n", letra2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", quociente3);
    printf("PIB per Capita: %.2f reais\n\n", quociente4);
    printf("Final do Cadastramento\n\n");

}
/*
%d: Imprime um inteiro no formato decimal.

%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.
*/