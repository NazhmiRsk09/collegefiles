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
#include <fstream>
#include <cstring>
#include <iomanip>
using namespace std;

int main (){
	
	//nilai n untuk jumlah data yang ingin di-read
	int n = 10;
	string header;
	string line[n];
	
	ifstream data;
	
	data.open("metal.csv");
	
	if (!data){
		cout<<"File error, cannot be opened or cannot be found!";
		return 1;
	}
	
	//skip header tpi tetap di read oleh program
	getline (data, header);
	
	//mulai dari baris ke-2 dari file .csv
	for (int i=0; i<n; i++){
		data>>line[i];
	}
	
	data.close();
	
	string var;
	int i = 0;
	
	cout<<" Metal Name"<<setw(11)<<"Symbol"<<setw(11)<<"MP (\370C)"<<setw(11)<<"BP (\370C)";
	cout<<endl<<"---------------------------------------------";
	cout<<setw(11)<<endl;
	for (int i=0; i<n; i++){
		stringstream inputline(line[i]); //memasukan string line[i] sebagai input
		//mengambil line[i], setiap ketika ketemu delimiter (dalam hal ini ';'), masukan ke dalam string variabel var dan print var.
		//setelah selesai ambil line selanjutnya
		while (getline(inputline, var, ';')){
			cout<<var<<setw(11);			  
		}
		cout<<endl;
	}
	
	return 0;
}