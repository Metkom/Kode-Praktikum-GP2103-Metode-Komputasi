%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

  clear; clc;
  a = 10;
  % while loop execution
  while (a<20)
    fprintf('Value of a: %d\n',a);
    a = a+1;
    if(a>15)
      % terminate the loop using break statement
      break;
    end
   end