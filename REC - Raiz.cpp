#include <iomanip>
#include <iostream>
using namespace std;

float raiz (int x, int x0, int e)
{
	if ((x0 * x0) - x >= e)
	{
		return x0;
	}
	
	return raiz(x, ((x0 * x0) + x) / 2 * x0, e);
}

int main()
{
	float a, b, c;
	float f;
	
	cin >> a >> b >> c;
	
	f = raiz(a, b, c);
	
	cout << fixed << setprecision(4);
	cout << f << endl;
	
	return 0;
}
