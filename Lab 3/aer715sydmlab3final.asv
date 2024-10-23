%---------------------------------------------- 
% AER 715 Avionics and Systems
% Lab 3 – Flight Control - Estimation of Model Parameters and Simulation
% Sharvani Yadav: 501108658
% Daniel Mielnik: 501118927
%---------------------------------------------- %
%% Introduction
% This laboratory experiment aims to simulate and analyze the dynamics of a three-degree-of-freedom 
%(3-DOF) helicopter. The helicopter's body is positioned at one end of the apparatus, with a brass 
%counterweight at the opposite end, both connected to a pivot point. A pair of three-blade propellers,
%powered by a brushed DC motor, generates thrust, while the counterweight helps balance the force needed 
%to lift the helicopter body. To model the helicopter's altitude, its pitch axis is mechanically fixed, 
%and angles are measured using encoders. In this virtual environment, an analytical model of the helicopter 
%is examined, with parameters based on experimental data. The encoder signals and motor power from the amplifier 
%are transmitted through a slip ring to a data acquisition board, enabling comprehensive analysis of the helicopter's dynamics.
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
Je = (Mh * La^2) + (Mc * Lb^2) % Elevation Axis (kg-m^2)

%% Question 2
epsilon_dd = 0; 
Tg = Lb*Wc - La*Wh;
Ft = (Je*epsilon_dd - Tg)/La; % Lift force (N) required to achieve steady level flight
fprintf('The value of lift force required to achieve steady level flight is %f N \n', Ft)

%% Question 3
Vsum = Ft/Kf; % Velocity required to keep helicopter at steady level flight (m/s)
fprintf('The value of Velocity required to keep helicopter at steady level flight is %f m/s \n', Vsum)

%The experimental value closely matches the analytically derived value. 
%A slight discrepancy arises from the helicopter's weight fluctuating before 
%stabilizing, which alters the overall measurement.

%% Question 4
G4_elev1 = tf(La*Kf, [Je, 0, 0]) % G elev transfer function

% The resulting transfer function is a simple static gain with a value of 0.09157/1.044s^2.
% Since there are no s terms in either the numerator or denominator, 
% this is a first-order system with no dynamics, meaning it represents a static relationship 
% between input and output. In this case, the system acts as a scalar multiplier, 
% implying that the output elevation is proportional to the input voltage by the factor 0.08773.

% From a control systems perspective, this means there are no poles or zeros, 
% since the transfer function is a constant. The system exhibits no dynamic behavior such as 
% oscillation or damping, and it provides an immediate response to inputs without delay.

%% Question 5
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

% The output for the first-order system (G4_elev1):
% Numerator: 0.0916, Denominator: 1.0438
% This represents a simple first-order system with low gain and a relatively slow response.

% The second-order system (G4_elev2):
% Numerator: [0 0 0.0294]
% Denominator: [1.0000 0.01538 0.01329]
% The second-order system has a much more complex dynamic response compared to the first-order model.
% The presence of two poles indicates the system has oscillatory behavior, and the small damping 
% coefficient (0.01538) suggests lightly damped oscillations.

% The third-order system (G4_elev3):
% Numerator: [0 0 0 0.0911]
% Denominator: [1.0000 3.1682 1.7900 4.0932]
% The third-order system includes three poles, with the real pole having a stronger impact on the damping
% (as seen by the larger 4.0932 coefficient in the denominator). This higher-order system allows for more
% accurate modeling of the elevation response, capturing more of the system's complexity and dynamics.

%% Question 6
poles_elev2 = pole(G4_elev2)
poles_elev3 = pole(G4_elev3)

% The poles for elevation 2 are complex conjugates at -0.0769 +/- 0.1502i. 
% These complex poles indicate that the system is second order, which 
% typically results in an oscillatory response. The small real part of 
% the poles suggests that the system has low damping, meaning the oscillations 
% will decay slowly, resulting in a lightly damped system. This behavior 
% implies that after a disturbance or input, the helicopter will oscillate 
% in elevation before slowly stabilizing.

% For elevation 3, the system produces three poles: one real pole at -3.0239 
% and two complex conjugate poles at -0.0722 +/- 1.1612i. Although there are 
% three poles, the real pole is much farther from the origin in the left plane, 
% meaning it decays rapidly and has minimal impact on the overall system behavior.
% The two complex poles dominate the system's behavior, causing it to act like 
% a second-order system, similar to elevation 2.

% The real pole at -3.0239 contributes to faster initial stabilization due to its 
% rapid decay. In the helicopter, this would correspond to a faster adjustment 
% in response to inputs, such as changes in motor power, allowing the system to 
% stabilize quicker before the oscillatory behavior governed by the complex poles 
% takes over. As a result, during flight, the helicopter can adjust quickly and 
% exhibit controlled oscillations before eventually stabilizing.


%% Question 7
figure(2)
step(G4_elev1, G4_elev2, G4_elev3)
title('Amplitude Vs Time')
xlabel('Time (s)')
ylabel('Amplitude')
axis ([ 0 40, 0 0.05])
legend('Elevation 1', 'Elevation 2', 'Elevation 3')

%% Question 8
% The voltage sum (V_sum) needed to make the helicopter hover at 
% epsilon (ɛ) = 0 is essential because it determines the voltage 
% required for steady level flight. This value allows for steady-state 
% approximations, ensuring that the helicopter can maintain a stable 
% altitude without ascending or descending.
%
% When power is supplied to the motors, the helicopter begins to travel 
% around the table, even though this power is primarily used to generate 
% lift. The rotation occurs due to an uneven distribution of power 
% supplied to each motor on either side of the helicopter. This 
% imbalance results in a difference in the lift produced by each motor, 
% creating an applied torque or rolling moment. 
%
% As a consequence, the helicopter rotates about its fixed axis, 
% leading to circular motion around the table. Additionally, since the 
% helicopter's motion is not fixed to any particular plane or axis, 
% variations in motor power can cause it to drift and rotate during 
% operation.

%% Conclusion
% The helicopter model's dynamics were successfully analyzed through the 
% derived transfer functions and step response simulations. The moment 
% of inertia for the system was calculated to be J_e = 1.0438 kg-m^2, 
% which indicates that the system's physical properties are within 
% reasonable ranges for simulating helicopter movement. The calculated 
% lift force, F_t = 0.7065 N, and the voltage needed for the system, 
% V_sum = 5.0465 V, suggest that a moderate input is necessary to 
% achieve stable lift.
%
% In analyzing the step responses, the first-order system (Elevation 1) 
% was found to be the most unstable, as it exhibited a tendency toward 
% infinite elevation due to having two poles at the origin. This behavior 
% signifies an unbounded response to input changes, indicating that it 
% lacks the necessary damping to stabilize effectively.
%
% On the other hand, the second-order system (Elevation 2) demonstrated 
% lightly damped oscillations, with poles at -0.0769 ± 0.1502i, indicating 
% moderate oscillatory behavior and slower settling times. In contrast, 
% the third-order system (Elevation 3) showed a quicker response with a 
% real pole at -3.0239, allowing it to stabilize more efficiently.
%
% In summary, the results illustrate that higher-order models capture 
% more complex dynamics, which lead to faster stabilization and a more 
% accurate representation of the helicopter's response. This analysis 
% highlights the critical importance of system parameters and order in 
% affecting stability and control response, particularly noting that 
% Elevation 1 was the most unstable configuration in the studied dynamics.
