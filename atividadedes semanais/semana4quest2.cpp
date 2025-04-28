//Revisão de casos reais que exijam combinações de operadores lógicos (ex.: liberar 
//ou não acesso). 
#include <iostream>
using namespace std;


int main(){

    string user = "netocoutinho";
    string senha = "senha123"; 
    string senhaDigitada, userDigitado;
    printf("Digite o username:\n");
    cin >> userDigitado;
    printf("Digite a senha:\n");
    cin >> senhaDigitada;

    if (senhaDigitada == senha && userDigitado == user){
        printf("Acesso Liberado!\n");
    }else{
        printf("Acesso negado! \n");
    }
}
