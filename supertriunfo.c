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
scanf(" %s" ,&estado);
printf("Escreva o Código: \n");
scanf(" %s" ,&codigo);
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

printf("Super Trunfo !!\n");

printf("Estado: %s \n",estado);


return 0;




}