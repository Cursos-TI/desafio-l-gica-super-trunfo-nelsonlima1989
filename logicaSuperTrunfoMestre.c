#include <stdio.h>

int main() {


   // Carta 1
 char estado1, codigo1[5], nome1[40];
 unsigned long int pop1;
 double pib1, super1;
 int pontos1, escolhaAtributo, escolhaAtributo2;
 float area1, dens1, pibpc1;

 // Carta 2
 char estado2, codigo2[5], nome2[40];
 unsigned long int pop2;
 double pib2, super2;
 int pontos2;
 float area2, dens2, pibpc2;

 //soma de atributos
 double carta1SomaAtributo1, carta1SomaAtributo2, somaAtributos1;
 double carta2SomaAtributo1, carta2SomaAtributo2, somaAtributos2;
 int vencedor;

 // Entrada da Carta 1
 printf("Carta 1:\n");
 printf("Estado: ");
 scanf(" %c", &estado1);
 printf("Código: ");
 scanf("%s", codigo1);
 printf("Nome: ");
 scanf(" %[^\n]", nome1);
 printf("População: ");
 scanf("%lu", &pop1);
 printf("Área: ");
 scanf("%f", &area1);
 printf("PIB: ");
 scanf("%lf", &pib1);
 printf("Pontos turísticos: ");
 scanf("%d", &pontos1);

 // Cálculos da Carta 1
 dens1 = pop1 / area1;
 pibpc1 = pib1 / pop1;
 super1 = pop1 + area1 + pib1 + pontos1 + dens1 + pibpc1;

 // Entrada da Carta 2
 printf("\nCarta 2:\n");
 printf("Estado: ");
 scanf(" %c", &estado2);
 printf("Código: ");
 scanf("%s", codigo2);
 printf("Nome: ");
 scanf(" %[^\n]", nome2);
 printf("População: ");
 scanf("%lu", &pop2);
 printf("Área: ");
 scanf("%f", &area2);
 printf("PIB: ");
 scanf("%lf", &pib2);
 printf("Pontos turísticos: ");
 scanf("%d", &pontos2);

 // Cálculos da Carta 2
 dens2 = pop2 / area2;
 pibpc2 = pib2 / pop2;
 super2 = pop2 + area2 + pib2 + pontos2 + dens2 + pibpc2;
   
   
   //Exibição dos dados

 // Exibir Carta 1
 printf("\nCarta 1:\n");
 printf("Estado: %c\n", estado1);
 printf("Código: %s\n", codigo1);
 printf("Nome da cidade: %s\n", nome1);
 printf("População: %lu", pop1);
(pop1 > pop2) ? printf(" - Venceu!\n") :
(pop1 < pop2) ? printf(" - Perdeu!\n") :
                 printf(" - Empatou!\n");
 printf("Área: %.2f km²", area1);
(area1 > area2) ? printf(" - Venceu!\n") :
(area1 < area2) ? printf(" - Perdeu!\n") :
                  printf(" - Empatou!\n"); 
 printf("PIB: R$ %.2f", pib1);
(pib1 > pib2) ? printf(" - Venceu!\n") :
(pib1 < pib2) ? printf(" - Perdeu!\n") :
                   printf(" - Empatou!\n"); 
 printf("Pontos turísticos: %d", pontos1);
(pontos1 > pontos2) ? printf(" - Venceu!\n") :
(pontos1 < pontos2) ? printf(" - Perdeu!\n") :
                   printf(" - Empatou!\n"); 
 printf("Densidade populacional: %.2f hab/km²", dens1);
(dens1 > dens2) ? printf(" - Perdeu!\n") :
(dens1 < dens2) ? printf(" - Venceu!\n") :
                 printf(" - Empatou!\n");
 printf("PIB per capita: R$ %.2f", pibpc1);
(pibpc1 > pibpc2) ? printf(" - Venceu!\n") :
(pibpc1 < pibpc2) ? printf(" - Perdeu!\n") :
                   printf(" - Empatou!\n"); 
 printf("Super Poder: %.2f", super1);
(super1 > super2) ? printf(" - Venceu!\n") :
(super1 < super2) ? printf(" - Perdeu!\n") :
                   printf(" - Empatou!\n"); 

 // Exibir Carta 2
 printf("\nCarta 2:\n");
 printf("Estado: %c\n", estado2);
 printf("Código: %s\n", codigo2);
 printf("Nome da cidade: %s\n", nome2);
 printf("População: %lu", pop2);
(pop1 > pop2) ? printf(" - Perdeu!\n") :
(pop1 < pop2) ? printf(" - Venceu!\n") :
                 printf(" - Empatou!\n");

 printf("Área: %.2f km²", area2);
(area1 > area2) ? printf(" - Perdeu!\n") :
(area1 < area2) ? printf(" - Venceu!\n") :
                 printf(" - Empatou!\n");

 printf("PIB: R$ %.2f", pib2);
(pib1 > pib2) ? printf(" - Perdeu!\n") :
(pib1 < pib2) ? printf(" - Venceu!\n") :
                 printf(" - Empatou!\n");

 printf("Pontos turísticos: %d", pontos2);
(pontos1 > pontos2) ? printf(" - Perdeu!\n") :
(pontos1 < pontos2) ? printf(" - Venceu!\n") :
                 printf(" - Empatou!\n");

 printf("Densidade populacional: %.2f hab/km²", dens2);
 (dens1 > dens2) ? printf(" - Venceu!\n") :
 (dens1 < dens2) ? printf(" - Perdeu!\n") :
                  printf(" - Empatou!\n");
 printf("PIB per capita: R$ %.2f", pibpc2);
(pibpc1 > pibpc2) ? printf(" - Perdeu!\n") :
(pibpc1 < pibpc2) ? printf(" - Venceu!\n") :
                 printf(" - Empatou!\n");
 
 printf("Super Poder: %.2f", super2);
(super1 > super2) ? printf(" - Perdeu!\n") :
(super1 < super2) ? printf(" - Venceu!\n") :
                 printf(" - Empatou!\n");

 /*Menu interativo para escolher quais atributos serão comparados nas cartas*/

 printf("\nEscolha dois atributos abaixo para serem comparados: \n");
 printf("Opção 1: População.\n");
 printf("Opção 2: Área.\n");
 printf("Opção 3: PIB.\n");
 printf("Opção 4: Pontos turisticos.\n");
 printf("Opção 5: Densidade populacional.\n");
 printf("Opção 6: PIB per capita.\n");
 printf("Opção 7: Super Poder.\n");
 printf("\nDigite o primeiro atributo de sua escolha: ");
 scanf("%d", &escolhaAtributo);
 printf("Digite o segundo atributo de sua escolha: ");
 scanf("%d", &escolhaAtributo2);

if (escolhaAtributo == escolhaAtributo2) { 
    printf("Atributos iguais. Tente novamente.\n");
    return 1;

}

 switch (escolhaAtributo){

    case 1:
    printf("\nAtributo 1: População. \n");
    printf("A População da carta 1 é: %lu \n", pop1);
    printf("A População da carta 2 é: %lu \n", pop2);
    carta1SomaAtributo1 = pop1;
    carta2SomaAtributo1 = pop2;
      
    break;

    case 2:
    printf("\nAtributo 1: Área. \n");
    printf("A Área da carta 1 é: %.2f km²\n", area1);
    printf("A Área da carta 2 é: %.2f km²\n", area2);
    carta1SomaAtributo1 = area1;
    carta2SomaAtributo1 = area2;
            
    break;

    case 3:
    printf("\nAtributo 1: PIB.\n");
    printf("O PIB da carta 1 é: R$ %.2lf\n", pib1);
    printf("O PIB da carta 2 é: R$ %.2lf\n", pib2);
    carta1SomaAtributo1 = pib1;
    carta2SomaAtributo1 = pib2;
    
    break;

    case 4:
    printf("\nAtributo 1: Pontos turisticos\n");
    printf("A quantidade de Ponstos turisticos da carta 1 é: %d\n", pontos1);
    printf("A quantidade de Ponstos turisticos da carta 2 é: %d\n", pontos2);
    carta1SomaAtributo1 = pontos1;
    carta2SomaAtributo1 = pontos2;
 
    break;

    case 5:
    printf("\nAtributo 1: Densidade populacional\n");
    printf("A Densidade populacional da carta 1 é: %.2f hab/km²\n", dens1);
    printf("A Densidade populacional da carta 2 é: %.2f hab/km²\n", dens2);
    carta1SomaAtributo1 = dens1;
    carta2SomaAtributo1 = dens2;

    break;

    case 6:
    printf("\nAtributo 1: PIB per capta\n");
    printf("O PIB per capita da carta 1 é: R$ %.2f\n", pibpc1);
    printf("O PIB per capita da carta 2 é: R$ %.2f\n", pibpc2);
    carta1SomaAtributo1 = pibpc1;
    carta2SomaAtributo1 = pibpc2;

   
    break;

    case 7:
    printf("\nAtributo 1: Super Poder\n");
    printf("O Super Poder da carta 1 é: %.2f\n", super1);
    printf("O Super Poder da carta 2 é: %.2f\n", super2);
    carta1SomaAtributo1 = super1;
    carta2SomaAtributo1 = super2;
    
    break;

    default:
    printf("Atributo 1 opção inválida!\n");
    return 1;

    break;
}


switch (escolhaAtributo2){

    case 1:
    printf("\nAtributo 2: População. \n");
    printf("A População da carta 1 é: %lu \n", pop1);
    printf("A População da carta 2 é: %lu \n", pop2);
    carta1SomaAtributo2 = pop1;
    carta2SomaAtributo2 = pop2;
      
    break;

    case 2:
    printf("\nAtributo 2: Área. \n");
    printf("A Área da carta 1 é: %.2f km²\n", area1);
    printf("A Área da carta 2 é: %.2f km²\n", area2);
    carta1SomaAtributo2 = area1;
    carta2SomaAtributo2 = area2;

                
    break;

    case 3:
    printf("\nAtributo 2: PIB.\n");
    printf("O PIB da carta 1 é: R$ %.2lf\n", pib1);
    printf("O PIB da carta 2 é: R$ %.2lf\n", pib2);
    carta1SomaAtributo2 = pib1;
    carta2SomaAtributo2 = pib2;

    
    break;

    case 4:
    printf("\nAtributo 2: Pontos turisticos\n");
    printf("A quantidade de Ponstos turisticos da carta 1 é: %d\n", pontos1);
    printf("A quantidade de Ponstos turisticos da carta 2 é: %d\n", pontos2);
    carta1SomaAtributo2 = pontos1;
    carta2SomaAtributo2 = pontos2;
   
 
    break;

    case 5:
    printf("\nAtributo 2: Densidade populacional\n");
    printf("A Densidade populacional da carta 1 é: %.2f hab/km²\n", dens1);
    printf("A Densidade populacional da carta 2 é: %.2f hab/km²\n", dens2);
    carta1SomaAtributo2 = dens1;
    carta2SomaAtributo2 = dens2;

    break;

    case 6:
    printf("\nAtributo 2: PIB per capta\n");
    printf("O PIB per capita da carta 1 é: R$ %.2f\n", pibpc1);
    printf("O PIB per capita da carta 2 é: R$ %.2f\n", pibpc2);
    carta1SomaAtributo2 = pibpc1;
    carta2SomaAtributo2 = pibpc2;

   
    break;

    case 7:
    printf("\nAtributo 2: Super Poder\n");
    printf("O Super Poder da carta 1 é: %.2f\n", super1);
    printf("O Super Poder da carta 2 é: %.2f\n", super2);
    carta1SomaAtributo2 = super1;
    carta2SomaAtributo2 = super2;
    
    break;

    default:
    printf("Atributo 2 opção inválida!\n");

    return 1;

    break;
}


somaAtributos1 = (carta1SomaAtributo1 + carta1SomaAtributo2);
somaAtributos2 = (carta2SomaAtributo1 + carta2SomaAtributo2);

printf("\nA soma dos atributos da carta 1 é: %.2lf", somaAtributos1);
printf("\nA soma dos atributos da carta 2 é: %.2lf\n", somaAtributos2);   

if (somaAtributos1 > somaAtributos2){
    printf("\nCarta 1 venceu!\n");

}else if(somaAtributos1 < somaAtributos2){
    printf("\nCarta 2 venceu!\n");
}else{
    printf("\nDeu empate!\n");
}




    return 0;
}