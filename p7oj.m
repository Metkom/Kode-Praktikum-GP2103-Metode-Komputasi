%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

clear; close; clc;
a = load('datagravity.txt');
x = a(:,1);
y = a(:,2);
z = a(:,3);
[X,Y] = meshgrid(linspace(min(x),max(x),40), linspace(min(y),max(y),40));

contourf(X,Y,griddata(x,y,z,X,Y),'ShowText','on')
xlabel('Easting (km)')
ylabel('Northing (km)')
title('Peta Kontur Data Gravity')
colorbar

