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
	// deklarasi variabel
	int i,j,k;
	int r2=3, c1=3; // ukuran matriks
	int Z[r2][c1],SM[r2][c1]; // matriks	
	// elemen matriks Z
	Z[0][0]=2; Z[0][1]=1; Z[0][2]=3;
	Z[1][0]=1; Z[1][1]=2; Z[1][2]=1;
	Z[2][0]=3; Z[2][1]=1; Z[2][2]=2;
	// menampilkan matriks Z
	cout<<"Matriks Z \n";
	for(i=0;i<r2;i++){
		for(j=0;j<c1;j++){
        	cout<<Z[i][j]<<"\t";
		}
		cout<<"\n";
	}
	// perkalian skalar matriks 3 x z
	for(i=0;i<r2;i++){
		for(j=0;j<c1;j++){
        	SM[i][j] = 3 * Z[i][j];
		}
	}
	// menampilkan hasil 3 x z
	cout<<"Perkalian Skalar 3 x Z = \n";
	for(i=0;i<r2;i++){
		for(j=0;j<c1;j++){
        	cout<<SM[i][j]<<"\t";
		}
		cout<<"\n";
	}	
	return 0;
}
