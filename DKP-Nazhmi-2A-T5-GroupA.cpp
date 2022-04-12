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

int main()
{
	int x, z, i, w;
	char ver='y';
	//Variabel long double agar dapat menghitung nilai faktorial hingga 1754
	long double y;
	
	//Mengeksekusi program jika char ver sama dengan y
	while (ver =='y'){
		//Mengeksekusi program jika char ver tidak bernilai n
		do 
		{
		redo:
		cout<<"Masukkan bilangan bulat = ";cin>>x;
			if (x < 0)
			{
			cout<<"\nProgram Error! Masukan bilangan bulat!\n\n";
			continue;
			}
			else 
			{
				//Memakai cin.fail karena ada kemungkinan variabel int x di-input dengan huruf, sehingga merusak program
				while (cin.fail())
				{
				cin.clear();
				cin.ignore();
				cout<<"\nProgram Error! Masukan bilangan bulat, bukan huruf!\n\n";
				//Setelah selesai menghapus "isi" dari variabel x, program balik lagi ke awal (meminta input untuk variabel x)
				goto redo;
				}
			}
		//Kalkulasi untuk faktorial
		y = 1;
		z = 1;

			for (i=1; i<=x; i++)
			{
			//Variabel y untuk hasil faktorial
			y *= z;
			z++;
			}
		//Kode program agar tampilan output bagus dan sesuai dengan syarat tugas
		w = x;
		cout<<"\n"<<w<<"! = ";	
			while (i > 2)
			{
			cout<<w<<" x ";
			w--;
			i--;
			}
			//Kode if-else agar tampilan output sesuai dengan persyaratan tugas jika x = 0 dan x = 1
			if (x > 1)
			{
			cout<<"1 = "<<y<<"\n";
			}
			else 
			{
			cout<<y<<"\n";
			}
		}
		//Kondisi while ini memastikan bahwa statement do diatas tidak akan berjalan dua kali, kecuali jika ver == y
		while (ver == 'n');
	
	int o = 0;
	//Eksekusi kode dibawah jika o = 0 
	while (o == 0 && x >= 0)
	{
	cout<<"\nApakah ingin menghitung lagi? (Y/N) = ";cin>>ver;cout<<endl;
	ver = tolower(ver);
		if (ver=='y')
		{
		//Membuat variabel o bernilai 1 agar program dapat berjalan lagi dari awal statement do atau statement while dengan kondisi ver == y
		o = 1;
		//Menghapus output-output sebelumnya
		system("CLS");
		continue;
		}
		else if (ver =='n')
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