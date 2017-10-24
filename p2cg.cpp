#include <iostream> 
using namespace std; 
int main(){
	int i,j,k;
	int r1=2,r2=3,c=3;
	int V[r1][c], Z[r2][c], VxZ[r1][c];
	// BUATLAH KODE INTERAKTIF V dan Z
	cout << "Masukkan nilai matriks V(2x3):\n";
	for(i=0;i<r1;i++){
		for(j=0;j<c;j++){
			cin >> V[i][j];
		}
	}
	cout << "Masukkan nilai matriks Z(3x3):\n";
	for(i=0;i<r2;i++){
		for(j=0;j<c;j++){
			cin >> Z[i][j];
		}
	}
	// perkalian matriks V x Z
	for(i=0;i<r1;i++){
		for(j=0;j<c;j++){
			VxZ[i][j] = 0;
			for(k=0;k<c;k++){ 
				VxZ[i][j] += V[i][k] * Z[k][j];
			}
		}
	}
	// menampilkan matriks V x Z
	cout<<"\n Matriks V x Z = \n";
	for(i=0;i<r1;i++){
		for(j=0;j<c;j++){
        	cout<<VxZ[i][j]<<"\t";
		}cout<<"\n";
	}	
	return 0;
}



