#include <stdio.h>

int main(){
    // Primeira carta: A
    char codigoDaCarta1 []= "A01";
    char nomeDaCidade1 [20];
    float PopulacaoDaCidade1;
    float AreaEmKmCidade1;
    float PIBCidade1;
    int NumerosDePontosTuristicosCidade1;

    // Segunda carta: B
    char codigoDaCarta2 []= "B01";
    char nomeDaCidade2 [20];
    float PopulacaoDaCidade2;
    float AreaEmKmCidade2;
    float PIBCidade2;
    int NumerosDePontosTuristicosCidade2;

    printf("----Bem vindo ao cadrastro de cartas!!----\n");
    printf("------------------------------------------\n\n");

    // carta A

    printf("Vamos começar com a sua primeira carta, ela receberá o codigo de especificação: A01. \n\nDigite qual será o nome da sua cidade: \n");
    scanf("%s", &nomeDaCidade1 );

// OBSERVAÇÕES: COLOQUEI A POPULAÇÃO COMO DO TIPO FLOAT POR QUE INTEIRO SO NÃO ACEITARIA NÚMEROS QUEBRADOS.

    printf("Qual é a população de abitantes (Em Milhões) de %s ?\n",nomeDaCidade1 );
    scanf("%f", &PopulacaoDaCidade1);

    printf("Pode me falar qual é a área (Em km²) de %s?\n",nomeDaCidade1);
    scanf(" %f", &AreaEmKmCidade1);

    printf("Quanto é o PIB (Produto Interno Bruto da cidade, em Bilhões) de %s?\n", nomeDaCidade1);
    scanf(" %f", &PIBCidade1 );

    printf("Quantos pontos Turisticos tem em %s?\n",nomeDaCidade1 );
    scanf(" %d", &NumerosDePontosTuristicosCidade1);

    // carta B

    printf("Agora vamos para a segunda carta, ela receberá o codigo de especificação: B01. \n\nDigite qual será o nome da sua cidade: \n");
    scanf("%s", &nomeDaCidade2 );

    printf("Qual é a população de abitantes (Em Milhões) de %s ?\n",nomeDaCidade2 );
    scanf("%f", &PopulacaoDaCidade2);

    printf("Pode me falar qual é a área (Em km²) de %s?\n",nomeDaCidade2);
    scanf(" %f", &AreaEmKmCidade2);

    printf("Quanto é o PIB (Produto Interno Bruto da cidade, em Bilhões) de %s?\n", nomeDaCidade2);
    scanf(" %f", &PIBCidade2 );

    printf("Quantos pontos Turisticos tem em %s?\n",nomeDaCidade2 );
    scanf(" %d", &NumerosDePontosTuristicosCidade2 );

    

    // carta A
    printf("-------------------------------------------\n");
    printf("------------- Carta %s -------------------\n",codigoDaCarta1);
    printf("-------------------------------------------\n\n");
    printf("Cidade: %s \n",nomeDaCidade1);
    printf("População: %.2f Milhões \n", PopulacaoDaCidade1);
    printf("Área em KM²: %.2f KM² \n",AreaEmKmCidade1);
    printf("PIB: %.2f Bilhões \n",PIBCidade1);
    printf("Números de pontos turisticos: %d \n\n",NumerosDePontosTuristicosCidade1);

    // carta B

    printf("-------------------------------------------\n");
    printf("------------- Carta %s -------------------\n",codigoDaCarta2);
    printf("-------------------------------------------\n\n");
    printf("Cidade: %s \n",nomeDaCidade2);
    printf("População: %.2f Milhões \n", PopulacaoDaCidade2);
    printf("Área em KM²: %.2f KM² \n",AreaEmKmCidade2);
    printf("PIB: %.2f Bilhões \n",PIBCidade2);
    printf("Números de pontos turisticos: %d \n",NumerosDePontosTuristicosCidade2);


    
    
    return 0;



    
}