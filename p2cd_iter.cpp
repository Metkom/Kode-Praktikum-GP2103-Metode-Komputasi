#include <iostream> 

using namespace std; 

int main(){
	// deklarasi variabel
	int i,j,k;
	int r1=2, r2=3, c1=3, c2=2; // ukuran matriks
	int X[r2][c1], Z[r2][c1], XpZ[r2][c1]; // matriks
	// elemen matriks X
	cout << "Masukkan nilai matriks X (3x3):\n";
	for(i=0;i<r2;i++){
		for(j=0;j<c1;j++){
			cin >> X[i][j];
		}
	}
	cout << "\nMasukkan nilai matriks Z (3x3):\n";
	for(i=0;i<r2;i++){
		for(j=0;j<c1;j++){
			cin >> Z[i][j];
		}
	}
	// menampilkan matriks X
	cout<<"\n";
	cout<<"Matriks X \n";
	for(i=0;i<r2;i++){
		for(j=0;j<c1;j++){
        	cout<<X[i][j]<<"\t";
		}
		cout<<"\n";
	}
	// menampilkan matriks Z
	cout<<"\n";
	cout<<"Matriks Z \n";
	for(i=0;i<r2;i++){
		for(j=0;j<c1;j++){
        	cout<<Z[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	// penjumlahan X + Z
	for(i=0;i<r2;i++){
		for(j=0;j<c1;j++){
        	XpZ[i][j] = X[i][j] + Z[i][j];
		}
	}
	// menampilkan hasil X + Z
	cout<<"\n";
	cout<<"Matriks X + Z = \n";
	for(i=0;i<r2;i++){
		for(j=0;j<c1;j++){
        	cout<<XpZ[i][j]<<"\t";
		}
		cout<<"\n";
	}	
	
	return 0;
}
