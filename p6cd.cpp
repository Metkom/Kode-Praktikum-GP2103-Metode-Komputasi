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
// Fungsi minimum 
int fmin(int val[],int n){
	int min,i; 
	min = val[0];
	for(i=0;i<n;i++){
   		if(val[i] < min){
   			min = val[i];
   		}
    }
	return (min);
}
// Fungsi utama
int main(){
    int n,i,j,valmin;
    cout<<"Masukkan banyak array: "; cin>>n;
	int val[n];
    for(i=0;i<n;i++){
    	j=i+1;
   		cout<<"Masukkan nilai ke-"<<j<<": ";
   		cin>>val[i];
    }
    //Memanggil fungsi min
    valmin = fmin(val,n);
    cout<<"nilai minimum adalah : "<<valmin<<endl;
    return 0;
}


