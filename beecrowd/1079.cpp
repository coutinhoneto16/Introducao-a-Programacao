#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	cin >> n;
	float media, nota1, nota2, nota3;
	
	for(int i =0; i < n; i++){
		cin >> nota1 >> nota2 >> nota3;
		media = ((nota1*2) + (nota2*3) + (nota3*5)) / 10;
		printf("%.1f\n", media);
		
	}	
}
