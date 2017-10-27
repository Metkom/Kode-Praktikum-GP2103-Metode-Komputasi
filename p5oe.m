%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

clear; clc;
N=input('Masukkan kata/kalimat=','s');
Z=double(N); % konversi input ke ASCII
D=size(Z); B=max(D);
c=0; k=0;
for i=1
  for j=1:B
    if Z(i,j)==65
      k=k+1;
    elseif Z(i,j)==73
      k=k+1;
    elseif Z(i,j)==85
      k=k+1;
    elseif Z(i,j)==69
      k=k+1;
    elseif Z(i,j)==79
      k=k+1;
    elseif Z(i,j)==97
      k=k+1;
    elseif Z(i,j)==105
      k=k+1;
    elseif Z(i,j)==117
      k=k+1;
    elseif Z(i,j)==101
      k=k+1;
    elseif Z(i,j)==111
      k=k+1;
    elseif Z(i,j)==32
      d=0;
    else 
      c=c+1;
    end
  end
end
    
disp('Jumlah huruf vokal= '); disp(k);
disp('Jumlah huruf konsonan= '); disp(c);
