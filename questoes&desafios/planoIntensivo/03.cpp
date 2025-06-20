#include <iostream>
#include <cstdio>

using namespace std;

int totalVendas(int vendas[], int tamanho){
    int vendasTotais = 0;
    for (int i = 0; i < tamanho; i++){
        vendasTotais += vendas[i];
    }
    return vendasTotais;
}

int vendasAcima(int vendas[], int tamanho, int limite) {
    int vendasAcima = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vendas[i] > limite) {
            vendasAcima++;
        }
    }
    return vendasAcima;
}

int vendasAbaixo(int vendas[], int tamanho, int limite) {
    int vendasAbaixo = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vendas[i] < limite) {
            vendasAbaixo++;
        }
    }
    return vendasAbaixo;
}

string produtoComMaiorVenda(int vendas[], string nomeProduto[], int tamanho) {
    int maiorVenda = 0;
    string produtoMaiorVenda;
    for (int i = 0; i < tamanho; i++){
        if (vendas[i] > maiorVenda){
            maiorVenda = vendas[i];
            produtoMaiorVenda = nomeProduto [i];
        } 
    }
    return produtoMaiorVenda;
}

int main(){
    int num;
    printf("Digite quantos produtos deseja cadastrar:\n");
    cin >> num;
    string Produto[num];
    int qtdVendas[num];

    printf("Digite os produtos e a quantidade vendida de cada: \n");
    for (int i = 0; i < num; i++){
        cin >> Produto[i];
        cin >> qtdVendas[i];
    }

    printf("============TABELA DE VENDAS================\n");
    printf("Total de vendas: %d\n", totalVendas(qtdVendas, num));
    printf("Produtos com mais de 15 vendas: %d\n", vendasAcima(qtdVendas,num,15));
    printf("Produtos com menos de 12 vendas: %d\n", vendasAbaixo(qtdVendas,num,12));
    printf("Produto com maior venda: %s\n", produtoComMaiorVenda(qtdVendas, Produto, num).c_str());
}