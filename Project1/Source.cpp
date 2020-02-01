#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;



int main() {
	setlocale(LC_ALL, "Rus");
	ifstream file;
	file.open("C:\\Users\\alexe\\Documents\\My Games\\Terraria\\Worlds\\1.wld");

	if (file.is_open()) {
		cout << "Kk" << endl;
	}
	else {
		cout << "Bad" << endl;
	};

	int n = 10;
	char* buffer = new char[n + 1]; buffer[n] = 0;
	file.read(buffer, n);
	cout << buffer;
	delete[] buffer;

	return NULL;
}