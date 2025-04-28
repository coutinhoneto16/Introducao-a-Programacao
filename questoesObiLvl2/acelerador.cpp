#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int sensor1,sensor2,sensor3,distancia;
    cin >> distancia;

    sensor1=4;
    sensor2=5;
    sensor3=6;
    distancia = distancia - 2;


    for (int i = 4; i <= distancia; i+=8){
        if (distancia == sensor1){
            printf("1");
            break;
        }else if(distancia == sensor2){
            printf("2");
            break;
        }else if(distancia == sensor3){
            printf("3");
            break;
        }

        sensor1 +=8;
        sensor2 +=8;
        sensor3 +=8;


    }
}