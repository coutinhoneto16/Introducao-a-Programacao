#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int num;
    printf("Digite quantos produtos você deseja cadastrar: \n");
    cin >> num;
    int qtdProdutosVendidos[num];
    int qtdMenos10 = 0, qtdMais50 = 0;
    int vendasTotais = 0;
    string nomeProdutos[num];
    string produtosMaisVendidos[num];
    int vendasMaisVendidos[num];
    string produtosMenosVendidos[num];
    int vendasMenosVendidos[num];

    printf("Digite o nome do produto e a quantidade de vendas: \n");
    for (int i = 0; i < num; i++){

        cin >> nomeProdutos[i];
        cin >> qtdProdutosVendidos[i];

        if(qtdProdutosVendidos[i] > 50){
            produtosMaisVendidos[qtdMais50] = nomeProdutos[i];
            vendasMaisVendidos[qtdMais50] = qtdProdutosVendidos[i];
            qtdMais50 ++;

        }else if(qtdProdutosVendidos[i] < 10){
            produtosMenosVendidos[qtdMenos10] = nomeProdutos[i];
            vendasMenosVendidos[qtdMenos10] = qtdProdutosVendidos[i];
            qtdMenos10 ++;
        }
        vendasTotais += qtdProdutosVendidos[i];
    }
    printf("===============DADOS DE VENDAS===============\n");
    printf("%d produto(s) que vendeu(ram) mais de 50 unidades: \n", qtdMais50);
    for(int i = 0; i < qtdMais50; i++){
        printf("%s com %d vendas. \n\n", produtosMaisVendidos[i].c_str(),vendasMaisVendidos[i]);
    }
    printf("%d produtos(s) que vendeu(ram) menos de 10 unidade  (ALERTA!) :\n",qtdMenos10);
    for(int i = 0; i < qtdMenos10; i++){
        printf("%s com %d vendas. \n\n", produtosMenosVendidos[i].c_str(), vendasMenosVendidos[i]);
    }
    printf("Quantidade total de vendas: %d \n", vendasTotais);

}