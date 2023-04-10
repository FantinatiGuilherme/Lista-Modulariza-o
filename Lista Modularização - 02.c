/******************************************************************************

Guilherme de Oliveira Fantinati - 8136341 - 05/04/2023

 Escreva uma função que retorne a divisão entre dois números inteiros. Atenção para a questão da divisão por zero! A divisão não pode ocorrer se o divisor for zero.  


*******************************************************************************/
#include <stdio.h>

int leia();
void divisao(float a , float b);

int main()
{
    int num1, num2;
    
    printf("Digite o valor do dividendo: ");
    num1 = leia();
    
    printf("Digite o valor do divisor: ");
    num2 = leia();
        while(num2 == 0){
        printf("O numero do divisor não pode ser igual a 0, digite outro numero:");
        num2=leia();
        }
    divisao(num1,num2); 

    return 0;
}

int leia(){
    int a;
    scanf("%d",&a );
    
    return a;
}

void divisao(float a , float b){
    
    float divisao;
    
    divisao = a / b;
    
    
    printf("Resultado da divisão : %.2f ",divisao);
}


