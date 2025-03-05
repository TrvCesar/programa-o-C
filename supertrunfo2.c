#include<stdio.h>

int main(){
char estado;
char codigo[20];
char nome[20];
int populacao;
float area;
float pib;
int ponto;


printf("Carta Super Trunfo\n");
printf("Carta 1 \n");
printf("Escreva o Estado: \n");
scanf(" %c",&estado);
printf("Escreva o Código: \n");
scanf(" %s",&codigo);
printf("Escreva o nome da Cidade: \n");
scanf(" %s",&nome);
printf("Digite a População: \n");
scanf(" %d",&populacao);
printf("Digite a Àrea: \n");
scanf(" %f",&area);
printf("Digite o PIB: \n");
scanf(" %f",&pib);
printf("Quantos pontos turisticos: \n");
scanf(" %d",&ponto);

float densidade = (float)  populacao / area;
float percapita = (float) pib / populacao;

printf("Carta 1\n");
printf("Estado: %c\n", estado);
printf("Código: %s\n",codigo);
printf("Cidade: %s\n",nome);
printf("População: %d\n",populacao);
printf("Area: %.2f\n",area);
printf("PIB: %.2f\n",pib);
printf("Pontos Turisticos: %d\n",ponto);
printf("Densidade Populacional: %.2f\n",densidade);
printf("Pib per capita: %.2f\n",percapita);

printf("Carta 2\n");
printf("Escreva o Estado: \n");
scanf(" %c",&estado);
printf("Escreva o Código: \n");
scanf(" %s",&codigo);
printf("Escreva o nome da Cidade: \n");
scanf(" %s",&nome);
printf("Digite a População: \n");
scanf(" %d",&populacao);
printf("Digite a Àrea: \n");
scanf(" %f",&area);
printf("Digite o PIB: \n");
scanf(" %f",&pib);
printf("Quantos pontos turisticos: \n");
scanf(" %d",&ponto);


printf("Carta 2\n");
printf("Estado: %c\n", estado);
printf("Código: %s\n",codigo);
printf("Cidade: %s\n",nome);
printf("População: %d\n",populacao);
printf("Area: %.2f\n",area);
printf("PIB: %.2f\n",pib);
printf("Pontos Turisticos: %d\n",ponto);
printf("Densidade Populacional: %.2f\n",densidade);
printf("Pib per capita: %.2f\n",percapita);











return 0;






}
