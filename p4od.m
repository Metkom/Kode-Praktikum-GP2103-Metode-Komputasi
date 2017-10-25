%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

clear; clc;
% Read data
X = dlmread('prak4b.txt');
Log = X(2:end,1); % Header tidak terbaca
Lat = X(2:end,2); 
Elev = X(2:end,3);
Rawgrav = X(2:end,4);

% Operasikan 
PG = ((Rawgrav-1500)+1530.844)*1.00043726;
KUB = 0.03068*Elev;
RE = sum(Elev)/length(Elev);
SDRE = Elev-RE;

LL = length(Log);
FormSPec = '%.2f\t%.3f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n';

% Simpan
fileku = fopen('output2.txt','w');
  fprintf(fileku,'Log\tLat\tElev\tRawgrav\tPG\tKUB\tSDRE\n');
  for i = 1:LL
      fprintf(fileku,FormSPec,Log(i),...
      Lat(i),Elev(i),Rawgrav(i),PG(i),KUB(i),SDRE(i))
  end
fclose(fileku);


