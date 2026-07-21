/*FEITO PELA DUPLA MARCUS VINICIUS SIMÕES BORDIGNON E TIAGO LUIS DA SILVA PERRI
*/

//incluindo biblioteca(s)
#include <stdio.h>

//criando função main
void main() {

    //declarando variáveis
    int dia1,mes1,ano1;
    int dia2,mes2,ano2;

    //comecar os totais com 0 por causa do lixo de memória;
    int i, total_data_1=0, total_data_2=0;

    //lendo a primeira data
    printf("Insira a primeira data, respectivamente, em dia, mês e ano.\n");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    //lendo a segunda data
    printf("Insira a segunda data, respectivamente, em dia, mês e ano.\n");
    scanf("%d %d %d", &dia2, &mes2, &ano2);


    //calculando quantidade de dias do ano da primeira data (cuidado pra n ser <=)
    for (i=1;i < ano1;i++) {
        if (i%4==0) {
            total_data_1+=366;
        }
        else {
            total_data_1+=365;
        }
    }

    //calculando quantidade de dias dos meses da primeira data (cuidado pra n ser <= e n esquecer do break)
    for (i=1;i < mes1; i++) {
        switch (i) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            total_data_1+=31;
            break;

            case 4: case 6: case 9: case 11:
            total_data_1+=30;
            break;

            case 2:
            if (ano1%4==0) {
                total_data_1+=29;
            }
            else {
                total_data_1+=28;
            }
            break;
        }
    }
    //adicionando o "dia1" da primeira data
    total_data_1+=dia1;



    //calculando quantidade de dias do ano da segunda data (cuidado pra n ser <=)
    for (i=1;i < ano2;i++) {
        if (i%4==0) {
            total_data_2+=366;
        }
        else {
            total_data_2+=365;
        }
    }

    //calculando quantidade de dias dos meses da segunda data (cuidado pra n ser <= e n esquecer do break)
    for (i=1;i < mes2; i++) {
        switch (i) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            total_data_2+=31;
            break;

            case 4: case 6: case 9: case 11:
            total_data_2+=30;
            break;

            case 2:
            if (ano2%4==0) {
                total_data_2+=29;
            }
            else {
                total_data_2+=28;
            }
            break;
        }
    }
    //adicionando o "dia2" da segunda data
    total_data_2+=dia2;

    //tenho que criar uma variavel nova pra caso a diferença seja negativa
    int diferenca= total_data_1 - total_data_2;

    //fznd o if da diferenca
    if (diferenca<0) {
        diferenca = diferenca * -1;
    }

    //printando resultado
    printf("Existe %d dia(s) entre as duas datas.\n", diferenca);
}