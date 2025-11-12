#include <stdio.h>

int main(){

    int resultado;

    // Primeira carta: A
    char codigoDaCarta1 []= "A01";
    char nomeDaCidade1 [20];
    float PopulacaoDaCidade1;
    float AreaEmKmCidade1;
    float PIBCidade1;
    int NumerosDePontosTuristicosCidade1;
    float DensidadePopulacionalcidade1;
    float PIBpercapitacidade1;
    float superPoder1;
    

    // Segunda carta: B
    char codigoDaCarta2 []= "B01";
    char nomeDaCidade2 [20];
    float PopulacaoDaCidade2;
    float AreaEmKmCidade2;
    float PIBCidade2;
    int NumerosDePontosTuristicosCidade2;
    float DensidadePopulacionalcidade2;
    float PIBpercapitacidade2;
    float superPoder2;
    

    printf("----Bem vindo ao cadastro de cartas!!----\n");
    printf("------------------------------------------\n\n");

    // carta A

    // a especificção %[^\n] serve para salvar nomes compostos

    printf("Vamos começar com a sua primeira carta, ela receberá o codigo de especificação: A01. \n\nDigite qual será o nome da sua cidade: \n");
    scanf("%[^\n]", nomeDaCidade1 );

    printf("Qual é a população de habitantes (Em Milhões) de %s ?\n",nomeDaCidade1 );
    scanf("%f", &PopulacaoDaCidade1);

    printf("Pode me falar qual é a área (Em km²) de %s?\n",nomeDaCidade1);
    scanf(" %f", &AreaEmKmCidade1);

    printf("Quanto é o PIB (Produto Interno Bruto da cidade, em Bilhões) de %s?\n", nomeDaCidade1);
    scanf(" %f", &PIBCidade1 );

    printf("Quantos pontos Turisticos tem em %s?\n",nomeDaCidade1 );
    scanf(" %d", &NumerosDePontosTuristicosCidade1);

    DensidadePopulacionalcidade1 = (PopulacaoDaCidade1 * 1e6) / AreaEmKmCidade1;

    PIBpercapitacidade1 =  (PIBCidade1 *1e9 ) / (PopulacaoDaCidade1 * 1e6);

    superPoder1 = PopulacaoDaCidade1 + AreaEmKmCidade1 + PIBCidade1 + NumerosDePontosTuristicosCidade1 +
     PIBpercapitacidade1 - DensidadePopulacionalcidade1;

    // carta B

    printf("Agora vamos para a segunda carta, ela receberá o codigo de especificação: B01. \n\nDigite qual será o nome da sua cidade: \n");
    scanf("%s[^\n]", nomeDaCidade2 );

    printf("Qual é a população de habitantes (Em Milhões) de %s ?\n",nomeDaCidade2 );
    scanf("%f", &PopulacaoDaCidade2);

    printf("Pode me falar qual é a área (Em km²) de %s?\n",nomeDaCidade2);
    scanf(" %f", &AreaEmKmCidade2);

    printf("Quanto é o PIB (Produto Interno Bruto da cidade, em Bilhões) de %s?\n", nomeDaCidade2);
    scanf(" %f", &PIBCidade2 );

    printf("Quantos pontos Turisticos tem em %s?\n",nomeDaCidade2 );
    scanf(" %d", &NumerosDePontosTuristicosCidade2 );


    DensidadePopulacionalcidade2 = (PopulacaoDaCidade2 *1e6) / AreaEmKmCidade2;

    PIBpercapitacidade2 =  (PIBCidade2 *1e9 ) / (PopulacaoDaCidade2 * 1e6);

    superPoder2 = PopulacaoDaCidade2 + AreaEmKmCidade2 + PIBCidade2 + NumerosDePontosTuristicosCidade2 +
     PIBpercapitacidade2 - DensidadePopulacionalcidade2;
    

    // carta A
    printf("-------------------------------------------\n");
    printf("------------- Carta %s -------------------\n",codigoDaCarta1);
    printf("-------------------------------------------\n\n");
    printf("Cidade: %s \n",nomeDaCidade1);
    printf("População: %.2f Milhões \n", PopulacaoDaCidade1);
    printf("Área em KM²: %.2f KM² \n",AreaEmKmCidade1);
    printf("PIB: %.2f Bilhões \n",PIBCidade1);
    printf("Números de pontos turisticos: %d \n",NumerosDePontosTuristicosCidade1);
    printf("Densidade Populacional: %.2f hab/km². \n", DensidadePopulacionalcidade1);
    printf("PIB per capita: %.2f reais.\n\n", PIBpercapitacidade1);

    // carta B

    printf("-------------------------------------------\n");
    printf("------------- Carta %s -------------------\n",codigoDaCarta2);
    printf("-------------------------------------------\n\n");
    printf("Cidade: %s \n",nomeDaCidade2);
    printf("População: %.2f Milhões \n", PopulacaoDaCidade2);
    printf("Área em KM²: %.2f KM² \n",AreaEmKmCidade2);
    printf("PIB: %.2f Bilhões \n",PIBCidade2);
    printf("Números de pontos turisticos: %d \n",NumerosDePontosTuristicosCidade2);
    printf("Densidade Populacional: %.2f hab/km². \n", DensidadePopulacionalcidade2);
    printf("PIB per capita: %.2f reais.\n\n", PIBpercapitacidade2);

    //comparação das cartas

    printf("-------------------------------------------\n");
    printf("-----------Comparando-as-cartas------------\n");
    printf("-------------------------------------------\n");


    resultado = superPoder1 > superPoder2;
    printf("Resultado super poder: %d\n", resultado);

    resultado = PopulacaoDaCidade1 > PopulacaoDaCidade2;
    printf("Resultado população da cidade: %d\n", resultado);

    resultado = AreaEmKmCidade1 > AreaEmKmCidade2;
    printf("Resultado da área: %d\n", resultado);

    resultado = PIBCidade1 > PIBCidade2;
    printf("Resultado PIB: %d\n", resultado);

    resultado = NumerosDePontosTuristicosCidade1 > NumerosDePontosTuristicosCidade2;
    printf("Resultado de pontos turisticos: %d\n", resultado);

    resultado = DensidadePopulacionalcidade1 < DensidadePopulacionalcidade2;
    printf("Resultado densidade populacional: %d\n", resultado);

    resultado = PIBpercapitacidade1 > PIBpercapitacidade2;
    printf("Resultado PIB per capita: %d\n", resultado);

    return 0;
  
}