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

using namespace std;

int main()
{
	int inputUser, faktorPerkalian, num, num2;
	char inputUser2='y';
	//Variabel long double agar dapat menghitung nilai faktorial hingga 1754
	long double hasilFaktorial;
	
	//Mengeksekusi program jika char inputUser2 sama dengan y
	while (inputUser2 =='y'){
		//Mengeksekusi program jika char inputUser2 tidak bernilai n/N
		do
		{
		cout<<"MAN-2A, Group A, Menghitung Faktorial\n";
		balikAwal:
		cout<<"Masukkan bilangan yang ingin dihitung = ";cin>>inputUser;
			if (inputUser < 0)
			{
			cout<<"\nProgram Error! Masukan bilangan bulat positif!\n\n";
			goto balikAwal;
			}
			else 
			{
				//Memakai cin.fail karena ada kemungkinan variabel int input di-input dengan huruf, sehingga merusak program
				while (cin.fail())
				{
				cin.clear();
				cin.ignore();
				cout<<"\nProgram Error! Masukan bilangan bulat positif, bukan huruf!\n\n";
				//Setelah selesai menghapus "isi" dari variabel inputUser, program balik lagi ke awal (meminta input untuk variabel inputUser)
				goto balikAwal;
				}
			}
		//Kalkulasi untuk faktorial
		hasilFaktorial = 1;
		faktorPerkalian = 1;

			for (num=1; num<=inputUser; num++)
			{
			hasilFaktorial *= faktorPerkalian;
			faktorPerkalian++;
			}
		//Kode program agar tampilan output bagus dan sesuai dengan syarat tugas
		num2 = inputUser;
		cout<<"\n"<<num2<<"! = ";	
			while (num > 2)
			{
			cout<<num2<<" x ";
			num2--;
			num--;
			}
			//Kode if-else agar tampilan output sesuai dengan persyaratan tugas jika inputUser = 0 dan inputUser = 1
			if (inputUser > 1)
			{
			cout<<"1 = "<<hasilFaktorial<<"\n";
			}
			else 
			{
			cout<<hasilFaktorial<<"\n";
			}
		}
		//Kondisi while ini memastikan bahwa statement do diatas tidak akan berjalan dua kali, kecuali jika inputUser2 == y
		while (inputUser2 == 'n');
	
	int num3 = 0;
	//Eksekusi kode dibawah jika num3 = 0 dan inputUser >= 0
	while (num3 == 0 && inputUser >= 0)
	{
	cout<<"\nApakah ingin menghitung lagi? (Y/N) = ";cin>>inputUser2;cout<<endl;
	inputUser2 = tolower(inputUser2);
		if (inputUser2 =='y')
		{
		//Membuat variabel num3 bernilai 1 agar program dapat berjalan lagi dari awal statement do atau statement while dengan kondisi inputUser2 == y
		num3 = 1;
		//Menghapus output-output sebelumnya
		system("CLS");
		continue;
		}
		else if (inputUser2 =='n')
		{
		cout<<"Terima kasih telah menggunakan program. Program akan berakhir.";
		return 0;
		}
		else 
		{
		cout<<"\nProgram Error! Masukan pilihan yang benar! (Y/N)\n";
		continue;
		}
	}
	}
	return 0;
}