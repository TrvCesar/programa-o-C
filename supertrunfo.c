#include<stdio.h>

// atributos das cartas
int main(){
char estado;
char codigo[20];
char nome[20];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int ponto1, ponto2;

// entrada da carta 1
printf("Super Trunfo\n");
printf("Cadastro Carta 1\n");
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

// calculo da densidade e do per capita
float densidade1 = (float)  populacao1 / area1;
float percapita1 = (float) pib1 / populacao1;
float densidade2 = (float)  populacao2 / area2;
float percapita2 = (float) pib2 / populacao2;

//Saida de dados da carta 1
printf("Carta 1\n");
printf("Estado: %c\n", estado);
printf("Código: %s\n",codigo);
printf("Cidade: %s\n",nome);
printf("População: %d\n",populacao2);
printf("Area: %f\n",area2);
printf("PIB: %f\n",pib2);
printf("Pontos Turisticos: %d\n",ponto2);
printf("Densidade Populacional: %.2f\n",densidade2);
printf("PIB per capita: %.2f\n",percapita2);

// entrada de dados carta 2
printf("Cadastro Carta 2\n");
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

// Saida da carta 2
printf("Carta 2\n");
printf("Estado: %c\n", estado);
printf("Código: %s\n",codigo);
printf("Cidade: %s\n",nome);
printf("População: %d\n",populacao2);
printf("Area: %f\n",area2);
printf("PIB: %f\n",pib2);
printf("Pontos Turisticos: %d\n",ponto2);
printf("Densidade Populacional: %.2f\n",densidade2);
printf("PIB per capita: %.2f\n",percapita2);

//Comparação e escolha da carta vencedora
if(populacao1 > populacao2){
    printf("Carta 1 venceu, População : %d\n",populacao1);
}else{
    printf("Carta 2 venceu, População: %d\n",populacao2);
}




return 0;






}
