%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

  clear; clc;
  n = input('Masukkan harga n: ');
  if rem(n,2) == 1
    disp('Bilangan ganjil');
  elseif rem(n,2) == 0
    disp('Pilangan genap');
  else
    disp('bilangan desimal');  
  end
  