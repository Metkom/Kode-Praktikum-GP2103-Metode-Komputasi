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
	int r1=2, r2=3, c1=3, c2=2; // ukuran matriks
	int V[r1][c1], X[r2][c1], Y[r2][c2], Z[r2][c1]; // matriks
	// elemen matriks V
	V[0][0]=1; V[0][1]=2; V[0][2]=1;
	V[1][0]=2; V[1][1]=1; V[1][2]=2;
	// elemen matriks X
	X[0][0]=3; X[0][1]=2; X[0][2]=1;
	X[1][0]=1; X[1][1]=2; X[1][2]=3;
	X[2][0]=0; X[2][1]=2; X[2][2]=4;
	// elemen matriks Y
	Y[0][0]=1; Y[0][1]=3; 
	Y[1][0]=2; Y[1][1]=2; 
	Y[2][0]=3; Y[2][1]=1; 
	// elemen matriks Z
	Z[0][0]=2; Z[0][1]=1; Z[0][2]=3;
	Z[1][0]=1; Z[1][1]=2; Z[1][2]=1;
	Z[2][0]=3; Z[2][1]=1; Z[2][2]=2;
	// menampilkan matriks V
	cout<<"Matriks V \n";
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
        	cout<<V[i][j]<<"\t";
		}
		cout<<"\n";
	}
	// menampilkan matriks X
	cout<<"\n";
	cout<<"Matriks X \n";
	for(i=0;i<r2;i++){
		for(j=0;j<c1;j++){
        	cout<<X[i][j]<<"\t";
		}
		cout<<"\n";
	}
	// menampilkan matriks Y
	cout<<"\n";
	cout<<"Matriks Y \n";
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
        	cout<<Y[i][j]<<"\t";
		}
		cout<<"\n";
	}
	// menampilkan matriks Z
	cout<<"\n";
	cout<<"Matriks Z \n";
	for(i=0;i<r2;i++){
		for(j=0;j<c1;j++){
        	cout<<Z[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
