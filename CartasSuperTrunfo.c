#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado;
    char codigodacarta [20];
    char nomedacidade [50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Digite o estado: ");
    scanf("%s", estado);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", codigodacarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade);

    printf("Digite a pupulação: ");
    scanf("%d", &populacao);

    printf("Digite a area: ");
    scanf("%f", &area);

    printf("Digite o PIB ");
    scanf("%f", &pib);

    printf("Quantidade de pontos turisticos ");
    scanf("%d", &pontosturisticos);

    printf("carta1: \n");
    printf()


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
