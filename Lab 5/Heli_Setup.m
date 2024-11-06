% SET THE BLANK VARIABLES AND RUN THE SETUP FILE

% PLEASE SET THE HELICOPTER NUMBER AND Vsum

heli = 4;

% VSUM - FOR LAB 3 ONLY

Vsum = 22.8;   %

% CONTROLLER GAINS - FOR LAB 5 ONLY

Kp = ;
Ki = ;
Kd = ;
Kpt = ;
Kit = ;
Kdt = ; 
%-----[HELI SET VARIABLES]--------
% THESE VARIABLE ARE SPECIFIC TO EACH HELICOPTER
TRAV_SS = 90;

if (heli == 1)
    ELEV_START = -24.50;
    ELEV_SLF = 24.50;            % The elevation at SLF [deg]
    K_CABLE = 3;
    VSUM_MAX = 30;
    U_MAX = (VSUM_MAX - Vsum)*0.5;
    G1_elev1=tf(0.08529, [1 0 0]);
    G1_trav=tf(0.003211, [1 0 0]);
elseif (heli == 2)
    ELEV_START = -25.00;
    ELEV_SLF = 25.00;            % The elevation at SLF [deg]
    K_CABLE = 3;
    VSUM_MAX = 30;
    U_MAX = (VSUM_MAX - Vsum)*0.5;
    G2_elev1=tf(0.08597, [1 0 0]);
    G2_trav=tf(0.002879, [1 0 0]);
elseif (heli == 3)
    ELEV_START = -24.00;
    ELEV_SLF = 24.00;            % The elevation at SLF [deg]
    K_CABLE = 5;
    VSUM_MAX = 36;    
    U_MAX = (VSUM_MAX - Vsum)*0.5;
    G3_elev1=tf(0.08305, [1 0 0]);
    G3_trav=tf(0.003361, [1 0 0]);
elseif (heli == 4)
    ELEV_START = -24.25;
    ELEV_SLF = 24.25;            % The elevation at SLF [deg]
    K_CABLE = 5;
    VSUM_MAX = 36;    
    U_MAX = (VSUM_MAX - Vsum)*0.5;
    G4_elev1=tf(0.08355, [1 0 0]);
    G4_trav=tf(0.002362, [1 0 0]);
end
        
%-----[HELICOPTER CONSTANTS]---------------
% THESE APPLY TO ALL OF THE HELICOPTERS

KE_CNT = 4096;
KE_C2D = -360/4096;
D2R = pi/180.0;
R2D = 180/pi;
K_DAQ = 10;
