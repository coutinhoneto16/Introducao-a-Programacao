#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int x[100]={};
	int maior=0, posmaior;
	
	for (int i = 0; i < 100; i++){
		cin >> x[i];
		
		if(x[i]> maior){
			maior = x[i];
			posmaior = i;
		}
	}
	
	printf("%d\n",maior);
	printf("%d\n", posmaior+1);	
}
