#include <iostream>
using namespace std;
void main()
{
	int n;
	cout << "Nhap so nguyen n: "; cin >> n; cin.ignore();
	if (n % 2 == 0)cout << "\nSo ban vua nhap la " << n << ", la 1 so chan.";
	else cout << "\nSo ban vua nhap la " << n << ", la 1 so le.";
	cin.get();
}