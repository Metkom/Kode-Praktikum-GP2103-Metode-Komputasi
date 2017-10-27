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
//Fungsi overload
int fungsi(int input1, int input2){
	int output=input1+input2;
	return (output);
}
//Fungsi utama
int main(){ 
	int x,y,z,hasil;
	x=2; y=4;
	z = fungsi(x,y); //menampilkan fungsi
	cout<<"z = x+y = "<<z<<"\n";
	return 0; 
} 


