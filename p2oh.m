%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

clear; clc;
r=3; c=2;
for i=1:r
 for j=1:c
  Y(i,j)=input('Input Matriks Y(3x2): ');
 end
end
disp('Matriks Y'); disp(Y);
YT1 = Y';
disp('Matriks YT1'); disp(YT1);
YT2 = transpose(Y);
disp('Matriks YT2'); disp(YT2);


