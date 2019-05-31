/*
Escrever um programa que cadastre o nome, a matr�cula e duas notas de v�rios
alunos. Em seguida imprima a matr�cula, o nome e a m�dia de cada um deles.
*/

#include <stdio.h>

// Defini��o da constate respons�vel pelo tamanho do array
#define TAM 2

// Defini��o da struct
struct cadastro {
	char nome[30];
	char mat[10];
	int nota1, nota2;
};

int main() {
	// Declara��o do registro alunos usando a struct registro
	struct cadastro alunos[TAM]; 
	int i;
	float media;
	
	// La�o respons�vel pela leitura dos valores
	printf("\n---------- Cadastro de alunos -----------\n\n\n");
	for (i=0;i<TAM;i++) {
		printf("Cadastro numero %d\n", i+1);
		printf("Insira nome..............: ");
		scanf("%s", &alunos[i].nome);
		printf("Insira a matricula.......: ");
		scanf("%s", &alunos[i].mat);
		printf("Insira a primeira nota...: ");
		scanf("%d", &alunos[i].nota1);
		printf("Insira a segunda nota....: ");
		scanf("%d", &alunos[i].nota2);
		printf("\n");
	}
	
	// La�o respons�vel pela impress�o dos valores
	printf("\n---------- Medias dos alunos -----------\n\n\n");
	for (i=0;i<TAM;i++) {
		printf("Matricula.....: %s\n", alunos[i].mat);
		printf("Nome..........: %s\n", alunos[i].nome);
		media = (alunos[i].nota1 + alunos[i].nota2) /2;
		printf("Media.........: %f\n", media);
		printf("\n");
	}
	
	return 0;
}
