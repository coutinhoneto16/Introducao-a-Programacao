//Ler dados de um usuário (nome e idade) e exibir em tela.
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    string nome;
    int idade;
    printf("Digite seu nome e sua idade: \n");
    cin >> nome >> idade;

    printf("Olá %s, parabéns pelos seus %d anos\n", nome.c_str(),idade);

}