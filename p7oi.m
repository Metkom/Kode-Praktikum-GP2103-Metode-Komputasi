%Modul Praktikum GP2103 Metode Komputasi, 
%Program Studi Teknik Geofisika, Universitas Pertamina
%Oleh: Hardianto Rizky Prabusetyo dan Mohammad Heriyanto

%Website: https://osf.io/5tfvq/
%Link Kode: https://github.com/Metkom/Kode-Praktikum-GP2103-Metode-Komputasi
%DOI: 10.17605/OSF.IO/5TFVQ
%@ Oktober 2017

clear; close; clc;
% Parameter model
t=10;
z1=50; z2=150;
x0=100;
rho=1;
x=-500:20:500;
G=6.67*10e-11;
v=2*G*rho*t;
% Persamaan forward modeling
for i=1:length(x)
    g(i)=pi+(atand((x(i)-x0)/z1))-(atan((x(i)-x0)/z2));
end
gg=v.*g;

% Plot data dan model bawah permukaan
figure
subplot(2,1,1)
plot(x,gg,'*r') % plot data
xlabel('Posisi (m)')
ylabel('\Deltag (mGal)')
title('Modeling Gravity - Patahan')
xlim ([-500 500])

subplot(2,1,2)
x1=[-500 -500 x0 x0];
y1=[z2 z2-t z2-t z2];
fill(x1,y1,'r') % plot model 1
hold on
x2=[x0 x0 500 500];
y2=[z1 z1-t z1-t z1];
fill(x2,y2,'r') % plot model 2
axis([-500 500 0 200])
xlabel('Posisi (m)')
ylabel('Kedalaman (m)')
set(gca,'Ydir','Reverse') % membalikkan sumbu y
