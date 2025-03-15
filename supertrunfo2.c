#include<stdio.h>

int main(){
char estado;
char codigo[20];
char nome[20];
long int populacao1,populacao2;
float area1,area2;
float pib1,pib2;
int ponto1, ponto2;


printf("Carta Super Trunfo\n");
printf("Carta 1 \n");
printf("Escreva o Estado: \n");
scanf(" %c",&estado);
printf("Escreva o Código: \n");
scanf(" %s",&codigo);
printf("Escreva o nome da Cidade: \n");
scanf(" %s",&nome);
printf("Digite a População: \n");
scanf(" %d",&populacao1);
printf("Digite a Àrea: \n");
scanf(" %f",&area1);
printf("Digite o PIB: \n");
scanf(" %f",&pib1);
printf("Quantos pontos turisticos: \n");
scanf(" %d",&ponto1);

float densidade1 = (float)  populacao1 / area1;
float densidade2 = (float)  populacao2 / area2;
float percapita1 = (float) pib1 / populacao1;
float percapita2 = (float) pib2 / populacao2;

float SuperPoder1 = (float) populacao1 + pib1 + percapita1 + 1/densidade1 + ponto1;
float SuperPoder2 = (float) populacao2 + pib2 + percapita2 + 1/densidade2 + ponto2;

printf("Carta 1\n");
printf("Estado: %c\n", estado);
printf("Código: %s\n",codigo);
printf("Cidade: %s\n",nome);
printf("População: %d\n",populacao1);
printf("Area: %.2f\n",area1);
printf("PIB: %.2f\n",pib1);
printf("Pontos Turisticos: %d\n",ponto1);
printf("Densidade Populacional: %.2f\n",densidade1);
printf("Pib per capita: %.2f\n",percapita1);
printf("Super Poder : %2f\n",SuperPoder1);

printf("Carta 2\n");
printf("Escreva o Estado: \n");
scanf(" %c",&estado);
printf("Escreva o Código: \n");
scanf(" %s",&codigo);
printf("Escreva o nome da Cidade: \n");
scanf(" %s",&nome);
printf("Digite a População: \n");
scanf(" %d",&populacao2);
printf("Digite a Àrea: \n");
scanf(" %f",&area2);
printf("Digite o PIB: \n");
scanf(" %f",&pib2);
printf("Quantos pontos turisticos: \n");
scanf(" %d",&ponto2);


printf("Carta 2\n");
printf("Estado: %c\n", estado);
printf("Código: %s\n",codigo);
printf("Cidade: %s\n",nome);
printf("População: %d\n",populacao2);
printf("Area: %.2f\n",area2);
printf("PIB: %.2f\n",pib2);
printf("Pontos Turisticos: %d\n",ponto2);
printf("Densidade Populacional: %.2f\n",densidade2);
printf("Pib per capita: %.2f\n",percapita2);
printf("Super Poder : %2f\n",SuperPoder2);

printf("populacao(carta 1) > populacao(carta 2) : %d\n", populacao1 > populacao2 );
printf("area(carta 1) > area(carta 2) : %f\n", area1 > area2 );
printf("pib(carta 1) > pib(carta 2) : %f\n", pib1 > pib2 );
printf("pontos turisticos(carta 1) > pontos turisticos(carta 2) : %d\n", ponto1 > ponto2 );
printf("densidade populacional(carta 1) > densidade populacional(carta 2) : %f\n", densidade1 > densidade2 );
printf("pib per capita(carta 1) > pib per capita(carta 2) : %f\n", percapita1 > percapita2 );
printf("Super poder(carta 1) > Super Poder(carta 2) : %f", SuperPoder1 > SuperPoder2 );









return 0;






}
