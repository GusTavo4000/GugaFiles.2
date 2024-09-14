#include <iostream>
using namespace std;

int binaria(int vetor[], int tamanho, int x)
{
	bool achou; // var aux p/ busca
	int baixo, meio, alto; // var aux
	baixo = 0;
	alto = tamanho - 1;
	achou = false;
	
	while ((baixo <= alto) && (achou == false)){
		
		meio = (baixo + alto) / 2;
		if (x < vetor[meio])
			alto = meio - 1;
		else if (x > vetor[meio])
			baixo = meio + 1;
		else
			achou = true;
	}
	if (achou)
		return meio;
	else
		return -1;
}

int main()
{
	
	int n;
	int i;
	int f;
	int x; // procurado
	int alunos[50];
	
	cin >> n;
	
	for (i = 0; i < n; i++){
		cin >> alunos[i];
	}
	
	cin >> x;
	
	f = binaria(alunos, i, x);
	
	if (f == -1){
		cout << "Nao localizado" << endl;
	}
	else{
		cout << "Corredor " << f << endl;
	}
	
	
	
	
	return 0;
}
