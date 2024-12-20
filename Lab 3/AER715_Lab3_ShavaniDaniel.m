%---------------------------------------------- 
% AER 715 Avionics and Systems
% Lab 3 – “Lab Title”
% Sharvani Yadav: XXXXXXXXX
% Daniel Mielnik: 501118927
%---------------------------------------------- %
%% Introduction
% Type your introduction in this section
%
%% Post Lab Exercises –
clear all;
clc;

%% Constants for Heli 4
Mh = 1.450; % Mass of Heli Body (kg)
Mc = 1.918; % Mass of CW (kg)
La = 25.75/39.37; % Distance from Pivot to Helecopter body center (m)
Lb = 18.5/39.37; % Distance from Pivot to conterweight center (m)
Lh = 6.933; % Distance from pitch axis to rotor center (m)
Kf = 0.140; % Motor-Prop Force Constant (N/V)
Krt = 0.0027; % Motor-Prop Torque Constant (Nm/V)
epsilon = -26:1:30; % Elevation Range (Deg)
epsilon_0 = -25.75; % Elevation Start (Deg)
lambda = 0:1:360; % Travel Range (Deg)
g = 9.81; % Gravity constant (m/s^2)
Wh = Mh*g; % Weight of Heli Body (N)
Wc = Mc*g; % Weight of CW (N)

%% Question 1
fprintf('Question 1')

Je = (Mh * La^2) + (Mc * Lb^2) % Elevation Axis (kg-m^2)

%% Question 2
fprintf('Question 2')

epsilon_dd = 0; % Figure this out
Tg = Lb*Wc - La*Wh;
Ft = (Je*epsilon_dd - Tg)/La % Lift force (N)

%% Question 3
fprintf('Question 3')

Vsum = Ft/Kf % Velocity required to keep helicopter at steady level flight (m/s)

%% Question 4
fprintf('Question 4')

G4_elev1 = tf(La*Kf, [Je 0 0]) % G elev transfer function

%% Question 5
fprintf('Question 5')

load elevationData1.mat
load elevationData2.mat
load elevationData3.mat

time = elev1(1, 1:end);

v1 = elev1(2, 1:end);
v2 = elev2(2, 1:end);
v3 = elev3(2, 1:end);

e1 = elev1(3, 1:end);
e2 = elev2(3, 1:end);
e3 = elev3(3, 1:end);

figure(1)
plot(time, e1, time, e2, time, e3)
title('Elevation Vs Time')
xlabel('Time (s)')
ylabel('Elevation (m)')
legend('Elevation 1', 'Elevation 2', 'Elevation 3')

data1 = iddata(transpose(e1), transpose(v1), 0.01);
data2 = iddata(transpose(e2), transpose(v2), 0.01);
data3 = iddata(transpose(e3), transpose(v3), 0.01);

mergedData = merge(data1, data2, data3);

G4_elev2 = tfest(mergedData, 2, 0);
G4_elev3 = tfest(mergedData, 3, 0);

[num1, denom1] = tfdata(G4_elev1, 'v')
[num2, denom2] = tfdata(G4_elev2, 'v')
[num3, denom3] = tfdata(G4_elev3, 'v')

%% Question 6
fprintf('Question 6')

poles_elev2 = pole(G4_elev2)
poles_elev3 = pole(G4_elev3)

%% Question 7
fprintf('Question 7')

figure(2)
step(G4_elev1, G4_elev2, G4_elev3)
title('Amplitude Vs Time')
xlabel('Time (s)')
ylabel('Amplitude')
axis ([ 0 40, 0 0.05])
legend('Elevation 1', 'Elevation 2', 'Elevation 3')

%% Question 8

%% Conclusion
% Write your lab conclusion for the WHOLE lab in this section.