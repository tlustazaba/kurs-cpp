#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char imie[20], nazwisko[20];

	cout << "podaj imie " << endl;
	cin >> imie;
	cout << "podaj nazwisko" << endl;
	cin>>nazwisko;
	cout << strcat (imie , nazwisko);

	return 0;
}
