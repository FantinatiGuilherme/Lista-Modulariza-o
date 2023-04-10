/******************************************************************************

Guilherme de Oliveira Fantinati - 8136341 - 05/04/2023

Escreva um programa que implemente uma função que retorne a diferença entre dois números inteiros digitados pelo usuário. 

*******************************************************************************/
#include <stdio.h>

int leia();
void subtracao(int a , int b);

int main()
{
    int num1, num2;
    num1 = leia();
    num2 = leia()
    ;
    subtracao(num1,num2); 

    return 0;
}

int leia(){
    int a;
    printf("Digite o número: ");
    scanf("%d",&a );
    
    return a;
}

void subtracao(int a , int b){
    
    int subtracao;
    
    subtracao = a-b;
    
    if(subtracao < 0){
        subtracao *= -1;
    }
    
    printf("Diferença entre os numeros : %d", subtracao);
}


