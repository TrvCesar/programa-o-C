#include<stdio.h>

int main(){
char estado;
char codigo[20];
char nome[20];
int populacao1,populacao2;
float area1,area2;
float pib1,pib2;
int ponto1, ponto2;

//Entrada dados Usuario
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

// Calculo densidade e per capita
float densidade1 = (float)  populacao1 / area1;
float densidade2 = (float)  populacao2 / area2;
float percapita1 = (float) pib1 / populacao1;
float percapita2 = (float) pib2 / populacao2;

//Saída carta 1
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

//Entrada carta 2
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

//Saida carta 2
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


// comparação e definição da carta vencedora
if(populacao1 > populacao2){
    printf("Carta 1 venceu, População : %d\n",populacao1);
}else{
    printf("Carta 2 venceu, População: %d\n",populacao2);
}






return 0;






}
