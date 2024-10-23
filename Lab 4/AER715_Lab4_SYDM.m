%% Lab Exercises –
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

Je = (Mh * La^2) + (Mc * Lb^2) % Elevation Axis (kg-m^2)

% Open loop transfer function
G_elev1 = tf(La*Kf, [Je, 0, 0]) % G elev transfer function

% Closed loop transfer function

T = tf(La*Kf, [Je, 0, 0] + La*Kf)

% sisotool('rlocus', G_elev1) | Important