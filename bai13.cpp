#include <iostream>
using namespace std;
void main()
{
	int n;
	float i, S = 0, T = 0;
	cout << "nhap n = "; cin >> n; cin.ignore();
	for (i = 1; i <= n; i++)
	{
		T += i;
		S += 1 / T;
	}
	cout << "Ket Qua S = " << S;
	cin.get();
}