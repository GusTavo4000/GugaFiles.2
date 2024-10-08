#include <iostream>
using namespace std;

int hash_aux(int k, int m){
	
	int resto;
	
	resto = k % m;
	
	if (resto < 0){
		resto = resto + m;
	}
	return resto;
}


int main()
{
	int k;
	int m;
	int f;
	
	cin >> k >> m;
	
	while((k != 0) && (m != 0)){
		
		cin >> k >> m;
			
		f = hash_aux(k, m);
	
		cout << f << endl;
	}
	
	return 0;
}