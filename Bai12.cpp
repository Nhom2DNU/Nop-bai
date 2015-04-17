#include <iostream>
using namespace std;
void main()
{
	int n;
	float S = 0,i;
	cout << "nhap n = "; cin >> n; cin.ignore();
	for (i = 1; i <= n; i++)
	{
		S = S + 1 / i;
	}
	cout << "\nKet Qua S = " << S;
	cin.get();
}