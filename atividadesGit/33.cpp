/*
Escreva um programa que leia três números e verifique se a soma deles é
positiva, negativa ou igual a zero
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    int sum = n1 + n2 + n3;

    if (sum == 0){
        printf("Zero\n");
    }else if (sum > 0){
        printf("Positive\n");
    }else if (sum < 0){
        printf("Negative\n");
    }else{
        printf("Invalid sum");
    }
}