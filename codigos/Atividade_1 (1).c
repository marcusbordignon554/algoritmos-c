//aluno: Marcus Vinicius Simões Bordignon

//incluir biblioteca(s)
#include <stdio.h>

void main() {
    //criar variaveis
    int inteiro, mil,centena, dezena, unidade, resto;

    //pedir e ler a varíavel
    printf("Por favor, insira o número a ser lido por extenso.\n");
    scanf("%d", &inteiro);

    //definir limites
    for(inteiro;inteiro<1||inteiro>9999;scanf("%d", &inteiro)) {
        printf("Valor invalido, por favor insira um valor entre 1 e 9999.\n");
        }

    //dividir o número inteiro em unidades decimais
    mil=inteiro/1000, resto=inteiro%1000;
    centena=resto/100, resto=resto%100;
    dezena=resto/10, resto=resto%10;
    unidade=resto;

    //organizar os switch's para exibição correta
    switch (mil) {
        case 1: printf("mil");
            break;
        case 2: printf("dois mil");
            break;
        case 3: printf("três mil");
            break;
        case 4: printf("quatro mil");
            break;
        case 5: printf("cinco mil");
            break;
        case 6: printf("seis mil");
            break;
        case 7: printf("sete mil");
            break;
        case 8: printf("oito mil");
            break;
        case 9: printf("nove mil");
            break;
    }

    //separar casos onde tem ou centenas, ou dezenas ou unidades caso exista
    if (mil>0 && (centena>0 || dezena>0 || unidade>0)) {
        printf(" e ");
    }
    switch (centena) {
        //caso especial de diferenciação de "cento" e "cem"
        case 1: 
            if (dezena==0 && unidade==0) {
                printf("cem");
            }
            else {
                printf("cento");
            }
            break;
        case 2: printf("duzentos");
            break;
        case 3: printf("trezentos");
            break;
        case 4: printf("quatrocentos");
            break;
        case 5: printf("quinhentos");
            break;
        case 6: printf("seiscentos");
            break;
        case 7: printf("setecentos");
            break;
        case 8: printf("oitocentos");
            break;
        case 9: printf("novecentos");
            break;
    }
    if (centena>0 && (dezena>0 || unidade>0)) {
        printf(" e ");
    }
    //casos especiais onde dezena==1
    if (dezena==1) {
        switch (unidade) {
            case 0: printf("dez");
                break;
            case 1: printf("onze");
                break;
            case 2: printf("doze");
                break;
            case 3: printf("treze");
                break;
            case 4: printf("quatorze");
                break;
            case 5: printf("quinze");
                break;
            case 6: printf("dezesseis");
                break;
            case 7: printf("dezessete");
                break;
            case 8: printf("dezoito");
                break;
            case 9: printf("dezenove");
                break;
        }
    }
    else {
        //resto dos casos (infelizmente tendo que colocar dentro de um bloco else, teria como colocar fora dele?)
        switch (dezena) {
            case 2: printf("vinte");
                break;
            case 3: printf("trinta");
                break;
            case 4: printf("quarenta");
                break;
            case 5: printf("cinquenta");
                break;
            case 6: printf("sessenta");
                break;
            case 7: printf("setenta");
                break;
            case 8: printf("oitenta");
                break;
            case 9: printf("noventa");
                break;
        }
        if (dezena>0 && (unidade>0)) {
            printf(" e ");
        }

        switch (unidade) {
            case 1: printf("um");
                break;
            case 2: printf("dois");
                break;
            case 3: printf("três");
                break;
            case 4: printf("quatro");
                break;
            case 5: printf("cinco");
                break;
            case 6: printf("seis");
                break;
            case 7: printf("sete");
                break;
            case 8: printf("oito");
                break;
            case 9: printf("nove");
                break;
        }
    }
}
