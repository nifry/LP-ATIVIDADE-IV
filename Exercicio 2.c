#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


struct alunos {
    char nome[200], data[200];
    float prinota, segunota, media;
};

float calcularmedia(struct alunos aluno) {
    return (aluno.prinota + aluno.segunota) / 2;
}

void verificando(struct alunos aluno) {
    if (aluno.media >= 7.0) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
}

int main() {

    setlocale(LC_ALL, "portuguese");

    struct alunos aluno[5]; 
    int i;

    
    for (i = 0; i < 5; ++i) {
        printf("\nDados do %dº alunos(a) \n", i + 1);
        printf("Digite seu o nome: \n");
        scanf("%s", aluno[i].nome);
        printf("Digite sua data de nascimento: \n");
        scanf("%s", aluno[i].data); 
        printf("Digite sua primeira nota: \n");
        scanf("%f", &aluno[i].prinota);
        printf("Digite sua segunda nota: \n");
        scanf("%f", &aluno[i].segunota);
        
        aluno[i].media = calcularmedia(aluno[i]);

    }

    system("cls || clear");

    for (i = 0; i < 5; ++i) {
        printf("Aluno: %s \n", aluno[i].nome);
        printf("Data de nascimento: %s \n", aluno[i].data);
        printf("Média: %.2f\n", aluno[i].media);
        verificando(aluno[i]);
    }

    return 0;
    
}