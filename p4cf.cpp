/* Modul Praktikum GP2103 Metode Komputasi, 
Program Studi Teknik Geofisika, Universitas Pertamina
Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

Website: https://osf.io/5tfvq/
Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
DOI: 10.17605/OSF.IO/5TFVQ
@ Oktober 2017
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	
	int i,nbil=10;
	ofstream file("orand2.txt");
	srand((unsigned int)time(NULL));
	file << "#No\tData\n";
	for(i=0;i<nbil;i++){
		file<<i+1<<"\t"<<rand()%10<<endl;
	}	
	return 0;
}


