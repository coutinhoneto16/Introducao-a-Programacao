/*Exercício 7
Fazer um programa para ler N nomes de alunos e as notas que eles tiraram no 1º e 2º
semestres. Armazene cada informação em um vetor. Depois, imprimir os nomes dos alunos
aprovados (média das notas ≥ 6.0).
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int qtd;
    cin >> qtd;
    string nome[qtd];
    double nota1[qtd];
    double nota2[qtd];
    double media;

    for (int i = 0; i < qtd; i++){
        cin >> nome[i];
        cin >> nota1[i];
        cin >> nota2[i];
    }

    printf("Alunos Aprovados:\n");
    for (int i = 0; i < qtd; i++){
        media = (nota1[i] + nota2[i]) / 2;

        if (media >= 6){
            printf("%s\n", nome[i].c_str());
        }
    }
}