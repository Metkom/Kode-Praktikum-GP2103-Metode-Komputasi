%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

clear; clc;
n=input('Masukkan nilai faktorial yang ingin dicari: ');
f = n; g = n;
while n>1;
  n = n-1;
  f = f*n;
end
disp(['Nilai faktorial ',num2str(g),'! = ',num2str(f)])
m=input('Anda ingin melanjutkan, Y/T [Y]: ','s');
if m=='T'
  disp('Terima kasih atas kunjunganya')
  break
elseif m=='Y'
  p5oc;
else
  disp('Kode yang anda masukkan salah')
  break
end
  
