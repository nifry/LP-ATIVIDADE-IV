#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

struct dados_produto {
    char nome;
    float preco, estoque, quant;
};


int main () {
setlocale(LC_ALL, "portuguese");
struct dados_produto produto;
int opcao;
char comprou, quero, quant;

printf("Oque deseja: \n");
printf("Op��es:\n Realizar compra \n Consultar estoque ou sair da compra? \n");
printf("Digite 1 para realizar compra \n Digite 2 para consultar nosso estoque \n Digite 3 para sair da compra \n \n");
scanf("%d", &opcao);
switch (opcao){
case 1:
    printf("Cal�a: 3 pe�as, \n Valor: 25.00 \n");
    printf("Bermuda: 2 pe�as \n Valor: 44.00 \n");
    printf("Sapatos: 6 pares \n Valor: 88.00 \n");    
    printf("Digite o nome do produto que deseja consumir:");
    gets(produto.nome);
    printf("Digite a quantidade do seu produto, conforme a at� o limite doque est� a venda");
    gets(produto.quant);

    dados_produto (produto.nome, produto.quant);

    break;
case 2:
    printf("Cal�a: 20 pe�as armazenadas. \n");
    printf("Bermuda: 10 pe�as armazenadas. \n");
    printf("Sapatos 30 pares armazenadas. \n");
    break;
case 3:
    printf("Saindo da compra.");
    break;
default:
    break;
}

    return 0;
}