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
	char grade = 'D';
	switch(grade){
		case 'A':
			cout<<"Excellent!"<<endl;
			break;
		case 'B':
		case 'C':
			cout<<"Well done"<<endl;
			break;
		case 'D':
			cout<<"You passed"<<endl;
			break;
		case 'F':
			cout<<"Better try again"<<endl;
			break;
		default:
			cout<<"Invalid grade"<<endl;			
	}
	cout<<"Your grade is "<<grade<<endl;			
	return 0;
}
