#include<iostream>
#include<cstring>
#include<cmath>
#include<cctype>
using namespace std;


int kwadrat(int a) {
	return a * a;
	}

int main() {
		int liczba;
	cout << "podaj liczbe" << endl;
	cin >> liczba;
	cout << "kwadrat liczby wynosi" << endl;
	cout << kwadrat(liczba);


}
