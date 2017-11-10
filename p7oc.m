%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

  clear; close; clc;
  x = 0:pi/100:2*pi;
  y = sin(x); 
  y2 = sin(x-.25); 
  y3 = sin(x-.5); 
  plot(x,y,x,y2,x,y3) 
  legend('sin(x)','sin(x-.25)','sin(x-.5)')
