#include <stdio.h>

int main(){
    // Primeira carta: A
    char codigoDaCarta1 []= "A01";
    char nomeDaCidade1 [20];
    float PopulacaoDaCidade1;
    float AreaEmKmCidade1;
    float PIBCidade1;
    int NumerosDePontosTuristicosCidade1;
    float DensidadePopulacionalcidade1;
    float PIBpercapitacidade1;

    // Segunda carta: B
    char codigoDaCarta2 []= "B01";
    char nomeDaCidade2 [20];
    float PopulacaoDaCidade2;
    float AreaEmKmCidade2;
    float PIBCidade2;
    int NumerosDePontosTuristicosCidade2;
    float DensidadePopulacionalcidade2;
    float PIBpercapitacidade2;

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


    
    
    return 0;



    
}