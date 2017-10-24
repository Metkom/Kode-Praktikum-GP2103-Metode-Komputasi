%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

  clear; clc;
  disp('Program ganjil genap');
  disp('--------------------');
  bil = input('Masukkan angka: ');
  switch rem(bil,2)
    case 0
      disp('Bilangan genap')
    case 1
      disp('Bilangan ganjil')
    otherwise
      disp('Bilangan desimal')
    end
