/*
NAMA	: Nazhmi Fadhila
NIM		: 2102411005
ANGGOTA KELOMPOK:
- Bagus Bayu Wijaya
- NIM : 2102411011
- Wisnu Fajar Nugroho
- NIM : 2102411024
- Abid Akmal
- NIM : 2102411025
- Satria Gymnastiar
- NIM : 2102411028
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	
	
	int inputUser, inputTemp, meltingPoint=0, boilingPoint=0;
	string elementNumber[5] = {"Nickel", "Mercury", "Radium", "Lithium", "Argon"};
	string namaFase;
	enum elementFase {Padat, Cair, Gas};
	
	elementFase Fase;
	
	struct elementProperties {
		float meltingPoint;
		float boilingPoint;
	};
	
	elementProperties Nickel, Mercury, Radium, Lithium, Argon;
		
	Nickel.meltingPoint = 1453;
	Nickel.boilingPoint = 2913;

	Mercury.meltingPoint = -38.72;
	Mercury.boilingPoint = 357;
	
	Radium.meltingPoint = 700;
	Radium.boilingPoint = 1737;
	
	Lithium.meltingPoint = 180.7;
	Lithium.boilingPoint = 1342;
	
	Argon.meltingPoint = -189.19;
	Argon.boilingPoint = -185.85;
	
	startAwal:
	cout<<"Pilih elemen yang akan diuji : ";
	cout<<"\n1. Nickel";
	cout<<"\n2. Mercury";
	cout<<"\n3. Radium";
	cout<<"\n4. Lithium";
	cout<<"\n5. Argon";
	cout<<"\nInput anda (1-5) : ";cin>>inputUser;
	cout<<"\nInput Suhu \370C : ";cin>>inputTemp;cout<<endl;
	
	while (cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"\nProgram Error! Masukkan input yang benar.\n\n";
		goto startAwal;
	}
				
	
	if (inputUser >= 1 && inputUser <= 5){
		if (inputUser == 1){	
		boilingPoint += Nickel.boilingPoint;
		meltingPoint += Nickel.meltingPoint;
		}

		else if (inputUser == 2){
		meltingPoint += Mercury.meltingPoint;
		boilingPoint += Mercury.boilingPoint;
		}
	
		else if (inputUser == 3){
		meltingPoint += Radium.meltingPoint;
		boilingPoint += Radium.boilingPoint;
		}
	
		else if (inputUser == 4){
		meltingPoint += Lithium.meltingPoint;
		boilingPoint += Lithium.boilingPoint;
		}
	
		else if (inputUser == 5){
		meltingPoint += Argon.meltingPoint;
		boilingPoint += Argon.boilingPoint;
		}
	}
	
	else if (inputUser > 5){
		cout<<"Input error, pilihlah antara nomor 1-5\n\n";
		goto startAwal;
	}
	
	else if (inputUser < 1){
		cout<<"Input error, pilihlah antara nomor 1-5\n\n";
		goto startAwal;
	}

	
	if (inputTemp > boilingPoint){
		Fase = Gas;
	}
	
	else if (inputTemp < meltingPoint){
		Fase = Padat;
	}
	
	else if (inputTemp > meltingPoint && inputTemp < boilingPoint){
		Fase = Cair;
	}
	
	if (Fase == 0){
		namaFase = "Padat";
	}
	
	else if (Fase == 1){
		namaFase = "Cair";
	}
	
	else if (Fase == 2){
		namaFase = "Gas";
	}
	
	cout<<elementNumber[inputUser-1]<<" berada pada fasa "<<namaFase;

	return 0;
}