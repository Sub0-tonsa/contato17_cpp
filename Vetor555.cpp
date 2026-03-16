/*
	Name: Vetor555.cpp
	Author: Giovanni Tonsa
	Date: 16/03/26 11:31
	Description: Programa para imprimir o conteúdo de um vetor com o 555 como interruptor
*/

//seção de importação
# include <stdio.h>

//Seção de prototipação
void interruptor(int *, int);

main()
{
	int vet[] = {102, 9, 555, 23, 56, 75, 555, 100, 555, 333, 60, 555, 24, 700, 18, 555, 56, 777, 555, 1000};
	int tam = sizeof(vet) / sizeof(int);
	puts("Conteudo do vetor: ");
	for(int i = 0; i < tam; i++)
		printf("%d | ", vet[i]);
	puts("\nConteudo com o interruptor: ");
	interruptor(vet, tam);
}

void interruptor(int *interrup, int tam)
{
	int flag = 1;
	for(int i = 0; i < tam; i++)
	{
		if (flag == 1 && interrup[i] != 555)
		{
			printf("%d | ", interrup[i]);
		}
		if (interrup[i] == 555 && flag == 1)
		{
			flag = 0;
		}
		else if (interrup[i] == 555 && flag == 0)
		{
			flag = 1;
		}
	}
}


