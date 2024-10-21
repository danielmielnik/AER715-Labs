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
G4_elev1 = tf(La*Kf, Je) % G elev transfer function

%% Question 5



%% Conclusion
% Write your lab conclusion for the WHOLE lab in this section.