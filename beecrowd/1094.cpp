#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n, quant, quantTotal = 0, quantCoelho = 0, quantRato = 0, quantSapo = 0;
	char animal;

	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> quant;
		cin >> animal;
		
		quantTotal = quant + quantTotal;
		
		if(animal == 'C' or animal == 'c'){
			quantCoelho = quant + quantCoelho;
		}else if(animal == 'R' or animal == 'r'){
			quantRato = quant + quantRato;
		}else if(animal == 'S' or animal == 's'){
			quantSapo = quant + quantSapo;
		}else{
			printf("Digite um animal válido\n");
		}
	}
	
	printf("Total: %d cobaias\n",quantTotal);
	printf("Total de coelhos: %d\n",quantCoelho);
	printf("Total de ratos: %d\n",quantRato);
	printf("Total de sapos: %d\n",quantSapo);
	printf("Percentual de coelhos: %.2f %%\n", (float) quantCoelho / quantTotal * 100);
	printf("Percentual de ratos: %.2f %%\n", (float) quantRato / quantTotal * 100);
	printf("Percentual de sapos: %.2f %%\n",(float) quantSapo / quantTotal * 100);
}
