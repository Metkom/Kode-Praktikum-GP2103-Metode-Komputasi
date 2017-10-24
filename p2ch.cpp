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
	int i,j,k;
	int r=3, c=2; 
	int Y[r][c], YT[c][r];
	cout << "Masukkan nilai matriks Y(3x2):\n";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin >> Y[i][j];
		}
	}
	// tanspose matriks Y
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            YT[j][i] = Y[i][j];
        }
    }
    // menampilkan transpose Y
	cout<<"\n Matriks Y^T = \n";
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
        	cout<<YT[i][j]<<"\t";
		}cout<<"\n";
	}	
	return 0;
}


