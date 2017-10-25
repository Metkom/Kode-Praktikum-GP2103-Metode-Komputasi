%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

  clear; clc;
  a = 5; b = 10;
  c = 2.5; d = 4.5;
  x = a*c;
  y = b/d;
  fileku = fopen('output4b.txt','w');
    fprintf(fileku,'=== Hasil Perhitungan === \n');
    fprintf(fileku,'a = %i \t b = %i \n',a,b);
    fprintf(fileku,'c = %f \t d = %f \n',c,d);
    fprintf(fileku,'x = a*c = %f \n',x);
    fprintf(fileku,'y = b/d = %f',y);
  fclose(fileku);

