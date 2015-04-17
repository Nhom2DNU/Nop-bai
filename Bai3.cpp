#include <iostream>
using namespace std;
void main()
{
	int a, b, c;
	cout << "Nhap canh AB  : "; cin >> a; cin.ignore();
	cout << "Nhap canh AC  : "; cin >> b; cin.ignore();
	cout << "Nhap canh BC  : "; cin >> c; cin.ignore();

	if (a == c&&a == b)cout << "La Tam Giac Deu";
	else if (a == b || a == c || b == c)
	{
		if (a ^ 2 + b ^ 2 == c ^ 2)cout << "La Tam Giac Can Vuong Tai A";
		else if (a ^ 2 + c ^ 2 == b ^ 2)cout << "La Tam Giac Can Vuong Tai B";
		else if (b ^ 2 + c ^ 2 == a ^ 2)cout << "La Tam Giac Can vuong Tai C";
		else if (a == b) cout << "Tam Giac Can co AB = AC";
		else if (a == c)cout << "Tam Giac Can co AB = BC";
		else cout << "Tam Giac Can co AC = CB";
	}
	else if (a ^ 2 + b ^ 2 == c ^ 2)cout << "La Tam Giac  Vuong Tai A";
	else if (a ^ 2 + c ^ 2 == b ^ 2)cout << "La Tam Giac Vuong Tai B";
	else if (b ^ 2 + c ^ 2 == a ^ 2)cout << "La Tam Giac vuong Tai C";
	else cout << "La Tam Giac Thuong";
	cin.get();
}