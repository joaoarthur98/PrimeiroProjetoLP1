#include "menuConta.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
OPERAÇÕES DE CONTA

consultar saldo
e saque
o resto faz no menu principal mesmo
porque não precisa de autenticação
*/

void saldo() {}

void sacar() {}

void transferencia() {}

// void depositar() {}

// void pagar() {}

void menuConta(){
    Conta conta;
    Conta *contas;
    int *qtdContas;
    boolean logado = false;
    int operacao = -1, lista = 0;

    qtdContas = (int*)malloc(20*sizeof(int));

    contas = (Conta*)malloc((*qtdContas)*sizeof(Conta));

    while(operacao != 0){
        printf("+------------------------+\n");
        printf("|    CAIXA ELETRÔNICO    |\n");
        printf("+------------------------+\n");
        printf("|     Seja bem-vindo!    |\n");
        printf("|    Por favor escolha   |\n");
        printf("|    uma operação para   |\n");
        printf("|     ser realizada.     |\n");
        printf("+------------------------+\n");
        printf("| 1 - Depositar valor    |\n");
        printf("| 2 - Realizar saque     |\n");
        printf("| 3 - Verificar saldo    |\n");
        printf("| 4 - Realizar pagamento |\n");
        printf("| 0 - Encerrar sessão    |\n");
        printf("+------------------------+\n");
        scanf("%d", &operacao);
        switch (operacao) {
            case 1:
                depositar();
                break;
            case 2:
                sacar();
                break;
            case 3:
                saldo();
                break;
            case 4:
                pagar();
                break;
            default:
                printf("Código inválido. Por favor insira o código corretamente.\n");
                break;
        }
    }
}