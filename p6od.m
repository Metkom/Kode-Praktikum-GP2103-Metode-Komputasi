%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

function p6od()
    % Memanggil fungsi
    [n,val] = masukkan();
    valmin = fmin(val);
    printf('nilai minimum dari %i deret angka : %i\n',n,valmin)
endfunction
% Fungsi 1
function [n,val] = masukkan();
    n = input('Masukkan banyak array: ');
    for i = 1:n
        j = i+1;
        printf('Masukkan nilai ke-%i ',j);
        val(i) = input('= ');
    endfor
endfunction
% Fungsi 2
function a = fmin(b)
  a = min(b);
endfunction

