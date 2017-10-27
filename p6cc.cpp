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
//Fungsi inline
inline int fungsi(int a, int b){
	return(a+b);
}
//Fungsi utama
int main(){
	int k;
	for(k=0; k<10; k++){
		cout<<k<<"\t"<<fungsi(k,2*k)<<endl;
	}
	return 0;
}

