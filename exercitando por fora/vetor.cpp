#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n;
    cin >> n;
    int numeros[n];

    for (int i = 0; i < n; i++){
        cin  >> numeros[i];
    }

    int maiornumero = numeros[0];
    
    for(int i = 0; i< n; i++){
        if (numeros[i] > maiornumero){
            maiornumero = numeros[i];

        }
    }
    printf("Maior:%d ",maiornumero);

 
    

}