//Verificar aprovação de aluno(a) com base em nota e frequência. 

#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    float nota1, nota2, media, mediaAprovacao;
    int faltas, faltasAceitaveis;

    printf("Digite a média de aprovação: ");
    cin >> mediaAprovacao;
    printf("Digite as notas do aluno: ");
    cin >> nota1 >> nota2;
    printf("Digite a quantidade de faltas aceitáveis: ");
    cin >> faltasAceitaveis;
    printf("Digite a quantidade de faltas do aluno: ");
    cin >> faltas;

    media = (nota1 + nota2)/2;

    if (media > mediaAprovacao && faltas < faltasAceitaveis){
        printf("Aluno aprovado com média %.2f e com %d faltas. \n", media, faltas);
    }else if (media > mediaAprovacao && faltas > faltasAceitaveis){
        printf("Aluno reprovado por falta. Faltas:%d \n",faltas);
    }else if (media < mediaAprovacao && faltas < faltasAceitaveis){
        printf("Aluno reprovado por nota. Média: %.2f \n", media);
    }else{
        printf("Aluno reprovado por nota e falta. Média:%.2f Faltas:%d \n",media, faltas);
    }
}