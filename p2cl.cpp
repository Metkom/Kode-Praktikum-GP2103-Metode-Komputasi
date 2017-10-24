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
    int mat[r][c];
    float det=0.0; 

    cout<<"Masukkan matriks 3x3:\n";
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		cin>>mat[i][j];
		}
	}
    printf("\nMatriks yang diinput:");
    for(i=0;i<3;i++){
        cout<<"\n";
        for(j=0;j<3;j++){
	        cout<<mat[i][j]<<"\t";	
		}
    }
    // menghitung determinan matriks
    for(i=0;i<3;i++){
       det=det+(mat[0][i]*(mat[1][(i+1)%3]*\
	   mat[2][(i+2)%3]-mat[1][(i+2)%3]*mat[2][(i+1)%3]));
	}
    cout<<"\n\nDeterminan: "<<det;
    // menghitung inversi matriks
	cout<<"\n\nInversi matriknya: \n";
    for(i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
 	      	cout<<((mat[(j+1)%3][(i+1)%3]*\
			   mat[(j+2)%3][(i+2)%3])-(mat[(j+1)%3][(i+2)%3]*\
			   mat[(j+2)%3][(i+1)%3]))/det<<"\t";
		}cout<<"\n";
    }
   return 0;
}


