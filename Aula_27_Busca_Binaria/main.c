#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool buscaBinaria(int v[], int tamanho_vetor, int chave){
	int inicio = 0;
	int fim = tamanho_vetor - 1;
	int meio = (inicio + fim) / 2;

	while (inicio <= fim){
                if (v[meio] == chave){
                        return true;
                } else if (v[meio] < chave){
                        inicio = meio + 1;
                } else {
                        fim = meio - 1;
                }
                meio = (inicio + fim) / 2;
        }
	
	return false;

}



int main(int argc, char *argv[]){
	int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int chave_busca = 0;
	scanf("%d",&chave_busca);

	if (buscaBinaria(vetor,10,chave_busca)){
		printf("Encontrou\n");
	}else{
		printf("Nao encontrou\n");
	}

	return 1;
}
