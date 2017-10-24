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
	int i,j;
	int r=2,c=3; 
	int V[r][c]; 
	// elemen matriks V
	V[0][0]=1; V[0][1]=2; V[0][2]=1;
	V[1][0]=2; V[1][1]=1; V[1][2]=2;
	// menampilkan matriks V
	cout<<"Matriks V \n";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
        	cout<<V[i][j]<<"\t";
		}
		cout<<"\n";
	}	
	return 0;
}







