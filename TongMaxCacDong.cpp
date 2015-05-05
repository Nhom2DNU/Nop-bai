#include <iostream>
using namespace std;
void nhap(int a[][100], int &n, int &m);
void xuat(int a[][100], int n, int m);
int max(int a[][100], int n, int m, int &p, int &q);
void main()
{
	int a[100][100], n, m, p, q;
	nhap(a, n, m); xuat(a, n, m);
	cout << "\nTong = " << max(a, n, m, p, q);
	cin.ignore(); cin.get();
}
void nhap(int a[][100], int &n, int &m)
{
	cout << "nhap so dong, cot : "; cin >> n >> m;
	for (int i = 0; i < n; i++)
	for (int j = 0; j < m; j++)
	{
		cout << "a[" << i + 1 << "][" << j + 1 << "] = "; cin >> a[i][j];
	}
}
void xuat(int a[][100], int n, int m)
{
	cout << "\nDay so vua nhap:\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << "  ";
		cout << "\n\n";
	}
}
int max(int a[][100], int n, int m, int &p, int &q)
{
	int KQ = 0; p = 0; q = 0;
	cout << "so max trong cac dong:\n\n";
	for (int i = 0; i < n; i++)
	{
		int s = a[i][0];
		for (int j = 0; j < m; j++)
		{
			if (s < a[i][j])s = a[i][j]; p = i; q = j;
		}
		cout << s << "  ";
		KQ += s;
	}cout << "\n\n";
	return KQ;
}
