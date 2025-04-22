#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char letra1, letra2; // Uma letra de 'A' a 'H' (representando um dos dois estados) 
    char codigo1[3], codigo2[3]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char cidade1[20], cidade2[20]; // O nome da cidade
    int população1, população2; // O número de habitantes da cidade
    float area1, area2; // A área da cidade em quilômetros quadrados
    float pib1, pib2; // O Produto Interno Bruto da cidade
    int turistico1, turistico2; // A quantidade de pontos turísticos na cidade.

    //printf(''texto com formatação'', variavel1, variavel2, ...);
    //scanf(''formato'', &variavel);

    printf("Cadastro da Carta 01:\n");
    printf("Digite a Letra qe representa o Estado: ");
    scanf("%s", letra1);

    











    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
/*
%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.
*/