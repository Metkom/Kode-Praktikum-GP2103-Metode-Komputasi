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
#include <sstream>
using namespace std;
int main () {
  int i,j,r=7,c=4;	
  string X[r][c];
  float RE,sum;
  float Z[r-1][c],PG[r-1][1],KUB[r-1][1],SDRE[r-1][1];
  ifstream fileku("prak4b.txt");   
  //Baca File
  if (fileku.is_open()) {
  	for(i=0;i<r;i++){
  		for(j=0;j<c;j++){
   			fileku >> X[i][j];
  			if(i>0){
  				istringstream conv(X[i][j]);
  				conv >> Z[i-1][j];
			  }
		  }
	  } 
	  fileku.close();
  } else{
  	cout << "File tidak bisa dibuka";
  }
  // Operasikan
  sum = 0.0; 
  for(i=0;i<r-1;i++){ // menghitung rata-rata
  	sum = sum + Z[i][2];
  }
  RE = sum/(r-1);
  for(i=0;i<r-1;i++){//Operasi masing-masing
  	  PG[i][0] = ((Z[i][3]-1500)-1530.844)*1.00042726;
  	  KUB[i][0] = 0.03068*Z[i][2];
  	  SDRE[i][0] = Z[i][2]- RE;
  }
  //Tampilan hasil
  for(j=0;j<c;j++){
  	cout<<X[0][j]<<"\t";
  } cout <<"PG\tKUB\tSDRE\n";
  for(i=0;i<r-1;i++){
    cout<<Z[i][0]<<"\t"<<Z[i][1]<<"\t"<<Z[i][2]<<"\t";
	cout<<Z[i][3]<<"\t"<<PG[i][0]<<"\t"<<KUB[i][0]<<"\t";
	cout<<SDRE[i][0]<<endl;
   }
   
  //Simpan File 
 ofstream aku("outprak2b.txt");
 for(j=0;j<c;j++){
	aku <<X[0][j]<<"\t";
 } aku <<"PG\tKUB\tSDRE\n";
	
  for(i=0;i<r-1;i++){
    aku<<Z[i][0]<<"\t"<<Z[i][1]<<"\t"<<Z[i][2]<<"\t";
    aku<<Z[i][3]<<"\t"<<PG[i][0]<<"\t"<<KUB[i][0]<<"\t";
    aku<<SDRE[i][0]<<endl;
   }
  return 0;
}



