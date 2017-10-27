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
// Fungsi prototype
void masukan(int,int*,int*);
int fungsi(int,int);
void keluaran(int);
//Fungsi utama
int main(){ 
	int x=2,p,q,r;
	masukan(x,&p,&q);
	r=fungsi(p,q);
	keluaran(r);
	return 0; 
}
// Fungsi pendukung
void masukan(int input, int *output1, int *output2){
	cout<<"Operasi "<<input<<" variabel"<<endl;
	cout<<"Masukan nilai a : ";	cin>>*output1;
	cout<<"Masukan nilai b: ";	cin>>*output2;	
}

int fungsi(int input1, int input2){
	int output=input1+input2;
	return(output);
}
void keluaran(int input1){
	cout<<"Hasil a+b = "<<input1;
}
