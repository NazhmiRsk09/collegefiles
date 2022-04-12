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
#include <iomanip>
#include <string>
using namespace std;

int main (){
	
	int x, y, k;
	float z;
	string type;
	
	cout<<"How many data? ";cin>>x;
	cout<<"Range (interval) of data? ";cin>>y;
	cout<<"Input starting temperature : ";cin>>z;cout<<endl;
	
	cout<<setw(20)<<"IRON PHASE TABLE\n";
	cout<<setw(2)<<"No"<<setw(10)<<"T(\370C"<<setw(10)<<"Phase\n";
	cout<<setw(2)<<"---"<<setw(10)<<"-----"<<setw(8)<<"-----"<<"\n\n";
	
	for (int i=1; i<=x; i++){
		k = z + 273.15;
		if (k >= 298.15 && k <= 1183){
			type = "SOL-A";
		}
		else if (k >= 1184 && k <= 1664){
			type = "SOL-C";
		}
		else if (k >= 1665 && k <= 1808){
			type = "SOL-D";
		}
		else if (k >= 1809 && k < 3143.15){
			type = "Liquid";
		}
		else if (k >= 3143.15){
			type = "Vapor";
		}
		cout<<setw(2)<<i<<setw(12)<<setprecision(2)<<fixed<<z<<setw(10)<<type<<"\n";
		z = y + z;
	}

	return 0;
}