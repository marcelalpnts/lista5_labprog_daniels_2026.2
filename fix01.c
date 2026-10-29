/*Escreva um programa que adicione dois numeros usando ponteiros. Alem do valor da soma, imprima tambem o endereço de memoria onde o valor resultante dessa soma esta armazenado.*/

#include <stdio.h>

void soma(int *a, int *b, int *res){
    *res = *a + *b;
}

int main(){
    int x,y;
    int resultado;

    puts("Insira o valor de x: ");
    scanf("%d", &x);
    puts("Insira o valor de y: ");
    scanf("%d", &y);

    soma(&x, &y, &resultado);

    printf("o valor da soma é %d\nE o endereço da soma é %p\n", resultado, (void *)&resultado);

    return 0;
}

