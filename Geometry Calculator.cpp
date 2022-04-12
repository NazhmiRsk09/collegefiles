#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
	
int main()
{
	
	int x;
	
	cout <<"1. Balok \n";
	cout <<"2. Kubus \n";
	cout <<"Pilih bidang yang diinginkan : ";
	cin >>x;
	
	switch (x) {
		
		case 1:
			double p, l, t, lp, volume;
			cout <<"Panjang balok = ";
			cin >>p;
			cout <<"Lebar balok = ";
			cin >>l;
			cout <<"Tinggi balok = ";
			cin >>t;
			
			lp = 2 * (p*l + p*t + l*t);
			volume = p * l * t;
			
			cout <<"Luas permukaan balok = " <<lp <<endl;
			cout <<"Volume balok = " <<volume <<endl;
			break;
			
		case 2:
			double s;
			cout <<"Panjang sisi = ";
			cin >>s;
			
			lp = 6*s;
			volume = pow(s,3);
			cout <<"Luas permukaan kubus = " <<lp <<endl;
			cout <<"Volume kubus = " <<volume <<endl;
			
		break;
		default:
			cout <<"Mohon maaf masukkan angka dengan benar.";
	}
	return 0;
}