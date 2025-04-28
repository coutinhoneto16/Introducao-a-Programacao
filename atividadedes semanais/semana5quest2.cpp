//Problemas que avaliam limite de idade para consumo de determinado produto. 
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    //Verificar se a pessoa pode ingerir bebida alcóolica
    int idade;
    printf("Digite sua idade: ");
    cin >> idade;

    if(idade <= 0){
        printf("Idade Inválida.");
    }else if (idade >= 18){
        printf("Pode ingerir bebida alcóolica.\n");
    }else{
        printf("Menor de idade, não pode ingerir bebida alcóolica.");
    }
}