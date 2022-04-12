// Nama : Nazhmi Fadhila
// NIM : 2102411005

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

int main (){
	
	float v, d, D, T, vk, Re;
	string Retype;
	int num1;
	
	cout <<"Menghitung Bilangan Reynold (Group A)\n\n";
	cout <<"Masukkan nilai kecepatan air (m/s) : ";cin>>v;
	cout <<"Masukkan nilai diameter pipa (mm) : ";cin>>d;
	
	/* Konversi diameter pipa dari mm ke m */
	
	D = d/1000;
	
	cout <<"1. 5\370C\n";
	cout <<"2. 10\370C\n";
	cout <<"3. 15\370C\n";
	cout <<"Pilih suhu air (Celcius) berdasarkan nomor diatas : ";cin>>num1;
	
	cout <<"\n\nCalculating...";
	
	/* Memastikan bahwa input nilai kecepatan air tidak 0. */
	
	if (v == 0){
		cout<<"\nError. Nilai kecepatan air tidak boleh 0!";
		return 0;
	}
	
		/* Memastikan bahwa input diameter pipa tidak negatif */
	 
	else if (d <= 0){
		cout<<"\nError. Diameter pipa tidak dapat bernilai negatif!";
		return 0;
	}
	
	/* Menentukan nilai kinematic viscosity */
	
	switch (num1) {
		
		case 1:
			T = 5;
			vk = 1.49e-6;
			break;
		case 2:
			T = 10;
			vk = 1.31e-6;
			break;
		case 3:
			T = 15;
			vk = 1.15e-6;
			break;
		default:
			cout<<"\nError. Pilih antara nomor 1, 42 dan 3!";
			return 0;
	}
	
	/*
	Menghitung Bilangan Reynold
	Kecepatan air mutlak karena Bilangan Reynold tidak dapat kurang dari 0.
	*/
	
	Re = (abs(v) * D)/vk;
	
	/* Tipe dari Bilangan Reynold */
	
	if (Re < 2000){
		Retype = "Laminar";
	}
	else if (Re > 3000){
		Retype = "Turbulen";
	}
	else if (2000 < Re < 3000){
		Retype = "Transisi";
	}
	else if (Re < 0){
		cout <<"Error. Bilangan Reynold tidak dapat berupa negatif!";
		return 0;
	}
		
	/* Output */

	cout <<"\n\n\nHasil Perhitungan Bilangan Reynold\n\n";
	cout <<"Kecepatan air = "<<v<<" m/s\n";
	cout <<"Diameter pipa = "<<d<<" mm\n";
	cout <<"Diameter pipa = "<<D<<" m\n";
	cout <<"Suhu air = "<<T<<"\370C\n";
	cout <<"Kinematic viscosity = "<<vk<<" m/s^2\n";
	cout <<"Bilangan Reynold = "<<Re<<endl;
	cout <<"Tipe Aliran = "<<Retype<<endl;
	
	return 0;
}