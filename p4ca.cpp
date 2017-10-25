/* Modul Praktikum GP2103 Metode Komputasi, 
Program Studi Teknik Geofisika, Universitas Pertamina
Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

Website: https://osf.io/5tfvq/
Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
DOI: 10.17605/OSF.IO/5TFVQ
@ Oktober 2017
*/

// Membaca teks
#include <iostream> // class input/output
#include <fstream> // stream class untuk baca file
#include <string> // memanggil string

using namespace std;

int main () {
  string text; // definisi variabel text
  ifstream fileku ("prak4.txt");
  fileku.is_open(); // buka file
  getline(fileku,text); // mendapatkan semua text dari fileku
  cout << text << '\n'; 
  fileku.close(); // tutup file
  return 0; // mengembalikan nilai ke sistem operasi
}


