/* Modul Praktikum GP2103 Metode Komputasi, 
Program Studi Teknik Geofisika, Universitas Pertamina
Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

Website: https://osf.io/5tfvq/
Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
DOI: 10.17605/OSF.IO/5TFVQ
@ Oktober 2017
*/

#include <iostream>
#include <fstream>
using namespace std;
int main () {
	int a,b;
	float c,d,x,y;
	a=5; b=10;
	c=2.5; d=4.5;
	x = a*c;
	y = b/d;
  	ofstream fileku ("output4a.txt");
  	if (fileku.is_open()){
  		fileku << "=== Hasil Perhitungan ==="<<"\n";
    	fileku <<"Nilai a = "<<a<<"\t b = "<<b<<"\n";
    	fileku <<"Nilai c = "<<c<<"\t d = "<<d<<"\n";
    	fileku << "x = a*c = "<<x<<"\n";
		fileku << "y = b/d = "<<y<<"\n";
    	fileku.close();
  	}else{  
		 cout << "File tidak bisa dibuka!";
	}
   	return 0;
}


