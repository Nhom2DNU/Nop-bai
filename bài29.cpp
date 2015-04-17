#include <iostream>
using namespace std;
void main()
{
	float a, b, c, d;
	cout << "nhap a, b, c : "; cin >> a >> b >> c; cin.ignore();
	if (a!=0)
	{
		d = b*b - 4 * a*c;
		if (d == 0)
		{
				cout << "\npt co nghiem kep \n\n\tx = " << -b / (2 * a);
		}
		if (d < 0) cout << "\npt vo nghiem.";
		if (d > 0)
		{ 
			cout << "\nnghiem pt co 2 nghiem \n\n\tx1 = " << (-b + sqrt(d)) / (2 * a) << "\n\n\tx2 = " << (-b - sqrt(d)) / (2 * a);
		}
		
	}
	if (a=0)
	{
		if (b = 0)
		{
			if (c = 0)cout << "\nPhuong co vo so nghiem.";
			else cout << "\nPT vo nghiem.";
		}
		else cout << "\nnghiem la \n\n\tx = " << -c / b;
	}
	cin.get();
}