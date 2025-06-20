#include <iostream>
#include <cstdio>

using namespace std;

void matriz (char M[][5], const int linhas, const int colunas){

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){

            if (M[i][j] == '0'){
                M[i][j] = ' ';

            } else if (M[i][j] == '1'){
                M[i][j] = 'M';

            } else if (M[i][j] == '2'){
               M[i][j] = 'T';

            }
        }
    }

}

void imprimirMatriz (char M[][5], const int linhas, const int colunas){
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                printf("%c ", M[i][j]);
        }
        printf("\n");

}
}

int main(){
    int n = 4;
    int o = 5;
    char M[4][5] = {
        {'0','0','0','0','0'},
        {'0','0','0','0','0'},
        {'0','1','0','0','0'},
        {'2','2','0','2','0'}

    };

    matriz(M, n, o);
    imprimirMatriz (M,n,o);

}