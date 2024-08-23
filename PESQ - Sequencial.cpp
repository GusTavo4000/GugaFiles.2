#include <iostream>
using namespace std;

int sequencial(int vetor[],int tamanho, int x)
{
bool achou = false; // var aux p/ busca
int i=0; // contador
while (achou==false && i<tamanho)
achou = vetor[i++]==x;
if (achou)
return (i-1);
else
return -1;
}

int main()
{
	int n[100];
	int i = 0;
	int aux = 0;
	int pesquisado;
	int posicao;
	
	while (1){
		cin >> aux;
		if (aux == -1){
			break;
		}
		else {
			n[i] = aux;
		}
	
		i++;
	}
	
	cin >> pesquisado;
	
	posicao = sequencial(n, i, pesquisado);
	
	if (posicao == -1){
		cout << pesquisado << " nao encontrado" << endl;
	}
	else {
		cout << pesquisado << " encontrado na posicao " << posicao << endl;
	}
	
	
	return 0;
}