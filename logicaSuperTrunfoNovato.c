#include <stdio.h>

int main() {


    // Carta 1
  char estado1, codigo1[5], nome1[40];
  unsigned long int pop1;
  double pib1, super1;
  int pontos1;
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
 
  /* Comparação de apenas duas cartas utilizando if, if else e else*/
 
  printf("\nComparação de cartas (Atributo: Densidade Polulacional)\n");
  printf("Carta 1 - %s : %.2f hab/km².\n", nome1, dens1);
  printf("Carta 2 - %s : %.2f hab/km².\n", nome2, dens2);
  //compara densidade populacional
  if (dens1 < dens2) {
 
    printf("Resultado: Carta 1 vence!\n");
 
 } else if (dens1 > dens2) {
 
    printf("Resultado: Carta 2 vence!\n");
 
 } else {
 
    printf("Resultado: Empate.\n\n");
 }
 

    return 0;
}
