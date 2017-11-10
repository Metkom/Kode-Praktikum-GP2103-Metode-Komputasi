%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

  clear; close; clc;
  x = -pi:0.1:pi;
  y = sin(x); 
  plot(x,y,'^m') 
  xlabel('axis x','color','b')
  ylabel('axis y','color','g')
  legend('sin(x)')
  set(gca,'YTick',-1:0.25:1)
  set(gca,'XTickLabel',{'-pi','-pi/2','0','pi/2','pi'})
  