/*Escreva um programa que troque o valor de dois n ́umeros utilizando ponteiros.*/

#include <stdio.h>

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;

}

int main (){
    
    int x, y;

    puts("Escreva o valor de x:");
    scanf("%d", &x);
    puts("Escreva o valor de y:");
    scanf("%d", &y);

    printf("Valores antes da troca: x = %d e y = %d\n", x, y);

    // chamando a função troca para realizar a troca de valores

    troca(&x, &y);

    // imprimindo os valores trocados

    printf("Agora x = %d e y = %d\n", x, y);


    return 0;
}