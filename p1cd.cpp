/* Modul Praktikum GP2103 Metode Komputasi, 
Program Studi Teknik Geofisika, Universitas Pertamina
Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

Website: https://osf.io/5tfvq/
Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
DOI: 10.17605/OSF.IO/5TFVQ
@ Oktober 2017
*/

#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c;
	float x1,x2,D;
	
	cout<<"=====================================\n";
	cout<<"| <<<<PROGRAM PERSAMAAN KUADRAT>>>> |\n";
	cout<<"=====================================\n";
	a=1;
	b=5;
	c=6;
	
	D=((b*b)-4*(a*c));
	x1=((-b)+sqrt(D))/(2*a);
	x2=((-b)-sqrt(D))/(2*a);
	cout<<"Persamaan kuadrat ("<<a<<"^2)x + "<<b<<"x + "<<c<<" mempunyai akar-akar yaitu: \n";
	cout<<"X1 = "<<x1<<endl;
	cout<<"X2 = "<<x2<<endl;
}



