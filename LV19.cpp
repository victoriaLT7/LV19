// Victoria Levaèiæ Tkalec, 1. RM

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void lv15_a();
void lv15_b();
void lv16_a();
void lv16_b();
void lv17_a();
void lv17_b();


int main()
{
	/*lv15_a();*/
	/*lv15_b();*/
	/*lv16_a();*/
	/*lv16_b();*/
	/*lv17_a();*/
	/*lv17_b();*/

	return 0;
}

void lv15_a()
{
	int b_ocjena; cout << "Unesi broj ocjena: "; cin >> b_ocjena;
	int ocjene;
	vector<int>r_1f;
	for (int i = 0; i < b_ocjena; i++)
	{
		cin >> ocjene;
		r_1f.push_back(ocjene);
	}
	vector<int>r_1g;
	for (int i = 0; i < b_ocjena; i++)
	{
		cin >> ocjene;
		r_1g.push_back(ocjene);
	}
	for (int i = 0; i < b_ocjena; i++)
	{
		if (r_1f[i] > r_1g[i]) cout << "1.F ";
		if (r_1g[i] > r_1f[i]) cout << "1.G ";
		else cout << "ISTO ";
	}
}

void lv15_b()
{
	int n; cout << "Unesi broj natjecatelja: "; cin >> n;
	int k; cout << "Unesi mjesto Patrika: "; cin >> k;
	int upis;
	vector<int>bodovi;

	for (int i = 0; i < n; i++)
	{ 
		cin >> upis;
		bodovi.push_back(upis);
		
	}
	for (int i = 0; i < n; i++)
	{
		if (bodovi[i] > bodovi[k - 1]) cout << i + 1 << " ";
	}
}

void lv16_a()
{
	int petice = 0, ocjene = 0;
	float prosjek = 0;
	vector<string>mj(10, "");
	vector<vector<int>>tablica(3, vector<int>(10, 0));

	for (int i = 0; i < 10; i++) cin >> mj[i];
	for (int i = 0; i < 3; i++) { for (int j = 0; j < 10; j++) cin >> tablica[i][j]; }
	for (int i = 0; i < 10; i++)
	{
		cout << mj[i] << " ";
		for (int j = 0; j < 3; j++)
		{
			if (tablica[j][i] != 0) { cout << tablica[j][i]; ocjene++; prosjek += tablica[j][i]; }
			if (tablica[j][i] = 5) petice++;
		}
		cout << endl;
	}

	cout << "Broj pezica: " << petice << endl;
	prosjek = prosjek / ocjene;
	cout << "Prosjek: " << prosjek;

	if (prosjek < 1.5) cout << " - nedovoljan";
	else if (prosjek < 2.5) cout << " - dovoljan";
	else if (prosjek < 3.5) cout << " - dobar";
	else if (prosjek < 4.5) cout << " - vrlo dobar";
	else cout << " - odlican";
}
void lv16_b()
{
	vector<string>dani(10, "");
	vector<string> predmeti(3, "");
	vector<vector<float>>tablica(3, vector<float>(7, 0));
	float ukupno = 0, psati = 168, dsati = 168, b1;
	string predmet = ""; string dan = "";

	for (int i = 0; i < 7; i++) {
		cin >> dani[i];
	}

	for (int i = 0; i < 3; i++) {
		b1 = 0;
		cin >> predmeti[i];
		for (int j = 0; j < 7; j++) {
			cin >> tablica[i][j];
			ukupno += tablica[i][j];
			b1 += tablica[i][j];
		}
		if (b1 < psati) {
			predmet = predmeti[i];
			psati = b1;
		}
	}

	for (int i = 0; i < 7; i++) {
		b1 = 0;
		for (int j = 0; j < 3; j++) {
			b1 += tablica[j][i];
		}
		if (b1 < dsati) {
			dan = dani[i];
			dsati = b1;
		}
	}

	cout << "Ukupno je ucio " << ukupno << " sati.\n";
	cout << "Najmanje je ucio " << predmet << " i to " << psati << " sati.\n";
	cout << "Najmanje je ucio u " << dan << " i to " << dsati << " sati.\n";
}