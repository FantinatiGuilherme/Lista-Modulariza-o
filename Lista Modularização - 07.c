/******************************************************************************

Guilherme de Oliveira Fantinati - 8136341 - 05/04/2023

Escreva uma função que retorne o cubo do valor passado como argumento.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
float leia();
float cubo(float a);

int main()
{
    float num;
    
    printf("Digite um numero: ");
    num = leia();
    
    cubo(num);

    return 0;
}

float leia(){
    float a;
    
    scanf("%f", &a);
    
    return a;
}

float cubo(float a){
    
    printf("O cubo do valor é : %.2f", pow(a,3));
    }

