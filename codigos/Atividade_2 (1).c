//aluno: Marcus Vinicius Simões Bordignon

//incluir biblioteca(s)
#include <stdio.h>

void main () {
    //Criar, pedir e ler as variáveis
    int n1, n2, i;
    printf("Insira os números inteiros e positivos.\n");
    scanf("%d %d", &n1, &n2);

    //Exibir n1, n2 e o "label" dos divisores em comum:
    printf("n1:         %d\n", n1);
    printf("n2:         %d\n", n2);
    printf("Divisores em comum de n1 e n2: ");
    
    //Começar codigo matemático de estrutura de repetição de divisores em comum a n1 e n2
    for (i=1;(i<=n1) && (i<=n2);i++) {
      
        //Quando não houver resto, quer dizer que é divisor, faz ambas as proposições serem verdade para serem divisores em comum
        if ((n1%i==0) && (n2%i==0)) {
          
            //Exibir realmente os divisores em ordem crescente
            printf("%d ", i);
        }
    }
}
