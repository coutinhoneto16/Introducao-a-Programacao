#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n, num1, num2;
	float result;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> num1 >> num2;
		
		if(num2 == 0){
			printf("divisao impossivel\n");
		}else{
			result = (float)num1 / (float)num2;
			printf("%.1f\n", result);
		}
	}
}
