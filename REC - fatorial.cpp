#include <iostream>
using namespace std;

int fatorial (int n){

	if (n == 0){
		return 1; // condição de parada
	}
	else {
		return n*fatorial(n -1); // chamada recursiva
	}
}

int main()
{
	int num;
	int func;
	
	cin >> num;
	
	func = fatorial(num);
	
	cout << "opa: " << func << endl;
	
	return 0;
}