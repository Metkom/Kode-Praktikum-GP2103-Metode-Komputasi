/* Modul Praktikum GP2103 Metode Komputasi, 
Program Studi Teknik Geofisika, Universitas Pertamina
Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

Website: https://osf.io/5tfvq/
Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
DOI: 10.17605/OSF.IO/5TFVQ
@ Oktober 2017
*/

#include <iostream>
using namespace std;
int main(){
	int ARnilai[5];
	float c,d,f;
	
	ARnilai[1]=5;
	ARnilai[2]=2;
	ARnilai[3]=10;
	ARnilai[4]=9;
	ARnilai[5]=15;
	
	cout<<"\nTampil nilai indeks ke ("<<1<<") = "<<ARnilai[1];
	cout<<"\nTampil nilai indeks ke ("<<2<<") = "<<ARnilai[2];
	cout<<"\nTampil nilai indeks ke ("<<3<<") = "<<ARnilai[3];
	cout<<"\nTampil nilai indeks ke ("<<4<<") = "<<ARnilai[4];
	cout<<"\nTampil nilai indeks ke ("<<5<<") = "<<ARnilai[5];
	
	c=5*ARnilai[1];
	d=20*ARnilai[1]/ARnilai[3];
	f=1.2*ARnilai[4]/ARnilai[5];
	cout<<"\n\nNilai "<<c;
	cout<<"\n\nNilai "<<d;
	cout<<"\n\nNilai "<<f;		
}



