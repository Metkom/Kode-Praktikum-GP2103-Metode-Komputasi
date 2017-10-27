%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

% Fungsi utama
function p6ob()
        a = input('Masukan nilai a: ');
        b = input('Masukan nilai b: ');
        c = fungsi(a,b);
        keluaran(c);
endfunction  

% Fungsi proses
function output = fungsi(input1,input2)
         output = input1+input2;
endfunction

%Fungsi output
function keluaran(input1)
         printf('Hasil a+b = %i \n',input1);
endfunction