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
int main () {
  int i,j,n;
  cout << "Masukkan nilai N: ";
  cin >> n;
  for(i=1;i<=n;i++){
  	for(j=1;j<=n;j++){
  		cout<<"*";
	  }
	  cout<<endl;
  }
  return 0;
}


