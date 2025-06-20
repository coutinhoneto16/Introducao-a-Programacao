#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <iostream>

using namespace std;

int main(){

    int clima [5][7];
    int poluicao [5][7];
    int trafego [5][7];

    srand(time(0));


    for(int i=0; i<5; i++){
        for(int j=0; j<7; j++){
            clima[i][j] = rand() % 36 + 5;
            poluicao[i][j] = rand() % 401 + 200;
            trafego[i][j] = rand() % 101 + 0;
        }
    }

    int bairroQuente = 0;
    double mediaTemp[5];
    double maiorMedia = 0; 

    for(int i = 0; i < 5; i++){ //maior media de temperatura e bairro mais quente
        int soma = 0;
        for (int j = 0; j < 7; j++){
            soma += clima[i][j];
        }
            mediaTemp[i] = soma/7.0;
                    
            if(mediaTemp[i] > maiorMedia){
                maiorMedia = mediaTemp[i];
                bairroQuente = i;
            }
        }


    int maiorPoluicao = 0;
    int diaMaiorPoluicao = 0;
    int bairroMaiorPoluicao = 0;

    for(int i = 0; i < 5; i++){ //dia e bairro com maior poluição e poluição
            for (int j = 0; j < 7; j++){
         
                if(poluicao[i][j] > maiorPoluicao){
                maiorPoluicao = poluicao [i][j];
                diaMaiorPoluicao = j;
                bairroMaiorPoluicao = i;
                }
                }
            }


    double mediaTrafego[5];
    int maiorTrafego = 0;
    int bairroMaiorTrafego = 0;

    for(int i = 0; i < 5; i++){ //media semanal de trafego e bairro com maior trafego
        int somaTrafego = 0;
        for (int j = 0; j < 7; j++){
            somaTrafego += trafego[i][j];
         
            if(trafego[i][j] > maiorTrafego){
                maiorTrafego = trafego [i][j];
                bairroMaiorTrafego = i;
            }

            mediaTrafego[i]= somaTrafego / 7.0;
            }
        }

//tabela da temperatura
    printf("Temperaturas (C°):\n");
    printf("Bairro ");
    for(int i = 1; i<=7; i++){ 
            printf("Dia %-3d",i);
        }
    printf("\n");
     
    for (int i = 0; i < 5; i++){
        printf("%3d", i+1);
        for (int j = 0; j < 7; j++){
            printf("%7d", clima[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    

//tabela da poluição
    printf("Poluicao (ppm CO²):\n");
    printf("Bairro ");
    for(int i = 1; i<=7; i++){ 
            printf("Dia %-3d",i);
        }
    printf("\n");
     
    for (int i = 0; i < 5; i++){
        printf("%3d", i+1);
        for (int j = 0; j < 7; j++){
            printf("%7d", poluicao[i][j]);
        }
        printf("\n");
    }
printf("\n\n");
   

//tabela de trafego
    printf("Trafego (%%):\n");
    printf("Bairro ");
    for(int i = 1; i<=7; i++){ 
            printf("Dia %-3d",i);
        }
    printf("\n");
     
    for (int i = 0; i < 5; i++){
        printf("%3d", i+1);
        for (int j = 0; j < 7; j++){
            printf("%7d", trafego[i][j]);
        }
        printf("\n");
    } 
    printf("\n\n");


    printf ("=== Relatório de Analise da Semana ===\n");
    printf("\n");
    printf ("1. Media semanal da temperatura:\n\n");

//printf da média semanal de temperatura
    for (int i = 0; i < 5; i++){
        printf("  - Bairro %d: %.1f graus\n", i+1, mediaTemp[i]);
    }
    printf("\n");
    //printf do bairro mais quente
    printf("2. Bairro mais quente da semana: Bairro %d, com %.1f graus. \n\n", bairroQuente+1, mediaTemp[bairroQuente]);

    string diaSemana;
    //print dia com maior poluição 
    if (diaMaiorPoluicao == 0){
        diaSemana = "Domingo";
    }else if (diaMaiorPoluicao == 1){
        diaSemana = "Segunda-Feira";
    }else if (diaMaiorPoluicao == 2){
        diaSemana = "Terça-Feira";
    }else if (diaMaiorPoluicao == 3){
        diaSemana = "Quarta-Feira";
    }else if (diaMaiorPoluicao == 4){
        diaSemana = "Quinta-Feira";
    }else if (diaMaiorPoluicao == 5){
        diaSemana = "Sexta-Feira";
    }else if (diaMaiorPoluicao == 6){
        diaSemana = "Sábado";
    }

    printf("3. Dia com maior poluicao: %s no bairro %d, com %d ppm CO².\n\n",diaSemana.c_str(), bairroMaiorPoluicao+1,maiorPoluicao);

    //print media semanal de trafego:
    printf("4. Média semanal de trafego:\n\n");
    for (int i = 0; i < 5; i++){
        printf("  - Bairro %d: %.1f%%\n", i+1, mediaTrafego[i]);
    }
    printf("\n");

    printf("5. Bairro com maior tráfego registrado: Bairro %d, com %d%% de tráfego acumulado.", bairroMaiorTrafego+1, maiorTrafego);
    }