/*
Eetu Salo

Harjoitus 11 (Palautus vko 43)
Muuta tehtävän 9 laskin-ohjelmaa niin, etta valikko nayttaa
seuraavalta:

VALIKKO
0. Lopetus
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos
6. Syota uudet luvut laskemista varten

Laskimella on siis mahdollista käsitellä
useita lukupareja käyttäjän toiveiden
mukaisesti. Mita tapahtuu, jos luku2 on 0?
HUOM! goto -lauseen käyttä on KIELLETTY!!!!

*/




#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int l1;
	int l2;
	int valinta=1;
	cout << "Anna luku: ";
	cin >> l1;
	cout << "Anna toinen luku: ";
	cin >> l2;

	while (valinta != 0)
	{
		cout << "VALIKKO\n0. Lopetus\n1. Summa\n2. Erotus\n3. Tulo\n4. Osamaara\n5. Jakojaannos\n6. Syota uudet luvut\n ";
		cout << "Valitse laskutoimitus: ";
		cin >> valinta;


		switch (valinta)
		{

		case 1:

			cout << "Summa (" << l1 << "," << l2 << "):";
			cout << l1 + l2 << endl;
			break;

		case 2:

			cout << "Erotus (" << l1 << "," << l2 << "):";
			cout << l1 - l2 << endl;
			break;

		case 3:

			cout << "Tulo (" << l1 << "," << l2 << "):";
			cout << l1 * l2 << endl;
			break;

		case 4 :

			cout << "Osamaara (" << l1 << "," << l2 << "):";
			cout << (float)l1 / l2 << endl;
			break;

		case 5:
			cout << "Jakojaannos (" << l1 << "," << l2 << "):";
			cout << l1 % l2 << endl;
			break;

		case 6:
			cout << "Anna uudet luvut.\n\n";
			cout << "Anna luku 1: ";
			cin >> l1;
			cout << "Anna luku 2: ";
			cin >> l2;
			break;
		}
	}
}