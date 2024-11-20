#include <iostream>
#include <list>
using namespace std;

int main()
{
	
	list <int> pilha; //"ponteiro" para pilha
	int x; //var aux
	
	x = 4;
	pilha.push_front(x);//insere x no incio da lista
	pilha.push_front(2);
	x = 3;
	pilha.push_front(x);
	x = 5;
	pilha.push_front(x);
	
	/*cout << *pilha.begin() << endl; 
	
	pilha.pop_front(); //remove o primeiro elemento da lista 
	
	cout << *pilha.begin() << endl; */
	
	while(!pilha.empty()){
		cout << *pilha.begin() << endl; //mostra o primeiro da lista
		pilha.pop_front(); //remove o primeiro elemento da lista
	}
	
	return 0;
}