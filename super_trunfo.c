#include <stdio.h>

int main(){

    int resultado;
    char vercartas;

    // Primeira carta: A
    char codigoDaCarta1 []= "A01";
    char nomeDaCidade1 [30];
    float PopulacaoDaCidade1;
    float AreaEmKmCidade1;
    float PIBCidade1;
    int NumerosDePontosTuristicosCidade1;
    float DensidadePopulacionalcidade1;
    float PIBpercapitacidade1;
    float superPoder1;
    
    // Segunda carta: B
    char codigoDaCarta2 []= "B01";
    char nomeDaCidade2 [30];
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
   printf("Vamos comecar com a primeira carta [A01] \nDigite o nome da cidade: ");
   scanf(" %[^\n]", nomeDaCidade1);

   printf("Populacao em Milhoes: ");
   scanf("%f", &PopulacaoDaCidade1);

   printf("Area em km2: ");
   scanf("%f", &AreaEmKmCidade1);

   printf("PIB em Bilhoes: ");
   scanf("%f", &PIBCidade1);

   printf("Numero de pontos turisticos: ");
   scanf("%d", &NumerosDePontosTuristicosCidade1);

   DensidadePopulacionalcidade1 = (PopulacaoDaCidade1 * 1e6) / AreaEmKmCidade1;
   PIBpercapitacidade1 = (PIBCidade1 * 1e9) / (PopulacaoDaCidade1 * 1e6);
   superPoder1 = PopulacaoDaCidade1 + AreaEmKmCidade1 + PIBCidade1 + NumerosDePontosTuristicosCidade1 + PIBpercapitacidade1 - DensidadePopulacionalcidade1;


   // carta B
   printf("\nAgora a segunda carta [B01]\nDigite o nome da cidade: ");
   scanf(" %[^\n]", nomeDaCidade2);

   printf("Populacao em Milhoes: ");
   scanf("%f", &PopulacaoDaCidade2);

   printf("Area em km2: ");
   scanf("%f", &AreaEmKmCidade2);

   printf("PIB em Bilhoes: ");
   scanf("%f", &PIBCidade2);

   printf("Numero de pontos turisticos: ");
   scanf("%d", &NumerosDePontosTuristicosCidade2);

   DensidadePopulacionalcidade2 = (PopulacaoDaCidade2 *1e6) / AreaEmKmCidade2;
   PIBpercapitacidade2 =  (PIBCidade2 *1e9) / (PopulacaoDaCidade2 * 1e6);
   superPoder2 = PopulacaoDaCidade2 + AreaEmKmCidade2 + PIBCidade2 + NumerosDePontosTuristicosCidade2 + PIBpercapitacidade2 - DensidadePopulacionalcidade2;


    // NOVA BATALHA COM DOIS ATRIBUTOS
    int atributo1, atributo2;
    float valorA1, valorA2, valorB1, valorB2;
    float somaA, somaB;

    printf("\n-------------------------------------------\n");
    printf("------------- Batalha das Cartas ----------\n");
    printf("-------------------------------------------\n");

    // Escolha atributo 1
    printf("\nEscolha o 1º atributo para comparação:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turisticos\n5. PIB per Capita\n6. Densidade Populacional\n7. Super Poder\n");
    scanf("%d", &atributo1);

    switch (atributo1) {
        case 1: valorA1 = PopulacaoDaCidade1; valorB1 = PopulacaoDaCidade2; break;
        case 2: valorA1 = AreaEmKmCidade1; valorB1 = AreaEmKmCidade2; break;
        case 3: valorA1 = PIBCidade1; valorB1 = PIBCidade2; break;
        case 4: valorA1 = NumerosDePontosTuristicosCidade1; valorB1 = NumerosDePontosTuristicosCidade2; break;
        case 5: valorA1 = PIBpercapitacidade1; valorB1 = PIBpercapitacidade2; break;
        case 6: valorA1 = DensidadePopulacionalcidade1; valorB1 = DensidadePopulacionalcidade2; break;
        case 7: valorA1 = superPoder1; valorB1 = superPoder2; break;
        default: printf("Opção invalida!\n"); return 0;
    }

    // Menu dinâmico para o 2° atributo
    printf("\nEscolha o 2º atributo (diferente do primeiro):\n");
    for(int i=1;i<=7;i++){
        if(i!=atributo1){
            switch(i){
                case 1: printf("1. População\n"); break;
                case 2: printf("2. Área\n"); break;
                case 3: printf("3. PIB\n"); break;
                case 4: printf("4. Pontos Turisticos\n"); break;
                case 5: printf("5. PIB per Capita\n"); break;
                case 6: printf("6. Densidade Populacional\n"); break;
                case 7: printf("7. Super Poder\n"); break;
            }
        }
    }
    scanf("%d", &atributo2);

    if(atributo2 == atributo1){
        printf("Erro: atributo repetido!\n");
        return 0;
    }

    switch (atributo2) {
        case 1: valorA2 = PopulacaoDaCidade1; valorB2 = PopulacaoDaCidade2; break;
        case 2: valorA2 = AreaEmKmCidade1; valorB2 = AreaEmKmCidade2; break;
        case 3: valorA2 = PIBCidade1; valorB2 = PIBCidade2; break;
        case 4: valorA2 = NumerosDePontosTuristicosCidade1; valorB2 = NumerosDePontosTuristicosCidade2; break;
        case 5: valorA2 = PIBpercapitacidade1; valorB2 = PIBpercapitacidade2; break;
        case 6: valorA2 = DensidadePopulacionalcidade1; valorB2 = DensidadePopulacionalcidade2; break;
        case 7: valorA2 = superPoder1; valorB2 = superPoder2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    somaA = valorA1 + valorA2;
    somaB = valorB1 + valorB2;


    printf("\n=========== RESULTADO ===========\n");
    printf("%s: %.2f + %.2f = %.2f\n", nomeDaCidade1, valorA1, valorA2, somaA);
    printf("%s: %.2f + %.2f = %.2f\n", nomeDaCidade2, valorB1, valorB2, somaB);

    if(somaA > somaB){
        printf("\n⭐ A carta %s VENCEU!\n", nomeDaCidade1);
    } else if (somaB > somaA){
        printf("\n⭐ A carta %s VENCEU!\n", nomeDaCidade2);
    } else {
        printf("\n⚠ EMPATE!\n");
    }

    return 0;
}
