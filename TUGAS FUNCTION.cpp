#include <iostream>
#include <cmath>
using namespace std;

//Persegi
void hitungPersegi(int sisi) {
	int luas = sisi * sisi;
	int keliling = 4 * sisi;
	cout << "Luas Persegi: " << luas << endl;
	cout << "Keliling Persegi: " << keliling << "\n" << endl;
}

//Persegi panjang
void hitungpersegiPanjang(int panjang, int lebar) {
	int luas = panjang * lebar;
	int keliling = 2 * (panjang + lebar);
	cout << "Luas Persegi Panjang: " << luas << endl;
	cout << "Keliling Persegi Panjang: " << keliling << "\n" << endl;
}

//Segitiga siku-siku
void hitungsegitigaSikuSiku(double alas, double tinggi) {
	double luas = 0.5 * alas * tinggi;
	double keliling = alas + tinggi + sqrt(alas * alas + tinggi * tinggi);
	cout << "Luas Segitiga Siku-Siku: " << luas << endl;
	cout << "Keliling Segitiga Siku-Siku: " << keliling << "\n" << endl;
}

//Lingkaran
void hitunglingkaran(double JariJari) {
	const double Phi = 3.14;
	double luas = Phi * JariJari * JariJari;
	double keliling = 2 * Phi * JariJari;
	cout << "Luas Lingkaran: " << luas << endl;
	cout << "Keliling Lingkaran: " << keliling << "\n" << endl;
}

int main() {
	double sisi, panjang, lebar, alas, tinggi, JariJari;

	//Input dan Output Persegi
	cout << "Masukkan sisi persegi: ";
	cin >> sisi;
	hitungPersegi(sisi);

	//Input dan Output Persegi panjang
	cout << "Masukkan panjang persegi panjang: ";
	cin >> panjang;
	cout << "Masukkan lebar persegi panjang: ";
	cin >> lebar;
	hitungpersegiPanjang(panjang, lebar);

	//Input dan Output Segitiga siku-siku
	cout << "Masukkan alas segitiga siku-siku: ";
	cin >> alas;
	cout << "Masukkan tinggi segitiga siku-siku: ";
	cin >> tinggi;
	hitungsegitigaSikuSiku(alas, tinggi);

	//Input dan Output Lingkaran
	cout << "Masukkan jari-jari lingkaran: ";
	cin >> JariJari;
	hitunglingkaran(JariJari);

	return 0;
}