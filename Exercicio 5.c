#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct Funcionario_fun {
   int menbros[200];
   char cargo[200];
   float salario[200], mediasal[200];
};

void calculo(struct Funcionario_fun Funcionario){
int quant;
float media, dinheiro, total;
printf("Digite novamente a quantidade de funcionários por favor:");
scanf("%d", &quant);
printf("Digite novamente os salarios dos funcionarios:");
scanf("%f", &dinheiro);

media = (quant * dinheiro);
total = media / quant;
printf("Media salarial dos funcionários: %.3f \n", total); 
} 

int main ()  {
    setlocale(LC_ALL, "portuguese");
struct Funcionario_fun Funcionario;
printf("Digite a quantidade funcionários:");
scanf("%d", &Funcionario.menbros);
printf("Digite seu cargo:");
scanf("%s", &Funcionario.cargo);
printf("Digite seus salários:");
scanf("%s", &Funcionario.salario);
calculo(Funcionario);
    return 0;
} 