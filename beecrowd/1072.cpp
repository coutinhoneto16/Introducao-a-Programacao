#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int casos, x,contin=0,contout=0;
	cin >> casos;
	
	for(int i = 0; i < casos; i++){
		cin >> x;
		if (x>= 10 && x<=20){
			contin ++;
		}else{
			contout++;
		}
	}
	printf("%d in\n",contin);
	printf("%d out\n",contout);
	
}
