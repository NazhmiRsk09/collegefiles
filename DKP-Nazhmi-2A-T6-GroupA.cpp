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
	
	int inputUser, inputTemp;
	string elementNumber[5] = {"Nickel", "Mercury", "Radium", "Lithium", "Argon"};
	enum elementFase {Padat, Cair, Gas};
	struct elementProperties {
		float meltingPoint;
		float boilingPoint;
		elementFase materialFase;
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
	
	cout<<"Pilih elemen yang akan diuji : ";
	cout<<"\n1. Nickel";
	cout<<"\n2. Mercury";
	cout<<"\n3. Radium";
	cout<<"\n4. Lithium";
	cout<<"\n5. Argon";
	InputStart:
	cout<<"\nInput anda (1-5) : ";cin>>inputUser;
	cout<<"\nInput Suhu \370C : ";cin>>inputTemp;cout<<endl;
	
	switch (inputUser){
		case 1:
		
			if (inputTemp < Nickel.meltingPoint){
				Nickel.materialFase = Padat;
			}
			else if (inputTemp > Nickel.boilingPoint){
				Nickel.materialFase = Gas;
			}
			else {
				Nickel.materialFase = Cair;
			}
			
			cout<<elementNumber[0]<<" berada pada fasa ";
			
			if (Nickel.materialFase == 0){
				cout<<"Padat";
			}
			else if (Nickel.materialFase == 1){
				cout<<"Cair";
			}
			else if (Nickel.materialFase == 2){
				cout<<"Gas";
			}
			break;
		
		case 2:
		
			if (inputTemp < Mercury.meltingPoint){
				Mercury.materialFase = Padat;
			}
			else if (inputTemp > Mercury.boilingPoint){
				Mercury.materialFase = Gas;
			}
			else {
				Mercury.materialFase = Cair;
			}
			
			cout<<elementNumber[1]<<" berada pada fasa ";
			
			if (Mercury.materialFase == 0){
				cout<<"Padat";
			}
			else if (Mercury.materialFase == 1){
				cout<<"Cair";
			}
			else if (Mercury.materialFase == 2){
				cout<<"Gas";
			}
			break;
		
		case 3:
		
			if (inputTemp < Radium.meltingPoint){
				Radium.materialFase = Padat;
			}
			else if (inputTemp > Radium.boilingPoint){
				Radium.materialFase = Gas;
			}
			else {
				Radium.materialFase = Cair;
			}
			
			cout<<elementNumber[2]<<" berada pada fasa ";
			
			if (Radium.materialFase == 0){
				cout<<"Padat";
			}
			else if (Radium.materialFase == 1){
				cout<<"Cair";
			}
			else if (Radium.materialFase == 2){
				cout<<"Gas";
			}
			break;	
		
		case 4:
		
			if (inputTemp < Lithium.meltingPoint){
				Lithium.materialFase = Padat;
			}
			else if (inputTemp > Lithium.boilingPoint){
				Lithium.materialFase = Gas;
			}
			else {
				Lithium.materialFase = Cair;
			}
			
			cout<<elementNumber[3]<<" berada pada fasa ";
			
			if (Lithium.materialFase == 0){
				cout<<"Padat";
			}
			else if (Lithium.materialFase == 1){
				cout<<"Cair";
			}
			else if (Lithium.materialFase == 2){
				cout<<"Gas";
			}
			break;
		
		case 5:
		
			if (inputTemp < Argon.meltingPoint){
				Argon.materialFase = Padat;
			}
			else if (inputTemp > Argon.boilingPoint){
				Argon.materialFase = Gas;
			}
			else {
				Argon.materialFase = Cair;
			}
			
			cout<<elementNumber[4]<<" berada pada fasa ";
			
			if (Argon.materialFase == 0){
				cout<<"Padat";
			}
			else if (Argon.materialFase == 1){
				cout<<"Cair";
			}
			else if (Argon.materialFase == 2){
				cout<<"Gas";
			}
			break;
			
		default:
			goto InputStart;
			return 0;
	}
	return 0;
}