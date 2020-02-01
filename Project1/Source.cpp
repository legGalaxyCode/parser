#include<iostream>
#include<cmath>
#include<fstream>
#include<ctime>
using namespace std;

//a = rows
//b = cols

void fix(int a, int b) {
	int** arr = new int* [a];
	for (int i = 0; i < a; i++)
	{
		arr[i] = new int[b];
	};
	
	for (int i,c = 0; c < b; i++) {
		if (i = (a - 1)) {
			i = 0;
			c++;
		};
		cout << arr[i][c] << endl;
	};

	for (int i = 0; i < a; i++)
	{
		delete[] arr[i];
	};
	delete[] arr;
}

int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int a = rand()%10;
	while (a == 0) {
		a = rand() % 10;
	};

	int b = rand()%10;
	while (b == 0)
	{
		b = rand() % 10;
	};

	cout << a << endl << b << endl;
	fix(a, b);
	return NULL;
}