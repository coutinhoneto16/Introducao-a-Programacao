//Criar um código que calcule o salário líquido de um funcionário, aplicando imposto
#include <iostream>
using namespace std;


int main(){
    
    float salario, salarioliquido;
    int imposto;
    printf("Digite seu salário e a taxa de imposto:");
    cin >> salario >> imposto;

    salarioliquido = salario - (salario * imposto/100);
    printf("Salário final: %.2f R$\n", salarioliquido);


}