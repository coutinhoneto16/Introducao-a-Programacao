/*
Crie um programa que solicite ao usuário o valor do raio de uma esfera e calcule e exiba o seu volume.
*/
#include <iostream>
using namespace std;
#include <cstdio>
#include <cmath>

int main(){
    double raio;
    double volume = (4 * M_PI * pow(raio,3)) / 3;
    printf("Volume: %.2f\n",volume);

}