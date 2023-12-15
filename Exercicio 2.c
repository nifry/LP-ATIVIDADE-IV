#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct dados_dos{
    char nome[200], data[200];
    float prinota, segunota; 
    float media;
};

float calcularMedia(struct dados_dos aluno) {
    return (aluno.segunota + aluno.prinota) / 2;

}

void processando(struct dados_dos aluno){
if (aluno.media >= 7)
{
    printf("\n Aprovado \n");
}else {
    printf("\n Reprovado \n");
}
}

int main () {
setlocale (LC_ALL, "portuguese");
struct dados_dos aluno [5];
int i, h;

for (i = 0; i < 5; i++){
    printf("Digite seu nome: \n", i+1);
    scanf("%s", &aluno[i].nome);
    printf("Digite sua data de nascimento: \n", i+1);
    scanf("%s", &aluno[i].data);
    printf("Digite sua primeira nota: \n", i+1);
    scanf("%s", &aluno[i].prinota);
    printf("Digite a sua segunda nota: \n", i+1);
    scanf("%s", &aluno[i].segunota);
    aluno[i].media = calcularMedia(aluno[i]);
}

for (i = 0; i < 5; i++){
    printf("\n \n Média do %s: %.2f \n \n", aluno[i].nome, aluno[i].media);
    processando(aluno[i]);
}

return 0;
}