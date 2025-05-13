/*Exercício 9
Um comerciante deseja fazer o levantamento do lucro das mercadorias.
Para isso, leia N mercadorias, cada uma com nome, preço de compra e
preço de venda. Determine e escreva:
- Quantas mercadorias proporcionam:
- Lucro < 10%
- 10% ≤ Lucro ≤ 20%
- Lucro > 20%
- O valor total de compra
- O valor total de venda
- O lucro total*/

#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int nmercadorias, lucro10 = 0, lucro20 = 0, lucromaior20 = 0;
    double lucro = 0, lucroTotal = 0, comprasTotal = 0, vendasTotal = 0;
    cin >> nmercadorias;
    string nome[nmercadorias];
    double precoCompra[nmercadorias];
    double precoVenda[nmercadorias];

    for (int i = 0; i < nmercadorias; i++){
        cin >> nome[i];
        cin >> precoCompra[i];
        cin >> precoVenda[i];
    }

    for (int i = 0; i < nmercadorias; i++){
        lucro = (precoVenda[i] - precoCompra[i]) / precoCompra[i];
        lucroTotal = (precoVenda[i] - precoCompra[i]) + lucroTotal;
        comprasTotal += precoCompra[i];
        vendasTotal += precoVenda[i];

        if (lucro < 0.1){
            lucro10++;
        }else if (lucro >= .1 && lucro <= .2){
            lucro20++;
        }else if (lucro > .2){
            lucromaior20++;
        }
    }
    lucroTotal = vendasTotal - comprasTotal;

    printf("Lucro abaixo de 10%%: %d\n",lucro10);
    printf("Lucro entre 10%% e 20%%: %d\n", lucro20);
    printf("Lucro acima de 20%%: %d\n", lucromaior20);
    printf("Valor total de compra: %.2f\n", comprasTotal);
    printf("Valor total de venda: %.2f\n", vendasTotal);
    printf("Lucro total: %.2f\n", lucroTotal);
}