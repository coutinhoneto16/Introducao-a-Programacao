/*
Escreva um programa que solicite ao usuário uma frase e exiba a quantidade de vogais na frase
 */

 #include <iostream>
 #include <cstdio>
 #include <string>

 using namespace std;

 int main(){
    string frase;
    getline(cin, frase);
    int vogal = 0;

    for(int i = 0; i < (int)frase.length(); i++){
        if(frase[i] == 'A' or  frase[i] == 'a'
            or frase[i] == 'E' or  frase[i] == 'e'
            or frase[i] == 'I' or  frase[i] == 'i'
            or frase[i] == 'O' or  frase[i] == 'o'
            or frase[i] == 'U' or  frase[i] == 'u'){  
            vogal += 1;
        }

    }
    printf("%d\n", vogal);

 }