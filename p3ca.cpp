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
	int c,r=1;
	float ipk;
	cout<<"Masukkan jumlah data yang diinginkan: ";
	cin>>c;
	float V[r][c];
	cout<<"Masukkan nilai ipk sesuai jumlah data yang dimasukkan\n";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>V[i][j];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<V[i][j]<<"\t";
			if(V[i][j]>3.51 && V[i][j]<=4)
				cout<<"Urutan ke "<<j<<" Cumlaude"<<endl;
			else if(V[i][j]>2.76 && V[i][j]<=3.50)
				cout<<"Urutan ke "<<j<<" Sangat memuaskan"<<endl;
			else if(V[i][j]>2.00 && V[i][j]<=2.75)
				cout<<"Urutan ke "<<j<<" Memuaskan"<<endl;
			else if(V[i][j]>0 && V[i][j]<=2.00)
				cout<<"Urutan ke "<<j<<" Tidak baik"<<endl;
			else
				cout<<"Format inputan nilai salah\n";
		}
	}
	return 0;
}
