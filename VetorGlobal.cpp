/*
	Name: VetorGlobal.cpp
	Author: Giovanni Tonsa
	Date: 16/03/26 09:43
	Description: Programa pora implementar operações com arrays unidimensionais dentro de funções
*/

//Seção de importação de biblioteca
# include <stdio.h>

//Seção de prototipação
void imprimirVetG();
void imprimirVetGContrario();

//vetor global - variáveis globais
int vetG [] = {3, 9, 5, 8, 1};
int tam = 0;

main()
{
	tam = sizeof(vetG) / sizeof(int); //tamanho do vetor
	printf("O vetor vetG tem %d elementos", tam);
	//invoke
	imprimirVetG();
	imprimirVetGContrario();
} //Fim do programa

//função para imprimir o vetor
void imprimirVetG() 
{
	puts("\n\nConteudo do vetor vetG: ");
	for(int i = 0; i < tam; i++)
		printf("%d | ", vetG[i]);
}

//Função para imprimir o vetor vetG ao contrário
void imprimirVetGContrario()
{
	puts("\n\nConteudo do vetor VetG ao contrario: ");
	for(int i = tam - 1; i >= 0; i--)
		printf("%d | ", vetG[i]);
}
