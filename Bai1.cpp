#include <iostream>
using namespace std;
void main()
{
	float x, y;
	cout << "Nhap x, y: "; cin >> x >> y; cin.ignore();
	cout << "\n\tx + y = " << x + y << "\n\n\tx - y = " << x - y << "\n\n\tx * y = " << x*y << "\n\n\tx / y = " << x / y;
	cin.get();
}