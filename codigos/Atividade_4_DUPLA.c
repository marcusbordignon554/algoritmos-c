/*FEITO PELA DUPLA MARCUS VINICIUS SIMÕES BORDIGNON E TIAGO LUIS DA SILVA PERRI
*/

//incluindo biblioteca(s)
#include <stdio.h>

//criando função main
void main() {

    //declarando variáveis
    int valor, original;
    int i, contador, digito;

    //lendo valor
    printf("Insira um número positivo: ");
    scanf("%d", &valor);

    //condição onde "valor" tem que ser inteiro e positivo
    while (valor<=0) {
        printf("\n Valor inválido! Por favor insira um número maior que 0: ");
        scanf("%d", &valor);
    }

    //salva o valor original, pois vamos decompor essa variavel futuramente
    original = valor;

    //comecamos um loop do 0 ao 9, para cada algarismo possivel
    for (i=0;i <= 9; i++) {

        //quando um dos loops do for for concluido, temos que "resetar" o valor dessas variáveis
        contador=0;
        valor = original;

        //dentro desse while, vamos decompor "valor"
        while(valor > 0) {

            //"digito" vai ser o resto da divisão de "valor" por 10, que é sempre o ultimo digito (note que sempre será um inteiro, logo é um int!)
            digito = valor % 10;

            //se "digito" for igual a "i", incrementa +1 a "contador"
            if (digito == i) {
                contador++;
            }

            //agora que esse ultimo digito foi analisado, precisamos retirar ele, e como a variável é um int, quando "valor = valor/10", o último digito é retirado
            valor = valor/10;
        }
        
        //só podemos imprimir valores onde a quantidade dos algarismos contados é maior que zero, ao invés de todos os algarismos, então colocamos isso numa condicional
        if (contador>0) {
            printf("%d - %d vez(es)\n", i, contador);
        }
    }
}
