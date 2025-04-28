#include <iostream>
using namespace std;

int main(){

    int operacao;
    float n1;
    float n2;
    bool continu = true;

    while (continu){
        cout << "================ CALCULADORA =================" << endl;
        cout << "1 - SOMA " <<endl;
        cout << "2 - SUBTRAÇÃO " <<endl;
        cout << "3 - MULTIPLICAÇÃO " <<endl;
        cout << "4 - DIVISÃO " <<endl;
        cout << "0 - SAIR " <<endl;


        cout <<"Digite o número da operação: " <<endl;
        cin >> operacao;
        cout <<"Digite o primeiro número: " <<endl;
        cin >> n1;
        cout <<"Digite o segundo número: " <<endl;
        cin >> n2;
        
        if (operacao == 1){
            cout << "O resultado da soma é: " << n1 + n2 <<endl;
        }
        if (operacao == 2){
            cout << "O resultado da subtração é: " << n1 - n2 <<endl;
        }
        if (operacao == 3){
            cout << "O resultado da multiplicação é: " << n1 * n2 <<endl;
        }
        if (operacao == 4){
            if (n2 == 0){
                cout << "Não é possível dividir por zero" <<endl;
            }
            else
            cout << "O resultado da divisão é: " << n1 / n2 <<endl;
        }
        if (operacao == 0){
            cout << "Você escolheu sair " <<endl;
            continu = false;

        }


    }



}