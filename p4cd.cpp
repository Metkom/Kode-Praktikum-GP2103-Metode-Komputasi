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
  int i,j,r=5,c=5;
  int X[r][c],Z[r][c];
  //Baca File
  ifstream fileku("mat.txt");
  if (fileku.is_open()) {
  	for(i=0;i<r;i++){
  		for(j=0;j<c;j++){
  			fileku >> X[i][j];
		  }
	  } 
	  fileku.close();
  } else{
  	cout << "File tidak bisa dibuka";
  }
  // Operasikan
  for(i=0;i<r;i++){
  		for(j=0;j<c;j++){
			Z[i][j] = X[i][j]*X[i][j];
			Z[i][j] = 2*Z[i][j]-X[i][j];
		  }
   }
  //Simpan File 
 ofstream aku("outmat.txt");
 for(i=0;i<r;i++){
  		for(j=0;j<c;j++){
		     aku<<Z[i][j]<<"\t";
		  } 
		  aku<<"\n";
   } 
  return 0;
}


