#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado [2]; 
    char ESTADO [2];
    char codigo [25];
    char CODIGO [25];
    char nome [25];
    char NOME [25];  
    int populacao;
    int POPULACAO;
    float area;
    float AREA;
    float pib;
    float PIB;
    int pontosturisticos;
    int PONTOSTURISTICOS;                 /*VARIAVEIS ESCRITAS COM TAMANHO DE LETRAS DIFERENTES PARA CADA CARTA
                                            (SENDO MINUSCULAS PARA CARTA 1 E MAIUSCULAS PARA CARTA 2)*/ 

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf(" *** Olá, Insire as Informações da sua cidade ***\n");

    printf("Carta 1 :\n");

    printf("Digite o Estado: \n");
    scanf("%s", &estado); // estado = 'A'
    printf("Estado: %s\n", estado);

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigo); // código = A01 
    printf("Código da cidade é: %s\n", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome); // nome = SÃO PAULO
    printf("O nome da cidade é: %s\n", nome);

    printf("Digite o numero de População: \n", populacao);
    scanf("%d", &populacao); //populaçao = 12325000
    printf("Número de População é : %d\n", populacao);

    printf("Digite a área por km² da sua cidade: \n", area);
    scanf("%f", &area); //area = 1521.11
    printf("A área por km² da sua cidade é de: %.2f km²\n", area);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib); // pib = 699.28
    printf("O PIB da sua cidade é : %.2f Bilhões de reais\n", pib);

    printf("Digite quantos pontos turísticos tem sua cidade: \n");
    scanf("%d", &pontosturisticos); // pontos turísticos = 50
    printf("Quantidade de pontos turísticos da sua cidade é de : %d\n", pontosturisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf(" *** RESULTADO DE DADOS ***\n");

    printf("CARTA 1 :\n");
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n" , codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População da cidade: %d\n", populacao);
    printf("Área da cidade: %.2f km²\n", area);
    printf("PIB da cidade: %.2f Bilhões de reais\n",  pib);
    printf("Pontos turísticos da cidade: %d\n", pontosturisticos);

    float densidade = populacao / area;    //VARIÁVEIS COM TAMANHO DE PRIMEIRA LETRA DIFERENTES PARA CADA CARTA
    float percapita = pib / populacao;
  
    printf("Densidade Populacional : %.2f Pessoas/km²\n", densidade);
    printf("PIB Per Capita: %.9f Reais\n", percapita);

    unsigned long int Populacao = populacao; 
    float poder = Populacao += area += pib += pontosturisticos += densidade += percapita;

    printf("Super poder : %f\n", poder);
 
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf(" *** Olá, Insire as Informações da sua cidade ***\n");

    printf("Carta 2 :\n");

    printf("Digite o Estado: \n");
    scanf("%s", &ESTADO); // estado = 'B'
    printf("Estado: %s\n", ESTADO);

    printf("Digite o código da cidade: \n");
    scanf("%s", &CODIGO); // código = B02 
    printf("Código da cidade é: %s\n", CODIGO );

    printf("Digite o nome da cidade: \n");
    scanf("%s", &NOME); // nome = RiodeJaneiro
    printf("O nome da cidade é: %s\n", NOME);

    printf("Digite o numero de População: \n");
    scanf("%d", &POPULACAO); //populaçao = 6748000
    printf("Número de População é : %d\n", POPULACAO);

    printf("Digite a área por km² da sua cidade: \n");
    scanf("%f", &AREA); //area = 1200.25
    printf("A área por km² da sua cidade é de: %.2f km²\n", AREA);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &PIB); // pib = 300.50
    printf("O PIB da sua cidade é : %.2f Bilhões de reais\n", PIB);

    printf("Digite quantos pontos turísticos tem sua cidade: \n");
    scanf("%d", &PONTOSTURISTICOS); // pontos turísticos = 30
    printf("Quantidade de pontos turísticos da sua cidade é de : %d\n", PONTOSTURISTICOS);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf(" *** RESULTADO DE DADOS ***\n");

    printf("CARTA 2 :\n");
    printf("Estado: %s\n", ESTADO);
    printf("Código da cidade: %s\n", CODIGO);
    printf("Nome da cidade: %s\n", NOME);
    printf("População da cidade: %d\n", POPULACAO);
    printf("Área da cidade: %.2f km²\n", AREA);
    printf("PIB da cidade: %.2f Bilhões de reais\n",  PIB);
    printf("Pontos turísticos da cidade: %d\n", PONTOSTURISTICOS);
                         
    float Densidade = POPULACAO / AREA;       //VARIÁVEIS COM TAMANHO DE PRIMEIRA LETRA DIFERENTES PARA CADA CARTA
    float Percapita = PIB / POPULACAO;
  
    printf("Densidade Populacional : %.2f Pessoas/km²\n", Densidade);
    printf("PIB Per Capita: %.9f Reais\n", Percapita);

    unsigned long int Populacao1 = POPULACAO; 
    float Poder = Populacao1 += AREA += PIB += PONTOSTURISTICOS += Densidade += Percapita;

    printf("Super poder : %f\n", Poder);
    
    return 0;
}