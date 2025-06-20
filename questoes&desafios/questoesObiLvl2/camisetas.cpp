#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int qtdVencedores, camisasProduzidas, camisasMproduzidas;
    int qtdCamisasP =0, qtdcamisasM =0;

    cin >> qtdVencedores; 
    
    for (int i = 0; i < qtdVencedores; i++){   

        int tamanho;
        cin >> tamanho;

        if (tamanho == 1){
            qtdCamisasP += 1;

    }   else if (tamanho == 2)  {
            qtdcamisasM += 1;
            
    }   else{
            printf("Digite um tamanho de camisa válido!");
    }
    
}
cin >> camisasProduzidas >> camisasMproduzidas;


if (qtdcamisasM == camisasMproduzidas ){
    if(qtdCamisasP == camisasProduzidas){
        printf("S");
    }else{
        printf("N");
    }
}else{
    printf("N");
}

}

