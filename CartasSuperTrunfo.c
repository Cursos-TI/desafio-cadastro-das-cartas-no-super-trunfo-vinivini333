#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo;
    char nome [25];
    float populacao;
    float area;
    float pib;
    int pontosturisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf(" *** Olá, Insire as Informações da sua cidade ***\n");

    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo); // código = 062
    printf("Código da cidade é: %d\n", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome); // nome = Goiãnia
    printf("O nome da cidade é: %s\n", nome);

    printf("Digite o numero de População: \n", populacao);
    scanf("%f", &populacao); //populaçao = 1.437366
    printf("Número de População é : %f\n", populacao);

    printf("Digite a área por km² da sua cidade: \n", area);
    scanf("%f", &area); //area = 729.29
    printf("A área por km² da sua cidade é de: %.2f\n", area);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib); // pib = 9.865989
    printf("O PIB da sua cidade é : %.6f\n", pib);

    printf("Digite quantos pontos turísticos tem sua cidade: \n");
    scanf("%d", &pontosturisticos); // pontos turísticos = 15
    printf("Quantidade de pontos turísticos da sua cidade é de : %d\n", pontosturisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf(" *** RESULTADO DE DADOS DAS CIDADES ***\n");

    printf("Código da cidade: %d\n" , codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População da cidade: %f\n", populacao);
    printf("Área da cidade: %.2f\n", area);
    printf("PIB da cidade: %f\n",  pib);
    printf("Pontos turísticos da cidade: %d\n", pontosturisticos);
    return 0;
}
