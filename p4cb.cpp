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
#include <string> 
using namespace std;
int main () {
  string text;
  
  ifstream fileku ("prak4a.txt");
  if (fileku.is_open()) {
    while (getline(fileku,text)){
      cout << text << '\n';
    }
    fileku.close();
  }
  else{
  	cout << "File tidak bisa dibuka";
  }
  return 0;
}

