#include <iostream>
using namespace std;

struct info
{

	int k;
	int status;

};


int hash_aux(int k, int m)
{

	int resultado = k % m;

	if (resultado < 0)
	{
		resultado += m;
	}

	return resultado;
}

int hash1(int k, int i, int m)
{

	return (hash_aux(k, m) + i) % m;

}

int hash_insert(info T[], int m, int k)
{

	int i = 0;
	int j;

	

	do
	{
		j = hash1(k, i, m);

		if (T[j].status != 1)
		{
			T[j].k = k;
			T[j].status = 1;

			return j;
		}

		else
		{
			i = i + 1;
		}

		
	}while (i != m);

	return -1;
}

int main()
{

	int m;
	int k;
	int i = 0;
	
	info T[20];
	
	cin >> m;

	cin >> k;
	i++;

	for(i = 0; i < m; i++)
	{

		T[i].k = -1;
		T[i].status = 0;
	}

	while (k != 0)
	{

		hash_insert(T, m, k);
		cin >> k;

	}


	for (i = 0; i < m; i++)
	{

		cout << T[i].k << " ";
	}

	return 0;
}
