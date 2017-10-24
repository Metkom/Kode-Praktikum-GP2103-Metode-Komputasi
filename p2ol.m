%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

clear; clc;
X = [3 2 1;1 2 3;0 2 4];
disp('Matriks X'); disp(X);

% inverse matriks X
detX = det(X);
adjX = adj(X);
invX1 = adjX/detX;
% inverse matriks X
invX2 = inv(X);

% menampilkan matriks
disp('Matriks invX1'); 
disp(invX1);
disp('Matriks invX2'); 
disp(invX2);

