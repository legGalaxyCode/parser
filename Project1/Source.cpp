#include<iostream>
#include<cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "\"(1 + x)^n >= (1 + xn)\"\n" << "������� ��� ���������� n\n";

	int counter;
	int n;
	int x;
	long int a_avg, g_avg;

	cout << "������� n:\t"; cin >> n;
	cout << "������� x:\t"; cin >> x;

	counter = 0;

	int* npos = new int[n];
	for (int i = 1; i != n; i++) {
		npos[counter] = i;
		counter += 1;
		if (counter == (n-1)) {
			counter = 0;
		};
	};

	cout << "��� x =\t" << x << " ����������� ��������� ���:\n";
	for (int i = 1; i <= n; i++) {
		a_avg = pow((1 + x), i);
		g_avg = (1 + x * i);
		cout << "��� n =\t" << i << "\t" << a_avg << ">=" << g_avg << "\n";
	};

	delete[] npos;
	return NULL;
}