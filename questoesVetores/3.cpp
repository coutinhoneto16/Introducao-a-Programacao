/*Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida,
gere um terceiro vetor C onde cada elemento de C é a soma dos elementos
correspondentes de A e B. Imprima o vetor C.
*/
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int qtd, numero1=0, numero2=0;
    cin >> qtd;
    int vetor[qtd];
    int vetor2[qtd];

    for (int i = 0; i < qtd; i++){
        cin >> vetor[numero1];
        cin >> vetor2[numero2];
        int soma = vetor[numero1] + vetor2[numero2];

        printf("Soma: %d\n", soma);
    }
}
