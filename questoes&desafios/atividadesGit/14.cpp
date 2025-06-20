/*
Escreva um programa que leia a posição x e y de dois pontos no plano cartesiano e calcule a distância entre eles.
*/
#include <iostream>
using namespace std;
#include <cstdio>
#include <cmath>

int main(){
    double x1,x2,y1,y2;
    cin >> x1;
    cin >> x2;
    cin >> y1;
    cin >> y2;
    double distancia = sqrt (pow((x2 - x1),2) + pow((y2 - y1),2));

    printf("Distância: %.2f\n", distancia);
}