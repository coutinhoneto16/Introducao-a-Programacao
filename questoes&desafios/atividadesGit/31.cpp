/*
Escreva um programa que leia as notas de duas provas e informe se o aluno foi aprovado ou reprovado.

Obs:.
Para ser aprovado o aluno deve obter uma média aritmética maior ou igual a 6!
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    float prova1,prova2;
    cin >> prova1 >> prova2;

    float media = (prova1 + prova2)/2;
    printf("Media: %.2f \n", media);

    if (media >= 6){
        printf("Aproved \n");
        
    }else if (media < 6){     
        printf("Reproved \n");

    }else{
        printf("Type a valid number \n");
    }
}