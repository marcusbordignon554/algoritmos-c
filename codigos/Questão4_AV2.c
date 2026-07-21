//incluindo biblioteca(s)
#include <stdio.h>


//criando função com void, pois não tem como retornar um ponteiro diretamente
void divNum(int num, int vet[]){
    
    //começando contador
    int cont=0;
    
    //vendo os divisores de num, e atribuindo-os ao vetor por ordem crescente
    for (int i=1;i<=num;i++) {
        if (num%i == 0) {
            vet[cont]=i;
            cont++;
        }
    }
}

//iniciando main
void main() {
    //declarando variáveis
    int numero, cont=0;
    
    //lendo o número a ser analisado
    printf("Insira um número: ");
    scanf("%d", &numero);
    
    //fazendo o mesmo cálculo de achar o número de divisor para limitar o tamanho do vetor
    for (int i=1;i<=numero;i++) {
        if (numero%i == 0) {
            cont++;
        }
    }
    
    //criando o vetor em si
    int vetor_resultado[cont];
    
    //chamando a função com os divisores de numero sendo armazenados no vetor_resultado
    divNum(numero,vetor_resultado);
    
    //printando o vetor dos divisores de número
    printf("\nVetor dos divisores do número: [");
    
    //printando cada elemento do vetor
    for (int j=0;j<cont;j++) {
        printf(" %d", vetor_resultado[j]);
    }
    
    //fechando o parênteses bonitinho
    printf(" ]");
}
