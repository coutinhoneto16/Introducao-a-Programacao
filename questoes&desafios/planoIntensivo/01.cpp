#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int num;
    printf("Digite quantos produtos você deseja cadastrar: \n");
    cin >> num;
    int qtdProdutosVendidos[num];
    string nomeProdutos[num];
    int maior = 0, totalVendas = 0;
    string produtoMaisVendido;

    printf("Digite o nome dos produtos e logo após sua quantidade de vendas: \n");
    for (int i = 0; i < num; i++){
        cin >> nomeProdutos[i];
        cin >> qtdProdutosVendidos[i];
        if (qtdProdutosVendidos[i] > maior){
            maior = qtdProdutosVendidos[i];
            produtoMaisVendido = nomeProdutos[i];
        }
        totalVendas += qtdProdutosVendidos[i];
    }

    printf("=========== DADOS DE VENDAS ============== \n");
    printf("Quantidade de produtos vendidos na semana: %d \n", totalVendas);
    printf("Quantidade de vendas de cada produto: \n");
    for(int i = 0; i < num; i++){
        printf("%s : %d \n", nomeProdutos[i].c_str(), qtdProdutosVendidos[i]);
    }
    printf("Produto mais vendido: %s, com %d vendas. \n", produtoMaisVendido.c_str(), maior);
}