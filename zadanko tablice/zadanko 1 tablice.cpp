#include<cstring>
#include<iostream>
#include<cctype>


using namespace std;


int main() {
	int tablica[10];
	int suma=0;

	cout << "podaj 10 liczb" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "liczba" << i + 1 << "; " << endl;
		cin>> tablica[i];
		suma = suma + tablica[i];
	}
	cout << "suma liczb" << suma;
	return 0;
}
