// NAMA : Nazhmi Fadhila
// NIM : 2102411005

#include <iostream>
#include <string>
using namespace std;

int main (){
	float ka, dp, dp1, sa, v, br;
	int x;
	string ta;
	
	cout<<"Masukan kecepatan air (m/s) : ";cin>>ka;
	cout<<"Masukan diameter pipa (mm) : ";cin>>dp;
	dp1 = dp/1000;
	cout<<"Masukan suhu air (5\370C, 10\370C atau 15\370C) : ";cin>>sa;
	
	if (sa == 5){
		v = 1.49e-6;
	}
	
	else if (sa == 10){
		v = 1.31e-6;
	}
	
	else if (sa == 15){
		v = 1.15e-6;
	}
	
	else {
		cout<<"Suhu tidak sesuai!";
		return 0;
	}
	
	br = (ka*dp1)/v;
	
	if (br < 2000){
		x = 1;
	}
	
	else if (br > 3000){
		x = 2;
	}
	
	else if (2000 < br < 3000){
		x = 3;
	}
	
	switch (x){
		case 1:
		ta = "Laminar";
		break;
		case 2:
		ta = "Turbulen";
		break;
		case 3:
		ta = "Transisi";
		break;
		default:
		return 0;
	}
	
	cout<<"Bilangan Reynold : "<<br<<endl;
	cout<<"Tipe Aliran : "<<ta<<endl;
	return 0;
}