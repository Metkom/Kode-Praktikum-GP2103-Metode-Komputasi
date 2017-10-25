%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

  clear; clc;
  % Read data
  X = dlmread('mat.txt');
  Z = X.^2;
  Z = 2*Z-X;
  save('outmat.txt'); % simpan 1
  save('outmat1.txt','Z'); % simpan 2
  save('outmat2.mat','Z'); % simpan 2
  % simpan 3
  fileku = fopen('outmat3.txt','w');
    fprintf(fileku,'=== Matriks Z === \n');
    for i=1:length(Z)
      fprintf(fileku,num2str(Z(i,:)));
    end
  fclose(fileku);

