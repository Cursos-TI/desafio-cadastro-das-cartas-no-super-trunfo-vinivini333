#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado ; 
    char ESTADO [2] ;
    char codigo [3];
    char CODIGO [3];
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

    // Cadastro das Cartas

    printf(" *** Olá, Insire as Informações da sua cidade ***\n");

    printf("Carta 1 :\n");

    printf("Digite o Estado: \n");
    scanf("%c", &estado); // estado = 'A'
  
    printf("Digite o código da cidade: \n");
    scanf("%s", &codigo); // código = A01 
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome); // nome = SÃO PAULO
   
    printf("Digite o numero de População: \n", populacao);
    scanf("%d", &populacao); //populaçao = 12325000
    
    printf("Digite a área por km² da sua cidade: \n", area);
    scanf("%f", &area); //area = 1521.11
    
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib); // pib = 699.28
  
    printf("Digite quantos pontos turísticos tem sua cidade: \n");
    scanf("%d", &pontosturisticos); // pontos turísticos = 50
   
    // Exibição dos Dados das Cartas:
 
    printf(" *** RESULTADO DE DADOS ***\n");

    printf("CARTA 1 :\n");
    printf("Estado: %c\n", estado);
    printf("Código da cidade: %s\n" , codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População da cidade: %d\n", populacao);
    printf("Área da cidade: %.2f km²\n", area);
    printf("PIB da cidade: %.2f Bilhões de reais\n",  pib);
    printf("Pontos turísticos da cidade: %d\n", pontosturisticos);

    float densidade = populacao / area;    //VARIÁVEIS COM TAMANHO DE LETRA DIFERENTES PARA CADA CARTA
    float percapita = pib / populacao;
  
    printf("Densidade Populacional : %.2f Pessoas/km²\n", densidade);
    printf("PIB Per Capita: %.9f Reais\n", percapita);

    unsigned long int Populacao = populacao; 
    float poder = Populacao += area += pib += pontosturisticos += densidade += percapita;

    printf("Super poder : %f\n", poder);
 
    // Cadastro das Cartas:

    printf(" *** Olá, Insire as Informações da sua cidade ***\n");

    printf("Carta 2 :\n");

    printf("Digite o Estado: \n");
    scanf("%s", &ESTADO); // estado = 'B'

    printf("Digite o código da cidade: \n");
    scanf("%s", &CODIGO); // código = B02 

    printf("Digite o nome da cidade: \n");
    scanf("%s", &NOME); // nome = RiodeJaneiro

    printf("Digite o numero de População: \n");
    scanf("%d", &POPULACAO); //populaçao = 6748000

    printf("Digite a área por km² da sua cidade: \n");
    scanf("%f", &AREA); //area = 1200.25

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &PIB); // pib = 300.50

    printf("Digite quantos pontos turísticos tem sua cidade: \n");
    scanf("%d", &PONTOSTURISTICOS); // pontos turísticos = 30

    // Exibição dos Dados das Cartas:

    printf(" *** RESULTADO DE DADOS ***\n");

    printf("CARTA 2 :\n");
    printf("Estado: %s\n", ESTADO);
    printf("Código da cidade: %s\n", CODIGO);
    printf("Nome da cidade: %s\n", NOME);
    printf("População da cidade: %d\n", POPULACAO);
    printf("Área da cidade: %.2f km²\n", AREA);
    printf("PIB da cidade: %.2f Bilhões de reais\n",  PIB);
    printf("Pontos turísticos da cidade: %d\n", PONTOSTURISTICOS);
                         
    float DENSIDADE = POPULACAO / AREA;       //VARIÁVEIS COM TAMANHO DE LETRA DIFERENTES PARA CADA CARTA
    float PERCAPITA = PIB / POPULACAO;
  
    printf("Densidade Populacional : %.2f Pessoas/km²\n", DENSIDADE);
    printf("PIB Per Capita: %.9f Reais\n", PERCAPITA);

    unsigned long int Populacao1 = POPULACAO; //VARIÁVEL "Populacao1" diferente
    float PODER = Populacao1 += AREA += PIB += PONTOSTURISTICOS += DENSIDADE += PERCAPITA;

    printf("Super poder : %f\n", PODER);

    int resultado1 = populacao > POPULACAO;
    int resultado2 = area > AREA;
    int resultado3 = pib > PIB;
    int resultado4 = pontosturisticos > PONTOSTURISTICOS;
    int resultado5 = densidade < DENSIDADE;
    int resultado6 = percapita > PERCAPITA;
    int resultado7 = poder > PODER;

    if(populacao>POPULACAO)
      {
        printf("População: Carta 1 venceu\n");
      }
    else
     {
       printf("População : Carta 2 venceu\n");
     }
     if(area>AREA)
      {
        printf("Área por km² : Carta 1 venceu\n");
      }
    else
     {
       printf("Área por km² : Carta 2 venceu\n");
     }
     if(pib>PIB)
      {
        printf("PIB : Carta 1 venceu\n");
      }
    else
     {
       printf("PIB : Carta 2 venceu\n");
     }
     if(pontosturisticos>PONTOSTURISTICOS)
      {
        printf("Pontos turísticos : Carta 1 venceu\n");
      }
    else
     {
       printf("Pontos turísticos : Carta 2 venceu\n");
     }
     if(densidade<DENSIDADE)
      {
        printf("Densidade Populacional: Carta 1 venceu\n");
      }
    else
     {
       printf("Densidade Populacional : Carta 2 venceu\n");
     }
     if(percapita<PERCAPITA)
      {
        printf("PIB Per Capita : Carta 1 venceu\n");
      }
    else
     {
       printf("PIB Per Capita : Carta 2 venceu\n");
     }
     if(poder>PODER)
      {
        printf("Super Poder : Carta 1 venceu\n");
      }
    else
     {
       printf("Super Poder : Carta 2 venceu\n");
     }
    return 0;
}