#include <iostream>
using namespace std;

void bubbleSort(int vetor[], int tamanho)
{
	int i, j; // contadores
	int cont = 0;
	int trab;
	bool troca;
	int limite;
	troca = true;
	limite = tamanho - 1;
	while (troca)
	{
		troca = false;
		for (i = 0; i < limite; i++)
			if (vetor[i] > vetor[i + 1])
			{
				trab = vetor[i];
				cout<<"New trab:"<< trab<<endl;
				cont++;
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = trab;
				j = i;
				troca = true;
			}
	
		limite = j;
	}
		cout << "Contador:" << cont;
}

int main ()
{

	int n;
	int vet[30];
	int i;
	
	cin >> n;
	
	for (i = 0; i<n; i++){
		cin >> vet[i];
	}
	
	bubbleSort(vet, n);
	

	return 0;
}


//cntl + shift + f formata 