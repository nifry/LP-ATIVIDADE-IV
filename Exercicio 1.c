#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

struct dados_agenda{
    char nome[200], numero[200], email[200];
};

void cofereir(struct dados_agenda *agenda, char *processador){
char i;
for (i = 0; i < 3; i++)
{
    if (strcmp(agenda[i].nome, processador)==0){
    printf("Nome %s \n", agenda[i].nome);
    printf("Telefone %s \n", agenda[i].numero);
    return;
    }
}
printf(" \n Conatato não localizado \n");
}


int main () {
setlocale(LC_ALL, "portuguese");
struct dados_agenda agenda[3];
char i, processador[200];

for (i = 0; i < 3; i++){
    printf("Digite seu nome:");
    gets(agenda[i].nome);
    printf("Digite seu número:");
    gets(agenda[i].numero);
    printf("Digite seu email:");
    gets(agenda[i].email);
}
printf("Digite o nome do contato para buscar o número, por favor:");
gets(processador);

cofereir(agenda, processador);
    return 0;
}