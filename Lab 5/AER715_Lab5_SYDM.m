% --------------------------------------------- %
% AER 715 Introduction to Avionics and Systems
% Lab 5 – Flight Control - Control System Testing and Analysis
% Sharvani Yadav: 501108658
% Daniel Mielnik: 501118927
% --------------------------------------------- %
%% Introduction
%    Type your introduction in this section
%
%% Qustion 1
% Loading data | Elevation
e1 = load('Lab 5 Data/elev1data.mat');
e2 = load('Lab 5 Data/elev2data.mat');
e3 = load('Lab 5 Data/elev3data.mat');

% Creating stock elevation data
G4_elev_stock = tf(0.09157, [1 0 0]);

% Lab 4 Data | Elevation
s = tf('s');
G4_elev1 = 0.09157/(1.044*s^2);
G4_elev2 = 0.0294/(s^2+0.1538*s+1.329);
G4_elev3 = 0.0911/(s^3+3.168*s^2+1.79*s+4.093);

% Step Response
PID1 = pid(4.12, 0.539, 10.1);
PID2 = pid(11.6, 15.9, 69.3);
PID3 = pid(12.1, 19.3, 39.8);

% Closed-Loop Transfer Functions | Elevation
feedback_elev1 = feedback(G4_elev1*PID1, 1);
feedback_elev2 = feedback(G4_elev2*PID2, 1);
feedback_elev3 = feedback(G4_elev3*PID3, 1);

% Experimental Data | Elevation
time_experimental = e3.stockData.time(1:1926);
elev_experimental = e3.stockData.signals.values(1:1926, 2);

% Stock Data | Elevation
PID_stock = pid(45, 45, 28);
feedback_stock = feedback(G4_elev_stock*PID_stock, 1);

% Plotting Elevation Data
figure(1);
hold on;
step(feedback_elev2*24.25, 20);
step(feedback_stock*24.25, 20);
plot(time_experimental, elev_experimental)
title('System Plots');
xlabel('Time (s)');
ylabel('Response');
legend('Best Lab 4 Elevation Data', 'Lab 4 Stock Data', 'Lab 5 Experimental Data');
grid on;

%% Question 2
% Loading data | Travel
etrav1 = load('Lab 5 Data/e1travD.mat');
etrav2 = load('Lab 5 Data/e2travD.mat');
etrav3 = load('Lab 5 Data/e3travD.mat');

% Travel Data from Lab 4
G4_trav_stock = 0.002362/(s^2);

% Closed-Loop Transfer Functions | Travel
feedback_trav1 = feedback(G4_trav*PID1, 1);
feedback_trav2 = feedback(G4_trav*PID2, 1);
feedback_trav3 = feedback(G4_trav*PID3, 1);

% Experimental Data | Travel
time_experimental_travel = etrav3.trav1Data.time(2426:3926);
trav_experimental = etrav3.trav1Data.signals.values(2426:3926, 2);

% Stock Data | Travel
PID_travel_stock = pid(98, 0, 300);
feedback_travel_stock = feedback(G4_trav_stock*PID_travel_stock, 1);

% Plotting Travel Data
figure(2);
hold on;
step(feedback_trav2*90, [25, 40]);
step(feedback_travel_stock*90, [25, 40]);
plot(time_experimental_travel, trav_experimental)
title('Comparison for Travel Data');
xlabel('Time (s)');
ylabel('Response');
legend('Best Travel Lab 4 Data', 'Lab 4 Stock Data', 'Lab 5 Experimental Data');
grid on;

%% Conclusion
% Write your lab conclusion for the WHOLE lab in this
% section. %