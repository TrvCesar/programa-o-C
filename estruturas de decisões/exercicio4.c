#include<stdio.h>

int main(){

    int idade;
float renda;
int dependentes;

//A primeira condição é que o usuario tenha entre 18 e 65 anos.
// segunda condição é que a renda seja menor que 3000.
// terceira condição é se o numero de dependentes e maior que 2.

printf("Digite a sua Idade: \n");
scanf(" %d", &idade);
printf("Digite a sua Renda: \n");
scanf(" %f", &renda);
printf("Digite o numero de Dependentes: \n");
scanf(" %d", &dependentes);

if(idade >= 18 && idade <= 65){
    if(renda < 3000){
        if(dependentes > 2){
            printf("Você atende a todos os Critérios.\n");
        }else{
            printf("Você não atende ao criterio dependentes.\n");
        }

    }else{
        printf("Você não atende ao criterio renda.\n");
    }
}else{
    printf("Você não atende ao criterio idade.\n");
}


}