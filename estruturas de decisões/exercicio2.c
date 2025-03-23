#include<stdio.h>

int main(){


int idade;

printf("Digite a sua Idade\n");
scanf(" %d",idade);

//Criança < 12
//Adolescente <= x < 18
//Adulto <= x < 60
//Idoso > 60

if(idade < 12)
{printf("Você é uma Criança\n");
}else if(idade >= 12 && idade < 18)
{printf("Você é um Adolescente\n");
}else if(idade >= 18 && idade < 60){
    printf("Você é um Adulto\n");
}else{
    printf("Você é um Idoso\n");
}



}