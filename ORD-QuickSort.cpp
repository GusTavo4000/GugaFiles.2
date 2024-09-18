#include <iostream>
#include <cmath>
using namespace std;

void quickSort(int vetor[], int i, int j)
{
	int trab, esq, dir, pivo;
	esq = i;
	dir = j;
	pivo = vetor[(int)round((esq + dir) / 2.0)];
	do
	{
		while (vetor[esq] < pivo)
			esq++;
		while (vetor[dir] > pivo)
			dir--;
		if (esq <= dir)
		{
			trab = vetor[esq];
			vetor[esq] = vetor[dir];
			vetor[dir] = trab;
			esq++;
			dir--;
		}
	}
	while (esq <= dir);
	if (dir - i >= 0)
		quickSort(vetor, i, dir);
	if (j - esq >= 0)
		quickSort(vetor, esq, j);
}

int main() {

	int vetor[50];
	int i = 0;
	int aux;
	int n;

	cin >> aux;

	while (aux != -1) {
		vetor[i] = aux;
		i++;
		cin >> aux;
	}
	
	quickSort(vetor, 0, i-1);
	
	n = i;
	
	for (i = 0; i < n; i++){
		
		cout << vetor[i] << " ";
		
	}
	

	return 0;
}
