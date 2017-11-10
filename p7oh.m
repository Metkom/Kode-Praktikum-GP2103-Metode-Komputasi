%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

clear; close; clc;
theta = 0:0.01:2*pi;
rho = sin(3*theta).*cos(3*theta);

figure(1)
polar(theta,rho,'b')

figure(2)
Y = [8 7 9 4 10 8 2];
pie(Y)
legend('karyawan','petani','pengusaha','pedagang','dokter')
title('Presentase Mata Pencaharian Desa X')