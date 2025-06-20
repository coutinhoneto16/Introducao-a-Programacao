/*
Escreva um programa que solicite o nome de um dia da semana e exiba se é um dia útil ou final de semana.

Obs:.
dias úteis: segunda-feira, terça-feira, quarta-feira, quinta-feira, sexta-feira
finais de semana: sábado ou domingo
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    string dia;
    cin >> dia;

    if (dia == "segunda-feira" || dia == "terça-feira" || dia == "quarta-feira" || dia == "quinta-feira" 
    || dia == "sexta-feira"){
        printf("Dia útil \n");
    
    }else if (dia == "sábado" || dia == "domingo") {
        printf("Final de semana \n");

    }else{
        printf("Digite um dia valido \n");
    }
}

   