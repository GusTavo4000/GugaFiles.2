#include <iostream>
using namespace std;

struct aluno {

	string nome;
	string curso;
	int matricula;

};

int main()
{
	
	aluno pessoas[50];
	
	int n;
	int i;	
	string consultado;
	int cont = 0;
	
	cin >> n;
	cin.ignore();
	
	for (i = 0; i < n; i++){
		
		getline(cin, pessoas[i].nome);
		getline(cin, pessoas[i].curso);
		cin >> pessoas[i].matricula;
		cin.ignore();
		
	}
	
	getline(cin, consultado);
	
	for(i = 0; i < n; i++){
		
		if (consultado == pessoas[i].nome){
			
			cout << pessoas[i].nome << endl;
			cout << pessoas[i].curso << endl;
			cout << pessoas[i].matricula << endl;
			cont++;
			
		}
	}
	
	if (cont == 0){
	   
	    cout << "Aluno nao localizado" << endl;
	    
	}

	
	return 0;
}