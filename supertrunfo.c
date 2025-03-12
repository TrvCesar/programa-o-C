#include<stdio.h>

int main(){
char estado;
char codigo[20];
char nome[20];
long int populacao;
float area;
float pib;
int ponto;

printf("Super Trunfo\n");
printf("Cadastro Carta 1\n");
printf("Escreva o Estado: \n");
scanf(" %c",&estado);
printf("Escreva o Código: \n");
scanf(" %s",&codigo);
printf("Escreva o nome da Cidade: \n");
scanf(" %s",&nome);
printf("Digite a População: \n");
scanf(" %ld",&populacao);
printf("Digite a Àrea: \n");
scanf(" %f",&area);
printf("Digite o PIB: \n");
scanf(" %f",&pib);
printf("Quantos pontos turisticos: \n");
scanf(" %d",&ponto);

float densidade = (float)  populacao / area;
float percapita = (float) pib / populacao;
float superpoder = (float) area + pib + percapita + densidade/1 + ponto;

printf("Carta 1\n");
printf("Estado: %c\n", estado);
printf("Código: %s\n",codigo);
printf("Cidade: %s\n",nome);
printf("População: %ld\n",populacao);
printf("Area: %f\n",area);
printf("PIB: %f\n",pib);
printf("Pontos Turisticos: %d\n",ponto);
printf("Densidade Populacional: %.2f\n",densidade);
printf("PIB per capita: %.2f\n",percapita);
printf("Super Poder: %.2f\n",superpoder);

printf("Cadastro Carta 2\n");
printf("Escreva o Estado: \n");
scanf(" %c",&estado);
printf("Escreva o Código: \n");
scanf(" %s",&codigo);
printf("Escreva o nome da Cidade: \n");
scanf(" %s",&nome);
printf("Digite a População: \n");
scanf(" %ld",&populacao);
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
printf("População: %ld\n",populacao);
printf("Area: %f\n",area);
printf("PIB: %f\n",pib);
printf("Pontos Turisticos: %d\n",ponto);
printf("Densidade Populacional: %.2f\n",densidade);
printf("PIB per capita: %.2f\n",percapita);
printf("Super Poder: %.2f\n",superpoder);






return 0;






}
