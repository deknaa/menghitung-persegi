// Created by Dekna
#include <iostream>
using namespace std;

int main() {

// Luas Persegi : L = S x S
// Keliling Persegi : K = 4 x S 	
	
	int pilihan, sisi1, sisi2;
	
	cout << "--- Silahkan Pilih ---" << endl;
	cout << "1. Hitung Luas Persegi\n";
	cout << "2. Keliling Persegi\n";
	cout << "----------------------" << endl;
	
	cout << "Masukan pilihan anda : " << endl;
	cin >> pilihan;
	
	if(pilihan == 1) {
		cout << "--- Menghitung Luas Persegi ---\n";
		cout << "Masukan sisi pertama :\n";
		cin >> sisi1;
		cout << "Masukan sisi kedua :\n";
		cin >> sisi2;
		cout << "Luas Persegi adalah : " << sisi1*sisi2;
	}else if(pilihan == 2){
		cout << "--- Menghitung Keliling Persegi ---\n";
		cout << "Masukan sisi : \n";
		cin >> sisi1;
		cout << "Keliling persegi adalah :" << 4*sisi1;
	}else{
		cout << "Input yang anda masukan salah!";
	}	
	
}
