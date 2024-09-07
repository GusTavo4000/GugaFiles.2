#include <iostream>
using namespace std;

int potencia (int a, int n){
	
	if (n == 0){
		return 1;
	}
		return a * potencia( a, n-1 );
	}


int main (){
	
	int a, n;
	int f;
	
	cin >> a >> n;
	
	f = potencia(a, n);
	
	cout << f << endl;
	

	return 0;
}