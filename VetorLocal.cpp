/*
	Name: VetorLocal.cpp
	Author: Giovanni Tonsa
	Date: 16/03/26 10:28
	Description: Programa pora demonstar a passagem de um vetor por parâmetro para uma função
*/

//Seção de importação de bibliotaca
# include <stdio.h>

//Seção de prototipação
void imprimirVetor(int *, int);
void imprimirAoContrario(int *, int); //referencia usar *
void somarVetores(int *, int *, int);

main()
{
	int vetor[] = {222, 100, 888, 555, 400};
	int vetor2[] = {111, 300, 112, 345, 600};
	int tam = sizeof(vetor) / sizeof(int);
	imprimirVetor(vetor, tam);
	imprimirVetor(vetor2, tam);
	imprimirAoContrario(vetor, tam);
	imprimirAoContrario(vetor2, tam);
	somarVetores(vetor, vetor2, tam);
}//Fim do programa

//função para imprimir o vetor
void imprimirVetor(int *V, int tam)
{
	puts("\nConteudo do 1 e 2 vetores: ");
	for(int i = 0; i < tam; i++)
		printf("%d | ", V[i]);
}

//Função para imprimir o vetor vetG ao contrário
void imprimirAoContrario(int *V, int tam)
{
	puts("\n\nConteudo do vetor ao contrario: ");
	for(int i = tam - 1; i >= 0; i--)
		printf("%d | ", V[i]);
}

//Função para somar os dois vetores
void somarVetores(int *V, int *V2, int tam)
{
	int VetSoma[tam];
	for(int i = 0; i < tam; i++)
		VetSoma[i] = V[i] + V2[i];
	imprimirVetor(VetSoma, tam);
}
