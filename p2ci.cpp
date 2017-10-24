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
	int r=3, c=3; 
	int X[r][c];
	int det1,det2,det3,det4,det5,det6;
	float detX;
	// elemen matriks X
	X[0][0]=3; X[0][1]=2; X[0][2]=1;
	X[1][0]=1; X[1][1]=2; X[1][2]=3;
	X[2][0]=0; X[2][1]=2; X[2][2]=4;
	// determinan matriks X
	det1 = X[0][0]*X[1][1]*X[2][2];
	det2 = X[0][1]*X[1][2]*X[2][0];
	det3 = X[0][2]*X[1][0]*X[2][1];
	
	det4 = X[2][0]*X[1][1]*X[0][2];
	det5 = X[2][1]*X[1][2]*X[0][0];
	det6 = X[2][2]*X[1][0]*X[0][1];
  	detX = ((det1+det2+det3)-(det4+det5+det6));
    // menampilkan det. matriks X
	cout<<"\n Determinan X = \n";
	cout<<detX;
	return 0;
}

