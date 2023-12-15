#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct produto{
    char nome[100];
    float preco;
    int quant;
};

float total(struct produto pro){
    return pro.preco*pro.quant;
};

void deseja(struct produto *pro, int quant){
    if (quant > 0 && quant <= pro->quant){
        pro->quant -= quant;
        printf("Compra feita\n");
    }
    else{
        printf("Pouca quantidade\n");
    }
}

int main (){
int escolha, quant;
struct produto pro;
do{
    printf("\nMENU DE OPCAO");
    printf("1 - |ADICIONAR PRODUTO| \n");
    printf("2 - |REALIZAR UMA COMPRA| \n");
    printf("3 - |CONSULTAR ESTOQUE| \n");
    printf("4 - |Sair do Programa| \n");
    printf("Digite oque escolheu: \n:");
    scanf("%d",&escolha);

    fflush(stdin);
    
    switch (escolha){
    case 1:
        printf("\nAdicione o Produto \n");
        printf("Digite o nome do produto: \n");
        gets(pro.nome);
        fflush(stdin);
        printf("Digite o preco: \n");
        scanf("%f",&pro.preco);
        fflush(stdin);
        printf("\nDigite a quantidade do produto escolhido:");
        scanf("%d",&pro.quant);
        total(pro);
        break;
    case 2:
            printf("Digite oque deseja:");
            scanf("%d",&quant);
            deseja(&pro, quant);
        break;    
    case 3 :       
            printf("Estoque de mercadoria: \n \n");
            printf("Nome do produto: %s \n", pro.nome );
            printf("Quantidade do produto: %d \n", pro.quant );
            printf("Preço do produto %.2f \n", pro.preco);
            printf("Valor final: %.2f \n", total(pro));
            printf("");
        ;      
        break;
    default:
      printf("\n Opção não encontrada \n");
        break;
    }
  
} while (escolha != 4 );

    return 0;
}