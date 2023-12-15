#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
struct banco{
int num;
    char titul[500], tipo [200];
float saldo;
};

        void depositar(struct banco *conta, float valor){
            if (valor > 0) {
                conta->saldo += valor;
                printf("R$ %.2f realizado.\n", valor);
            }
            else{
                printf("Valor invalido.\n");
            }
        }

void sacar(struct banco *conta, float valor){
        if (valor > 0 && valor <= conta->saldo){
            conta->saldo -= valor;
            printf("Saque de R$ %.2f realizado com sucesso.\n", valor);
        }
        else{
            printf("Valor invalido para saque ou saldo insuficiente.\n");
        }
}

void Saldo(struct banco conta){
    fflush(stdin);
    printf("Saldo atual: R$ %.2f\n", conta.saldo);
    printf("conta numero %d\n", conta.num);
    printf("titular: %s\n", conta.titul);
    printf("tipo da conta: %s\n", conta.tipo);
}

int main(){
    struct banco Conta;
    int escolha;
    float valor;
        printf("Digite o numero da conta: \n");
        scanf("%d", &Conta.num);
        printf("Digite o nome do titular: \n");
        scanf("%s", &Conta.titul);
        printf("Digite o tipo da conta: \n");
        scanf("%s", &Conta.tipo);
        fflush(stdin);

    do{
    printf("\nMenu bancário:\n");
    printf("1 - Depositar\n");
    printf("2 - Sacar \n");
    printf("3 - Imprimir\n");
    printf("4 - Finalizar\n");
    printf("Escolha oque oque voce deseja conforme o número acima: \n");
    scanf("%d", &escolha);
        
        switch (escolha){
                case 1:
                    printf("Digite o deposito: ");
                    scanf("%f", &valor);
                    depositar(&Conta, valor);
                    break;
                case 2:
                    printf("Digite o saque: ");
                    scanf("%f", &valor);
                    sacar(&Conta, valor);
                    break;
                case 3:
                    Saldo(Conta);
                    break;
                case 4:
                    printf("finalizando\n");
                    break;
                default:
                    printf("Escolha incorreta.\n");
                }
    } while (escolha != 4);

    return 0;
}