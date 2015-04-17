#include <iostream>
using namespace std;
void main()
{
	int n, i, S = 0,T=0;
	cout << "nhap n = "; cin >> n; cin.ignore();
	for (i = 1; i <= n; i++)
	{
		T += i;
		S += T;
	}
	cout << "\nKet Qua S = " << S;
	cin.get();
}