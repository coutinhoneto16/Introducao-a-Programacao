//Desafio: cálculo de fatura final após aplicar taxas ou descontos a um valor base. 
#include <iostream>
using namespace std;


int main(){

    float fatura;
    int reajuste;
    printf("Digite o valor do fatura e o reajuste percentual (use - pra descontos):");
    cin >> fatura >> reajuste;

    fatura = fatura + (fatura * reajuste/100);
    printf("Fatura final: %.2f R$\n", fatura);

}