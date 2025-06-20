#include <iostream>
#include <cstdio>

using namespace std;

void imprimirInformacoes (string Produto[], int vendas[],int idade[], int qtdProdutos){
    printf("=========TABELA DE VENDAS================\n");
    for (int i = 0; i < qtdProdutos; i++){
        printf("%s: %d vendas. Idade do Comprador:%d \n", Produto[i].c_str(), vendas[i], idade[i]);
    }
    printf("=========================================\n");
}

int qtdProdutosVendidos (int vendas[], int qtdProdutos){
    int totalVendas = 0;
    for (int i = 0; i < qtdProdutos; i++){
        totalVendas += vendas[i];
    }
    return totalVendas;
}

void produtosAcimaDaMeta (int vendas[],string Produtos[], int qtdProdutos, int meta){
    printf("Produtos que bateram a meta de %d vendas: \n", meta);
    bool acimaDaMeta = false;
    for(int i = 0; i < qtdProdutos; i++){
        if(vendas[i] > meta){
            printf("%s com %d vendas.\n\n", Produtos[i].c_str(), vendas[i]);
            acimaDaMeta = true;
        }
    }
    if (!acimaDaMeta){
            printf("Não houveram produtos que bateram a meta!\n\n");
        }
}

double idadeMedia (int idade[], int qtdProdutos){
    int somaIdade = 0;
    for (int i = 0; i < qtdProdutos; i++){
        somaIdade += idade[i];
    }
    double media = (double)somaIdade / qtdProdutos;
    return media;
}

void produtoMaisVendido (int vendas[], string produto[], int idade[], int qtdProdutos,
                            string &nomeMaisVendido, int &qtdMaisVendida, int &idadeMaisVendido){
    qtdMaisVendida = vendas[0];
    idadeMaisVendido = idade[0];
    nomeMaisVendido = produto[0];
    for (int i = 0; i < qtdProdutos; i++){
        if (vendas[i] > qtdMaisVendida){
            qtdMaisVendida = vendas[i];
            idadeMaisVendido = idade[i];
            nomeMaisVendido = produto[i];
        }
    }
}

void pesquisar(string produto[], int vendas[],int idade[], int qtdProdutos){
    string nomeBusca;
    printf("Digite o nome do produto que deseja pesquisar: \n");
    cin >> nomeBusca;
    bool encontrado = false;

    for (int i = 0; i < qtdProdutos; i++){
        if (produto[i] == nomeBusca){
            printf("Produto Encontrado!\n");
            printf("Nome: %s\n",produto[i].c_str());
            printf("Vendas: %d\n",vendas[i]);
            printf("Idade do comprador: %d\n\n",idade[i]);
            encontrado = true;
            break;
        }
    }
    if(!encontrado){
        printf("Produto não encontrado!\n\n");
    }
}

void pesquisaIdade(int idade[], int qtdProdutos){
    int metaIdade,qtdEncontrada = 0;
    char op;
    printf("Digite a meta de idade que você deseja: \n");
    cin >> metaIdade;
    printf("Digite '<' caso queira idade menor que a digitada ou '>' caso queira idade maior\n");
    cin >> op;
    for (int i = 0; i < qtdProdutos; i++){
        if (op == '<'){
            if (idade[i] < metaIdade){
                qtdEncontrada ++;
            }
        }else if (op == '>'){
            if (idade[i] > metaIdade){
                qtdEncontrada++;
            }
        }
    }
    if (qtdEncontrada == 0){
        printf("Nenhum cliente dentro do critério de idade foi encontrado!\n\n");
    }else{
        printf("O número de clientes com a idade pesquisada é de: %d\n\n", qtdEncontrada);
    }
}

int main(){
    int qtdProdutos = 10;
    int meta;
    string nomeProduto[qtdProdutos];
    int vendasProduto[qtdProdutos];
    int idadeComprador[qtdProdutos];
    string nomeMaisVendido;
    int qtdMaisVendida, idadeMaisVendido;

    printf("Digite o nome do produto,a quantidade vendida na semana e a idade do comprador: \n");
    for (int i = 0; i < qtdProdutos; i++){
        cin >> nomeProduto[i];
        cin >> vendasProduto[i];
        cin >> idadeComprador[i];
    }
    printf("Digite a meta a ser alcançada nas vendas: \n");
    cin >> meta;

    imprimirInformacoes(nomeProduto, vendasProduto, idadeComprador, qtdProdutos);
    printf("Informações Gerais\n\n");
    printf("Total de Vendas: %d\n\n", qtdProdutosVendidos(vendasProduto, qtdProdutos));
    produtosAcimaDaMeta(vendasProduto, nomeProduto, qtdProdutos, meta);
    printf("Idade média dos clientes: %.2f\n\n", idadeMedia(idadeComprador, qtdProdutos));
    printf("Informações da maior venda: \n");
    produtoMaisVendido(vendasProduto, nomeProduto, idadeComprador, qtdProdutos,
                   nomeMaisVendido, qtdMaisVendida, idadeMaisVendido);
    printf("    Produto: %s,\n    Quantidade vendida: %d,\n    Idade do Comprador: %d.\n",
    nomeMaisVendido.c_str(), qtdMaisVendida, idadeMaisVendido);
    
    pesquisar(nomeProduto, vendasProduto, idadeComprador, qtdProdutos);
    pesquisaIdade(idadeComprador, qtdProdutos);
}
