//Exibir a tabuada de 1 a 10, usando laços. 
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    for(int i = 1; i <= 10; i++){
        printf("============ TABUADA DO NUMERO %d =============\n", i);
        for(int j = 1; j <= 10; j++){
            printf("%d x %d = %d\n", i, j, j*i);
        }
    }
}