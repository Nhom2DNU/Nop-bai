#include <iostream>
using namespace std;
void main()
{
	int a, b, U;
	cout << "nhap a, b: "; cin >> a >> b; cin.ignore();
	if (a < b)U = a;
	else U = b;
	while (a%U || b%U)
	{
		U--;
	}
	cout << "\nBoi so chung nho nhat: " << b*a / U;
	cin.get();
}