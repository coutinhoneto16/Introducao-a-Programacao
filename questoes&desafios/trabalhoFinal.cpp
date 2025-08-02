#include <iostream>
#include <cstdio>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Venda{
	int id_pedido;
	string id_produto;
	int qtd_produto;
	double preco_und;
	string data_venda;
};

double calcularFaturamentoTotal(const vector<Venda>& vendas){
	double faturamentoTotal = 0 , venda_produto = 0;
	for (size_t i = 0; i < vendas.size(); i++){
		venda_produto = vendas[i].qtd_produto * vendas[i].preco_und;
		faturamentoTotal += venda_produto;
	}
	return faturamentoTotal;
}

string produtoMaisVendido(const vector<Venda>& vendas, int& qtd_total){
    vector<string> ids_produtos;
	vector<int> quantidades;

		for (const Venda& v : vendas){
			bool encontrado = false;
			for (size_t i = 0; i < ids_produtos.size(); i++){ 
				if (ids_produtos[i] == v.id_produto){
					quantidades[i] += v.qtd_produto;
					encontrado = true;
					break;
				}
			}
			if (!encontrado){
				ids_produtos.push_back(v.id_produto);
				quantidades.push_back(v.qtd_produto);
			}
		}
	int maior_quantidade = 0;
	string id_mais_vendido;
	for (size_t i = 0; i < quantidades.size(); i++){
		if (quantidades[i] > maior_quantidade){
			maior_quantidade = quantidades[i];
			id_mais_vendido = ids_produtos[i];
		}
	}
	qtd_total = maior_quantidade;
	return id_mais_vendido;
}

string produtoMaisRentavel(const vector<Venda>& vendas, double& lucro_total_final) {
    vector<string> id_produto_renda;
    vector<double> lucro_total;

    for (const Venda& v : vendas) {
        bool encontrado = false;
        for (size_t i = 0; i < id_produto_renda.size(); i++) {
            if (id_produto_renda[i] == v.id_produto) {
                lucro_total[i] += v.qtd_produto * v.preco_und;
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            id_produto_renda.push_back(v.id_produto);
            lucro_total.push_back(v.qtd_produto * v.preco_und);
        }
    }

    double maior_lucro = 0;
    string id_maior_lucro;
    for (size_t i = 0; i < lucro_total.size(); i++) {
        if (lucro_total[i] > maior_lucro) {
            maior_lucro = lucro_total[i];
            id_maior_lucro = id_produto_renda[i];
        }
    }

    lucro_total_final = maior_lucro;
    return id_maior_lucro;
}


int main(){

	vector<Venda> vendas;
	int opcao;
	bool dados_carregados = false;
	do {
		printf("============== MENU ================\n");
		printf("1 - Carregar dados de vendas \n");
		printf("2 - Exibir faturamento total \n");
		printf("3 - Exibir produto mais vendido \n");
		printf("4 - Exibir produto mais rentável \n");
		printf("5 - Sair \n\n");
		cin >> opcao;

		switch (opcao){
			case 1: {
				if (dados_carregados){
					printf("Os dados já foram carregados!\n");
					break;
				}
				{
					string nome_arquivo;
					cout << "Digite o nome do arquivo: ";
					cin >> nome_arquivo;
					ifstream arquivo(nome_arquivo);

					
					
					if(!arquivo.is_open()){
						cerr << "Erro ao abrir o arquivo!" << endl;
						break;
					}

					string linha;
					getline(arquivo, linha);

					while (getline(arquivo, linha)){
						stringstream ss(linha);
						string campo;
						vector<string> campos;
			
						Venda v;
			
						getline(ss, campo, ',');
						v.id_pedido = stoi(campo);
				
						getline(ss, campo, ',');
						v.id_produto = campo;
			
						getline(ss, campo, ',');
						v.qtd_produto = stoi(campo);
			
						getline (ss,campo, ',');
						v.preco_und = stod(campo);
				
						getline (ss,campo, ',');
						v.data_venda = campo;
			
						vendas.push_back(v);
					}

					arquivo.close();
					dados_carregados = true;
					cout << "Dados carregados com sucesso!" << endl;
				}
				break;
			}

			case 2: {
				if(!dados_carregados){
					printf("Primeiramento carregue os dados para análise! (OPÇÃO 1)\n\n");
					break;
				}
				printf("Faturamento total = R$%.2f\n\n", calcularFaturamentoTotal(vendas));
				break;
			}

			case 3: {
				if(!dados_carregados){
					printf("Primeiramento carregue os dados para análise! (OPÇÃO 1)\n\n");
					break;
				}
				int qtd;
				string id = produtoMaisVendido(vendas, qtd);
				printf("Produto mais vendido (ID):%s, com %d unidades vendidas.\n\n", id.c_str(),qtd);
				break;
			}
			
			case 4: {
				if(!dados_carregados){
					printf("Primeiramento carregue os dados para análise! (OPÇÃO 1)\n\n");
					break;
				}
				double lucro;
				string maisRentavel = produtoMaisRentavel(vendas, lucro);
				printf("Produto mais rentavel (ID):%s, com lucro total de R$%.2f\n\n", maisRentavel.c_str(), lucro);
				break;
			}

			case 5: {
				printf("Saindo...\n");
				break;
			}

			default: {
				printf("Opcao Invalida!\n");
			}
		}
	} while (opcao != 5);
}