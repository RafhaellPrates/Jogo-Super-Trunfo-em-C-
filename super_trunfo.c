#include <stdio.h>

int main(){

    int resultado;
    char vercartas [2];

    // Primeira carta: A
    char codigoDaCarta1 []= "A01";
    char nomeDaCidade1 [30] = "Curitiba";
    float PopulacaoDaCidade1 = 1.8;
    float AreaEmKmCidade1 = 432;
    float PIBCidade1 = 98;
    int NumerosDePontosTuristicosCidade1 = 35 , opcao1;
    float DensidadePopulacionalcidade1;
    float PIBpercapitacidade1;
    float superPoder1;
    float ataque1;
    
    

    // Segunda carta: B
    char codigoDaCarta2 []= "B01";
    char nomeDaCidade2 [30] = "Goiania";
    float PopulacaoDaCidade2 = 1.5;
    float AreaEmKmCidade2 = 728;
    float PIBCidade2 = 59.86;
    int NumerosDePontosTuristicosCidade2 = 20, opcao2;
    float DensidadePopulacionalcidade2;
    float PIBpercapitacidade2;
    float superPoder2;
    float ataque2;

    

   /* printf("----Bem vindo ao cadastro de cartas!!----\n");
   printf("------------------------------------------\n\n");

   // carta A

   // a especificção % [^\n] serve para salvar nomes compostos

   printf("Vamos começar com a sua primeira carta, ela receberá o codigo de especificação: A01. \n\nDigite qual será o nome da sua cidade: \n");
   scanf(" %[^\n]", nomeDaCidade1 );

   printf("Qual é a população de habitantes (Em Milhões) de %s ?\n",nomeDaCidade1 );
   scanf("%f", &PopulacaoDaCidade1);

   printf("Pode me falar qual é a área (Em km²) de %s?\n",nomeDaCidade1);
   scanf(" %f", &AreaEmKmCidade1);

   printf("Quanto é o PIB (Produto Interno Bruto da cidade, em Bilhões) de %s?\n", nomeDaCidade1);
   scanf(" %f", &PIBCidade1 );

   printf("Quantos pontos Turisticos tem em %s?\n",nomeDaCidade1 );
   scanf(" %d", &NumerosDePontosTuristicosCidade1); */

   DensidadePopulacionalcidade1 = (PopulacaoDaCidade1 * 1e6) / AreaEmKmCidade1;

   PIBpercapitacidade1 =  (PIBCidade1 *1e9 ) / (PopulacaoDaCidade1 * 1e6);

   superPoder1 = PopulacaoDaCidade1 + AreaEmKmCidade1 + PIBCidade1 + NumerosDePontosTuristicosCidade1 +
   PIBpercapitacidade1 - DensidadePopulacionalcidade1;

    // // carta B

   /* printf("Agora vamos para a segunda carta, ela receberá o codigo de especificação: B01. \n\nDigite qual será o nome da sua cidade: \n");
   scanf(" %[^\n]", nomeDaCidade2 );

   printf("Qual é a população de habitantes (Em Milhões) de %s ?\n",nomeDaCidade2 );
   scanf("%f", &PopulacaoDaCidade2);

   printf("Pode me falar qual é a área (Em km²) de %s?\n",nomeDaCidade2);
   scanf(" %f", &AreaEmKmCidade2);

   printf("Quanto é o PIB (Produto Interno Bruto da cidade, em Bilhões) de %s?\n", nomeDaCidade2);
   scanf(" %f", &PIBCidade2 );

   printf("Quantos pontos Turisticos tem em %s?\n",nomeDaCidade2 );
   scanf(" %d", &NumerosDePontosTuristicosCidade2 ); */


   DensidadePopulacionalcidade2 = (PopulacaoDaCidade2 *1e6) / AreaEmKmCidade2;

   PIBpercapitacidade2 =  (PIBCidade2 *1e9 ) / (PopulacaoDaCidade2 * 1e6);

   superPoder2 = PopulacaoDaCidade2 + AreaEmKmCidade2 + PIBCidade2 + NumerosDePontosTuristicosCidade2 +
   PIBpercapitacidade2 - DensidadePopulacionalcidade2;

      //comparação das cartas

    printf("-------------------------------------------\n");
    printf("-------------Batalha-das-cartas------------\n");
    printf("-------------------------------------------\n");

     printf("Carta %s qual atributo vc escolha para a batalha?\n", codigoDaCarta1);
     printf("1. População da Cidade. \n");
     printf("2. Área.\n");
     printf("3. PIB.\n");
     printf("4. Número de Pontos Turisticos.\n");
     printf("5. PIB per Capita.\n");
     printf("6. Densidade Populacional.\n");
     printf("7. Super Poder.\n");
     scanf("%d",&opcao1);

     //atribuindo o valor ao ataque1

     switch (opcao1)
     {
     case 1:
       ataque1 = PopulacaoDaCidade1;
      break;
     case 2:
       ataque1 = AreaEmKmCidade1;
      break;
     case 3:
       ataque1 = PIBCidade1;
      break;
     case 4:
       ataque1 = NumerosDePontosTuristicosCidade1;
      break;
     case 5:
       ataque1 = PIBpercapitacidade1;
      break;
     case 6:
       ataque1 = DensidadePopulacionalcidade1;
      break;
     case 7:
       ataque1 = superPoder1;
      break;
     
     default:
      printf("Opção invalida.");
      break;
     }
    
     

     printf("Carta %s qual atributo vc escolha para a batalha?\n", codigoDaCarta2);
     printf("1. População da Cidade. \n");
     printf("2. Área.\n");
     printf("3. PIB.\n");
     printf("4. Número de Pontos Turisticos.\n");
     printf("5. PIB per Capita.\n");
     printf("6. Densidade Populacional.\n");
     printf("7. Super Poder.\n");
     scanf("%d",&opcao2);

     //atribuindo o valor ao ataque2
     switch (opcao2)
     {
     case 1:
       ataque2 = PopulacaoDaCidade2;
      break;
     case 2:
       ataque2 = AreaEmKmCidade2;
      break;
     case 3:
       ataque2 = PIBCidade2;
      break;
     case 4:
       ataque2 = NumerosDePontosTuristicosCidade2;
      break;
     case 5:
       ataque2 = PIBpercapitacidade2;
      break;
     case 6:
       ataque2 = DensidadePopulacionalcidade2;
      break;
     case 7:
       ataque2 = superPoder2;
      break;
     
     default:
      printf("Opção invalida.");
      break;
     }
     
     //batalha
      
     if (ataque1 > ataque2)
     {
        printf("A Carta 1 ganhou\n");
        printf("Atributos comparados: %.2f e %.2f \n ", ataque1, ataque2);
        printf("Gostaria de ver as cartas? [S/N]");
        scanf("%s",&vercartas);
        if (vercartas == "S" || "s")
        {
         printf("Essa é a carta vencedora!!\n\n");

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
        printf("-------------------------------------------\n");

        printf("E essa é a carta perdedora\n\n");

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
        printf("-------------------------------------------\n");
         
        }
        
        
     }else if (ataque2 > ataque1){
        printf("A Carta 2 ganhou\n");
        printf("Atributos comparados: %.2f e %.2f ", ataque2, ataque1);
        printf("Gostaria de ver as cartas? [S/N]");
        scanf("%s",&vercartas);
        if (vercartas == "S" || "s")
        {
         printf("Essa é a carta vencedora!!\n\n");

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
        printf("-------------------------------------------\n");

        printf("E essa é a carta perdedora\n\n");

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
        printf("-------------------------------------------\n");
         
        } 
        
        

     }else 
     {
      printf("Empate!!!\n");
     }
     
     
    return 0;
  
}