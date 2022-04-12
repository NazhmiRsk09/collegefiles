//Nama : Nazhmi Fadhila
//Kelas : MAN-2A

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	
	float d, d1, r, h, l, area, area2, price;
	
	/*Code program jika ingin memasukkan nilai lain dan bentuk benda sama yaitu kerucut.
	
	cout <<"Nilai diameter kerucut ialah : ";
	cin >>d;
	cout <<"Nilai panjang kerucut ialah : ";
	cin >>h; 
	
	*/
	
	d = 1.2;
	//Diameter dalam satuan cm
	d1 = d * 100;
	h = 240;
	
	//r merupakan nilai jari-jari kerucut dalam satuan cm
	r = d1 / 2;
	l = sqrt(r * r + h * h);
	
	//Rumus luas kerucut
	area = 	(M_PI * r * r) + (M_PI * r * l);
	
	//area2 merupakan nilai luas benda dalam satuan m2
	area2 = area / 10000;
	price = area2 * 2000;
	
	cout <<"Program menghitung harga \n";
	cout <<"Benda berbentuk kerucut \n\n";
	cout <<"Panjang kerucut = " <<h <<endl;
	cout <<"Diameter kerucut (dalam meter)= " <<d <<endl;
	cout <<"Harga benda ialah = Rp "<<price <<endl;
	return 0;
}