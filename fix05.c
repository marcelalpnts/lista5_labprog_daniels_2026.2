/*Escreva um programa que encontre o tamanho de uma string fornecida. Utilize ponteiros.*/
#include <stdio.h>
#include <string.h>

#define TAM 30

int main(){
    char str1[TAM];

    puts("Escreva a string:");
    fgets(str1, TAM, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    char *s = str1;
    int contador = 0;

    while(*s != '\0'){
        s++;
        contador++;
    }

    printf("O tamanho da string é %d\n", contador);

    return 0;
}