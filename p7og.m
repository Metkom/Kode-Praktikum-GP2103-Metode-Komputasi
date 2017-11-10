%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

  clear; close; clc;
  c = 2000:2013;
  harga= [37.55 30.69 29.92 35.55 47.05 60.45 ...
        68.28 72.99 100.01 58 77.11 91.39 88.95 92.41];
  bar(c,harga)

	y = [2 2 3; 2 5 6; 2 8 9; 2 11 12];
	bar(y)

  y = [2 2 3; 2 5 6; 2 8 9; 2 11 12];
	bar(y,'stacked')

  y = [1 2 3; 4 5 6];
	ax1 = subplot(2,1,1);
	bar(ax1,y)

	ax2 = subplot(2,1,2);
	bar(ax2,y,'stacked')
