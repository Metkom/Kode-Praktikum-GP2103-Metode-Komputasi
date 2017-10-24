%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

clear all; clc;
% matriks V
V = [1 2 1;2 1 2];
Z = [2 1 3;1 2 1;3 1 2];
% menampilkan matriks V
disp('Matriks V'); 
disp(V);
% menampilkan matriks Z
disp('Matriks Z'); 
disp(Z);
% perkalian matriks V x Z
VxZ = V*Z;
% menampilkan matriks 3 x Z
disp('Matriks V x Z'); 
disp(VxZ);