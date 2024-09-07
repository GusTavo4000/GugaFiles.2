#include <iostream>
using namespace std;

int binaria(int vetor[],int tamanho, int x)
{
bool achou; // var aux p/ busca
int baixo, meio, alto; // var aux
baixo = 0;
alto = tamanho-1;
achou = false;
while ((baixo <= alto) && (achou == false))
{
meio = (baixo + alto) / 2;
if (x < vetor[meio])
alto = meio - 1;
else
if (x > vetor[meio])
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
	
	int n[20];
	int i = 0;
	int id;
	int idpesquisa;
	int aux;
	
	while (1){
        cin >> aux;
        if (aux == -1) {
            break;
        }
        n[i] = aux;
        i++;
    }

	cout << "acabou" << endl;
	cin >> idpesquisa;
	
	id = binaria(n, i, idpesquisa);
	
	if (id == -1){
		cout << "Nao possui acesso" << endl;
	}
	else {
		cout << "Possui acesso" << endl;
	}
	
	return 0;
}