#include <iostream>
#include <cstdio>

using namespace std;

double idadeMedia(int pessoas, int idade[]){
    int somaIdade = 0;
    for (int i = 0; i < pessoas; i++){
        somaIdade += idade[i];
    }
    double media = somaIdade / pessoas;
    return media;
}

int idadeMenorQue(int pessoas, int idade[], int limite){
    int qtdMenor = 0;
    for (int i = 0; i < pessoas; i++){
        if (idade[i] < limite){
            qtdMenor ++;
        }
    }
    return qtdMenor;
}

int maiorIdade(int pessoas, int idade[]){
    int maiorIdade = 0;
    for (int i = 0; i < pessoas; i++){
        if (idade[i] > maiorIdade){
            maiorIdade = idade[i];
        }
    }
    return maiorIdade;
}

int main(){
    int clientes = 15;
    int idadeClientes[clientes];

    printf("Digite a idade dos clientes: \n");
    for (int i = 0; i < clientes; i++){
        cin >> idadeClientes[i];
    }

    printf("===========TABELA DE DADOS===============\n");
    printf("Média de idades: %.2f\n", idadeMedia(clientes, idadeClientes));
    printf("Pessoas com idade menor que 25 anos: %d \n", idadeMenorQue(clientes,idadeClientes,25));
    printf("Maior idade registrada: %d\n", maiorIdade(clientes, idadeClientes));

}