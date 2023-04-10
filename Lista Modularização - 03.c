/******************************************************************************

Guilherme de Oliveira Fantinati - 8136341 - 05/04/2023

Escreva um programa que calcule a área de um círculo a partir de uma função especialmente desenhada para isso; essa função recebe o valor do raio e retorna a área do círculo.  

*******************************************************************************/
#include <stdio.h>
void areaCirculo (float a);

int main()
{
    float raio;
    
    printf("Digite o valor do raio:");
    scanf("%f", &raio);
    
    areaCirculo(raio);
    
    return 0;
}

void areaCirculo (float a){
    
    float area;
    const float PI = 3.1415;
    
    area = PI * (a * a);
    
    printf("A area do circulo é %f", area);
    
}

