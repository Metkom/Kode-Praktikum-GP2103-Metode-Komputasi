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
	int i,j,r=3,c=3;
    int X[r][c], adjX[r][c];
    
    cout<<"Masukkan matriks X(3x3):\n";
    for(i=0;i<r;i++){
    	for(j=0;j<c;j++){
    		cin>>X[i][j];
		}
	}
	// adjoint matriks X
	for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        	adjX[i][j]= ((X[(j+1)%3][(i+1)%3]*X[(j+2)%3][(i+2)%3])-\
			(X[(j+1)%3][(i+2)%3]*X[(j+2)%3][(i+1)%3]));
    	}
    }
	cout<<"\n Matriks Adjoint X = \n";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
        	cout<<adjX[i][j]<<"\t";
		}cout<<"\n";
	}	
	return 0;
}


