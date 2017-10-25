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
  int i,j,k,m,r=10,c=2;	
  string X1[r][c],X2[r][c];
  int Z1[r-1][c],Z2[r-1][c],cek;
  ifstream file1("orand1.txt"); //Baca File 1
  if (file1.is_open()) {
  	for(i=0;i<r;i++){
  		for(j=0;j<c;j++){
		  	file1 >> X1[i][j];
  			if(i>0){
  				istringstream conv(X1[i][j]);
  				conv >> Z1[i-1][j];
			  }
		  }
	  } file1.close();
  }
  ifstream file2("orand2.txt"); //Baca File 2
  if (file2.is_open()) {
  	for(i=0;i<r;i++){
  		for(j=0;j<c;j++){
		  	file2 >> X2[i][j];
  			if(i>0){
  				istringstream conv(X2[i][j]);
  				conv >> Z2[i-1][j];
			  }
		  }
	  } file2.close();
  }
  // Cek data
  cout<<"Cek Inputan!\n";
  cout<<"No\tBil1\tNo\tBil2\n";
  for(i=0;i<r-1;i++){
     cout<<Z1[i][0]<<"\t"<<Z1[i][1]<<"\t"\
 	   <<Z2[i][0]<<"\t"<<Z2[i][1]<<endl;
  }
  // Bandingkan
  ofstream ofile("ofileCompare.txt");
  ofile<<"No\tBil1\tNo\tBil2\n";
  m = 0;
  for(i=0;i<r-1;i++){
  	 for(j=0;j<r-1;j++){
  	    cek = Z1[i][1]-Z2[j][1];
  	    if (cek == 0) {
  	    	ofile<<Z1[i][0]<<"\t"<<Z1[i][1]<<"\t"\
			  <<Z2[j][0]<<"\t"<<Z2[j][1]<<endl;
	  		m = m + 1;
	    }
	 }
  }
  ofile.close();
  cout <<"Banyak data yang sama: " <<m<<endl;
  
 return 0; 
}

