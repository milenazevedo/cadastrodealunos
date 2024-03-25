#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAX 10

typedef struct aluno{
	char nome[50];
	int rgm;
}Aluno;

typedef struct alunos{
	Aluno vetor[MAX];
	int n;
}Alunos;

Alunos criar() {
	Alunos alunos;
	
	alunos.n = -1;
	
	return alunos;
}

int isVazia(Alunos * alunos) {
	return (alunos->n == -1);
}

int isCheia(Alunos * alunos) {
	return (alunos->n == MAX-1);
}

int getTamanho(Alunos * alunos) {
	return alunos->n + 1;
}

int lerNumero() { 
    int numero;
    while (scanf("%d", &numero) != 1) {
        printf("\n Opção inválida! Digite um número válido: \n ");
        while (getchar() != '\n');
    }
    return numero;
}

int main (int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	Alunos meusalunos;
	
	meusalunos = criar();
	
	
	int numero = 0;
	
	system("cls");
	printf("\n\t\n\n");
	printf("1. Cadastrar alunos\n");
	printf("2. Listar alunos\n");
	printf("3. Buscar alunos\n");
	printf("4. Sair\n\n");
	printf("Digite o número da opção que deseja: ");
	numero = lerNumero();
	
	switch(numero){
		case 1:{
			printf("Cadastrar aluno: ");
			break;
		}
		case 2:{
			("Listar alunos: ");
			break;
		}
		case 3:{
			printf("Buscar alunos: ");
			break;
		}
		default:{
			printf("Opção inválida!");
			break;
		}
	}
	
}
