#include <iostream>
using namespace std;
void main()
{
	int n, i;
	cout << "nhap n = "; cin >> n; cin.ignore();
	float S = 0, T = 0, M = 1;
	for (i = 1; i <= n; i++)
	{
		T = T + i;
		M = M*i;
		S = S + T / M;
	}
	cout << "Ket Qua S = " << S;
	cin.get();
}