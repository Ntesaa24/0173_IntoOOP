#include <iostream>
using namespace std; 

class bangunDatar {

	//akses modifier
private: 
	float panjang, Lebar; 
public : 
	float Luas; 

	void input() {	// methode input persegi panjang 

		cout << "Masukan Panjangnya = ";
		cin >> panjang;
		cout << "Masukan Lebarnya = ";
		cin >> Lebar;
	}

	float hitungluas() {
		return panjang * Lebar; 
	}

	void dispalay() {
		cout << "panjangnya = " << panjang << endl; 
		cout << "Lebarnya = " << Lebar << endl; 
		cout << "Luasnya = " << hitungluas() << endl; 



	}
};