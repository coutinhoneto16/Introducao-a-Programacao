//Criando um sistema de gerenciamento de alunos básico.

#include <iostream>
#include <cstdio>
using namespace std;


const int alunos = 100;   

int matricula[alunos];
string nome[alunos];
int idade[alunos];
int turma[alunos];
int totalAlunos = 0;

void adicionarAluno(){ //função para adicionar aluno
    if (totalAlunos >= alunos){
        printf("Limite total de alunos atingido.");
    }

    printf("Matrícula: ");
    cin >> matricula[totalAlunos];
    cin.ignore();
    printf("Nome: ");
    getline(cin, nome[totalAlunos]);
    printf("Idade: ");
    cin >> idade[totalAlunos];
    printf("Turma: ");
    cin >> turma[totalAlunos];

    totalAlunos ++;
    printf("Aluno cadastrado!\n");
}

void listarAlunos(){ //função para listar alunos
    if (totalAlunos == 0){
        printf("Não há alunos para serem listados \n");
    }else{
        printf("Lista de alunos matriculados: \n");
        
        for (int i = 0; i < totalAlunos; i++){
            printf("Nome: %s\n",nome[i].c_str());
            printf("Matricula: %d\n",matricula[i]);
            printf("Idade: %d\n",idade[i]);
            printf("Turma: %d\n",turma[i]);
        }

    }
}

void removerAluno(){  //função para remover alunos
    printf("Insira a matrícula do aluno que você deseja remover: ");
    
    int matric;
    cin >> matric;
    
    for (int i = 0; i < totalAlunos; i++){ //buscando matricula em totalAlunos
        if (matric == matricula[i]){ //comparando a matricula com as do vetor
            for(int j = i; j < totalAlunos - 1; j++){ 
                matricula[j] = matricula [j + 1];
                nome[j] = nome[j + 1];
                idade[j] = idade[j + 1];
                turma[j] = turma[j + 1];
            }
        totalAlunos -- ;
        printf("Aluno removido com sucesso!\n");
    }else{
        printf("Aluno não encontrado!\n");
    }
    }

}


void buscarAluno(){ //função para encontar um aluno com a matrícula
    
    printf("Insira a matrícula que deseja buscar: \n");
    int mat;
    cin >> mat;
    
    for (int i = 0; i < totalAlunos; i++){    //buscando aluno no vetor totalAlunos
        if (mat == matricula[i]){  
            printf("Aluno encontrado! \n");
            printf("Nome: %s\n",nome[i].c_str());
            printf("Matricula: %d\n",matricula[i]);
            printf("Idade: %d\n",idade[i]);
            printf("Turma: %d\n",turma[i]);
        }else{
            printf("Aluno não encontrado! \n");
        }
    }
}

int main(){
    int opcao;
    
    do{
        printf("============= PÁGINA INICIAL =============\n");
        printf("Escolha uma operação: \n");
        printf("1 - Adicionar aluno \n");
        printf("2 - Listar aluno \n");
        printf("3 - Remover aluno \n");
        printf("4 - Buscar aluno \n");
        printf("5 - Sair do programa \n");

        cin >> opcao;

        switch (opcao){
            case 1:
                adicionarAluno();
                break;
            
            case 2:
                listarAlunos();
                break;

            case 3:
                removerAluno();
                break;

            case 4:
                buscarAluno();
                break;

            case 5:
                char escolha;
                printf("Tem certeza?\n");
                printf("[S]im   [N]ao\n");
                cin >> escolha;
                if (escolha == 'S' or escolha == 's'){
                    printf("Saindo! \n");
                    opcao = 5;
                }else if (escolha == 'N' or escolha == 'n'){
                    printf("Retornando a tela inicial\n");
                    opcao = 0;
                }else{
                    printf("Digite um valor válido \n");
                }
                break;


            default:
            printf("Digite um número válido! \n");
        }
    } while (opcao != 5);


    }
    



