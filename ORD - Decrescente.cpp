#include <iostream>
using namespace std;

void insercaoDireta(int vetor[], int tamanho)
{
	int i, j; // contadores
	int chave;
	for (j = 1; j < tamanho; j++)
	{
		chave = vetor[j];
		i = j - 1;
		while ((i >= 0) && (vetor[i] < chave))
		{
			vetor[i + 1] = vetor[i];
			i = i - 1;
		}
		vetor[i + 1] = chave;
	}
}

int main()
{
	int numeros[20];
	int aux = -1;
	int i = 0;
	int n;
	
	while (true){
		
		cin >> aux;
		
		if(aux == 0){
			break;
		}
		
		numeros[i] = aux;
		i++;
	}
	
	insercaoDireta(numeros, i);
	
	n = i;
	
	for (i = 0; i < n; i++){
		cout << numeros[i] << " ";
	}
	
	
	
	return 0;
}