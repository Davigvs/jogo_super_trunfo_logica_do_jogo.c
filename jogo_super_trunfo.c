#include <stdio.h>

int main(){

 //armazenando da carta 1
    char estado;
    char cd_carta[4]; //código da carta
    char nome_CD[50]; //nome da cidade
    int populacao;
    float area; //em km quadrados
    float pib;
    int NP_turistico; //número de pontos turísticos
    float S_poder; //super poder

 //armazenamento da carta 2
    char estado_2;
    char cd_carta_2[4];
    char nome_CD_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int NP_turistico_2;
    float S_poder_2;


  //interação com o usuario  
  //essa é a carta 1
    printf("Digite os dados da carta 1 \n");
      printf("Digite a letra do estado: \n");
      scanf(" %c", &estado);

      printf("Digite o código da carta de 01 a 04: \n");
      scanf("%s", cd_carta);

      printf("Digite a população da cidade: \n");
      scanf("%d", &populacao);
      
      printf("Digite o nome da cidade: \n");
      scanf("%s", nome_CD);

      printf("Digite a área da cidade: \n");
      scanf("%f", &area);

      printf("Digite o PIB interno bruto da cidade: \n");
      scanf("%f", &pib);

      printf("Digite quantos pontos turisticos existem na cidade: \n");
      scanf("%d", &NP_turistico);
    //calculo de densidade populacional e PIB per capital
    float Densi_populacional = (float) populacao / area;
    float PIB_per_capi = pib /(float) populacao;

    //calculo do super poder
  int s_poder = estado + populacao + area + pib + NP_turistico + Densi_populacional + PIB_per_capi;


  //carta 2
    printf("Digite os dados da Carta 2\n");
      printf("Digite a letra do estado da carta 2: \n");
      scanf(" %c", &estado_2);

      printf("Digite o código da carta de 01 a 04: \n");
      scanf("%s", cd_carta_2);

      printf("Digite o nome da cidade: \n");
      scanf("%s", nome_CD_2);

      printf("Digite a população da cidade: \n");
      scanf("%d", &populacao_2);

      printf("Digite a área da cidade: \n");
      scanf("%f", &area_2);

      printf("Digite o pib da cidade: \n");
      scanf("%f", &pib_2);

      printf("Digite o número de pontos turisticos: \n");
      scanf("%d", &NP_turistico_2);
    //calculo de densidade populacional e PIB per capital
    float Densi_populacional_2 = (float) populacao_2 / area_2;
    float PIB_per_capi_2 = pib_2 /(float) populacao_2;
 //calculo do super poder
    int s_poder_2 = estado_2 + populacao_2 + area_2 + pib_2 + NP_turistico_2 + Densi_populacional_2 + PIB_per_capi_2;


//primeiro print com todos os dados
printf("\n");
printf("A sua primeira carta é\n");
printf("Carta 1:\n" "Estado: %c\n" "Código: %s\n" 
  "Nome da cidade: %s\n" "População: %d\n" "Área: %.2fkm² \n" "PIB: %.2f\n" 
  "Número de pontos túristicos: %d\n" "Densidade populacional: %f\n" 
  "PIB per capita: %.2f\n" "S_poder %f\n", estado, cd_carta, nome_CD, populacao, area, pib, NP_turistico, Densi_populacional, PIB_per_capi);

//segundo print tambem com todos os dados
printf("\n");
printf("A sua segunda carta é:\n");
printf("Carta 2:\n" "Estado: %c\n" "Código: %s\n" 
  "Nome da cidade: %s\n" "População: %d\n" "Área: %.2fkm² \n" "PIB: %.2f\n" 
  "Número de pontos túristicos: %d\n" "Densidade populacional: %.2f\n" 
  "PIB per capita: %.2f\n " "S_poder_2 %f\n", estado_2, cd_carta_2, 
  nome_CD_2, populacao_2, area_2, pib_2, NP_turistico_2, Densi_populacional_2, PIB_per_capi_2);

printf("\n");
printf("Comparação de cartas:\n");

printf("Carta 1 - %s: %f\n", nome_CD, area);
printf("Carta 2 - %s: %f\n", nome_CD_2, area_2);
if (area > area_2) {
  printf("Carta 1 (%s) é a vencedora", nome_CD);
}else{
  printf("Carta 2 (%s) é a vencedora", nome_CD_2);
}

 return 0;

}