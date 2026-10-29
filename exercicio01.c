#include <stdio.h>

void quadrado(int n, int*res){
    *res = n * n;
}
    
int main(){

    int n = 4;
    int resultado;

    quadrado(n, &resultado);

    printf("%d\n", resultado);

    return 0;
}