#include<stdio.h>

int main(){
char estado;
char codigo[20];
char nome[20];
int populacao;
float area;
float pib;
int ponto;

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

printf("Estado: %c\n", estado);
printf("Código: %s\n",codigo);
printf("Cidade: %s\n",nome);
printf("População: %d\n",populacao);
printf("Area: %f\n",area);
printf("PIB: %f\n",pib);
printf("Pontos Turisticos: %d",ponto);












return 0;






}
