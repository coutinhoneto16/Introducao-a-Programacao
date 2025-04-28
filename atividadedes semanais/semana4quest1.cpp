//Exercícios de validação de intervalos (ex.: se o valor está entre X e Y). 

#include <iostream>
using namespace std;


int main(){
    
    int idade;
    printf("Digite sua idade: ");
    cin >> idade;

    if (idade >= 18 && idade <= 65){
        printf("Continue com sua CLT.\n");
    }else if(idade >65){
        printf("Aposentado.\n");
    }else{
        printf("Vai chegar sua hora.\n");
    }

}