//incluindo biblioteca(s)
#include <stdio.h>

void main () {
    //criando variáveis
    int n, i, linha1, linha2, j;
    
    //lendo o número
    printf("Por favor insira um número inteiro superior a 1: ");
    scanf("%d", &n);
    
    //repetição até usuario inserior número superior a 1
    while (n<=1) {
        printf("Número inválido, insira número inteiro superior a 1.\n");
        scanf("%d", &n);
    }
    
    //fazendo primeira metade da pirâmide com repetição dentro de repetição
    for (linha1=1;linha1<=n;linha1++) {
        for (i=1;i<=linha1;i++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    //fazendo segunda parte da pirâmide com 
}