/*Escreva um programa que busque um caractere fornecido em uma string utilizando ponteiros.*/

#include <stdio.h>
#include <string.h>

#define TAM 30

int main (){
    char string1[TAM];
    char caractere;

    puts("Escreva a string:");
    fgets(string1,TAM,stdin);
    string1[strcspn(string1, "\n")] = '\0';

    puts("Agora escreva o caractere a ser procurado na string");
    scanf(" %c", &caractere);

    char *ptrS = string1;
    int presente = 0;

    while (*ptrS != '\0' && !presente) {

        if (*ptrS == caractere){
            presente = 1;
        }
        ptrS++;
    }

    if (presente == 1){
        printf("O caractere '%c' está presente na string '%s'\n", caractere, string1);
    } else {
        printf("O caractere '%c' não está presente na string '%s'\n", caractere, string1);
    }

    return 0;
}