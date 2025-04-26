#include <stdio.h>

int main() {


   // Carta 1
 char estado1, codigo1[5], nome1[40];
 unsigned long int pop1;
 double pib1, super1;
 int pontos1, escolhaAtributo;
 float area1, dens1, pibpc1;

 // Carta 2
 char estado2, codigo2[5], nome2[40];
 unsigned long int pop2;
 double pib2, super2;
 int pontos2;
 float area2, dens2, pibpc2;

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
 printf("População: %lu\n", pop1);
 printf("Área: %.2f km²\n", area1);
 printf("PIB: R$ %.2f\n", pib1);
 printf("Pontos turísticos: %d\n", pontos1);
 printf("Densidade populacional: %.2f hab/km²\n", dens1);
 printf("PIB per capita: R$ %.2f\n", pibpc1);
 printf("Super Poder: %.2f\n", super1);

 // Exibir Carta 2
 printf("\nCarta 2:\n");
 printf("Estado: %c\n", estado2);
 printf("Código: %s\n", codigo2);
 printf("Nome da cidade: %s\n", nome2);
 printf("População: %lu\n", pop2);
 printf("Área: %.2f km²\n", area2);
 printf("PIB: R$ %.2f\n", pib2);
 printf("Pontos turísticos: %d\n", pontos2);
 printf("Densidade populacional: %.2f hab/km²\n", dens2);
 printf("PIB per capita: R$ %.2f\n", pibpc2);
 printf("Super Poder: %.2f\n", super2);

 /*Menu interativo para escolher qual atributo será comparado nas cartas*/

 printf("\nEscolha um atributo: \n"); 
 printf("Opção 1: População.\n");
 printf("Opção 2: Área.\n");
 printf("Opção 3: PIB.\n");
 printf("Opção 4: Pontos turisticos.\n");
 printf("Opção 5: Densidade populacional.\n");
 printf("Opção 6: PIB per capita.\n");
 printf("Opção 7: Super Poder.\n");
 printf("Digite aqui sua escolha: ");
 scanf("%d", &escolhaAtributo);



 switch (escolhaAtributo){

    case 1:
    printf("\nO nome do carta 1 é: %s\n", nome1);
    printf("O nome do carta 2 é: %s\n", nome2);
    printf("\nVoce escolheu o atributo: População!\n");
    printf("A População da carta 1 é: %lu \n", pop1);
    printf("A População da carta 2 é: %lu \n", pop2);

    if (pop1 > pop2){
        printf("A carta 1 venceu!\n");
        
    }else if(pop1 < pop2){
        printf("A carta 2 venceu!\n");

    }else{
        printf("Deu empate!\n");

    }
    break;

    case 2:
    printf("\nO nome do carta 1 é: %s\n", nome1);
    printf("O nome do carta 2 é: %s\n", nome2);
    printf("\nVoce escolheu o atributo: Área!\n");
    printf("A Área da carta 1 é: %.2f\n", area1);
    printf("A Área da carta 2 é: %.2f\n", area2);
    
    if (area1 > area2){
        printf("A carta 1 venceu!\n");
        
    }else if(area1 < area2){
        printf("A carta 2 venceu!\n");

    }else{
        printf("Deu empate!\n");
        
    }
    break;

    case 3:
    printf("\nO nome do carta 1 é: %s\n", nome1);
    printf("O nome do carta 2 é: %s\n", nome2);
    printf("\nVoce escolheu o atributo: PIB!\n");
    printf("O PIB da carta 1 é: %.2lf\n", pib1);
    printf("O PIB da carta 2 é: %.2lf\n", pib2);

    if (pib1 > pib2){
        printf("A carta 1 venceu!\n");
        
    }else if(pib1 < pib2){
        printf("A carta 2 venceu!\n");

    }else{
        printf("Deu empate!\n");
        
    }
    break;

    case 4:
    printf("\nO nome do carta 1 é: %s\n", nome1);
    printf("O nome do carta 2 é: %s\n", nome2);
    printf("\nVoce escolheu o atributo: Pontos turisticos!\n");
    printf("A quantidade de Ponstos turisticos da carta 1 é: %d\n", pontos1);
    printf("A quantidade de Ponstos turisticos da carta 2 é: %d\n", pontos2);
    if (pontos1 > pontos2){
        printf("A carta 1 venceu!\n");
        
    }else if(pontos1 < pontos2){
        printf("A carta 2 venceu!\n");

    }else{
        printf("Deu empate!\n");
        
    }
    break;

    case 5:
    printf("\nO nome do carta 1 é: %s\n", nome1);
    printf("O nome do carta 2 é: %s\n", nome2);
    printf("\nVoce escolheu o atributo: Densidade Populacional!\n");
    printf("A Densidade populacional da carta 1 é: %.2f hab/km²\n", dens1);
    printf("A Densidade populacional da carta 2 é: %.2f hab/km²\n", dens2);
    if (dens1 > dens2){
        printf("A carta 2 venceu!\n");
        
    }else if(dens1 < dens2){
        printf("A carta 1 venceu!\n");

    }else{
        printf("Deu empate!\n");
        
    }
    break;

    case 6:
    printf("\nO nome do carta 1 é: %s\n", nome1);
    printf("O nome do carta 2 é: %s\n", nome2);
    printf("\nVoce escolheu o atributo: PIB per capita!\n");
    printf("O PIB per capita da carta 1 é: %.2f\n", pibpc1);
    printf("O PIB per capita da carta 2 é: %.2f\n", pibpc2);

    if (pibpc1 > pibpc2){
        printf("A carta 1 venceu!\n");
        
    }else if(pibpc1 < pibpc2){
        printf("A carta 2 venceu!\n");

    }else{
        printf("Deu empate!\n");
        
    }
    break;

    case 7:
    printf("\nO nome do carta 1 é: %s\n", nome1);
    printf("O nome do carta 2 é: %s\n", nome2);
    printf("\nVoce escolheu o atributo: Super Poder!\n");
    printf("O Super Poder da carta 1 é: %.2f\n", super1);
    printf("O Super Poder da carta 2 é: %.2f\n", super2);
    if (super1 > super2){
        printf("A carta 1 venceu!\n");
        
    }else if(super1 < super2){
        printf("A carta 2 venceu!\n");

    }else{
        printf("Deu empate!\n");
        
    }
    break;

    default:
    printf("Opção inválida!\n");

    break;


 }

    return 0;
}