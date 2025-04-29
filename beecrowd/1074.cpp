#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n,x;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		if (x == 0 ){
			printf("NULL\n");
		}else if (x >0 && x %2 == 0){
			printf("EVEN POSITIVE\n");
		}else if (x > 0 && x %2 != 0){
			printf("ODD POSITIVE\n");
		}else if (x < 0 && x%2 == 0){
			printf("EVEN NEGATIVE\n");
		}else{
			printf("ODD NEGATIVE\n");
		}
	}
}
