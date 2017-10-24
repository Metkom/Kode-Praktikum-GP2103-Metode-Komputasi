/* Modul Praktikum GP2103 Metode Komputasi, 
Program Studi Teknik Geofisika, Universitas Pertamina
Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

Website: https://osf.io/5tfvq/
Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
DOI: 10.17605/OSF.IO/5TFVQ
@ Oktober 2017
*/

#include<iostream>
using namespace std;
int main(){
	int i,j,r=3,c=3;
    int X[r][c];
    double det=0.0;
	 
    cout<<"Masukkan matriks X(3x3):\n";
    for(i=0;i<r;i++){
    	for(j=0;j<c;j++){
    		cin>>X[i][j];
		}
	}
    printf("\nMatriks yang diinput:");
    for(i=0;i<r;i++){
        cout<<"\n";
        for(j=0;j<c;j++){
	        cout<<X[i][j]<<"\t";	
		}
    }
    // menghitung determinan matriks
    for(i=0;i<3;i++){
       det=det+(X[0][i]*(X[1][(i+1)%3]*X[2][(i+2)%3]-\
	   X[1][(i+2)%3]*X[2][(i+1)%3]));
	}
    cout<<"\n\nDeterminan: "<<det;
    return 0;
}


