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
  int number, i=1, factorial=1;
  cout<<"Masukkan bilangan bulat positif: ";
  cin>>number;
  
  while(i<=number){
  	factorial*=i;
  	++i;
  }
  cout<<"Nilai faktorial dari  "<<number<<" = "<<factorial;
  return 0;
}


