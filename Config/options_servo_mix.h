// This file is part of MatrixPilot.
//
//    http://code.google.com/p/gentlenav/
//
// Copyright 2009-2011 MatrixPilot Team
// See the AUTHORS.TXT file for a list of authors of MatrixPilot.
//
// MatrixPilot is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// MatrixPilot is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with MatrixPilot.  If not, see <http://www.gnu.org/licenses/>.


#ifndef _SERVOMIX_OPTIONS_H_
#define _SERVOMIX_OPTIONS_H_

/*
#if (AIRFRAME_TYPE == AIRFRAME_GLIDER)

//for pure gliders: set THROTTLE_INPUT_CHANNEL = CHANNEL_UNUSED and change the FAILSAFE_INPUT_CHANNEL 
//for Overspeed brake: required are: 
// -  a BRAKE_INPUT_CHANNEL
// -  SPEED_CONTROL 1
// -  GAINS_VARIABLE 1
// -  ALTITUDE_GAINS_VARIABLE 1
// Overspeed brake is not active in manual mode 

#define RUDDER_OUTPUT_OFFSET                                0          // right = +  surface moves right, seen from behind
#define ELEVATOR_OUTPUT_OFFSET                              0          // trailing edge up = +  trailing edge/nose up
#define AILERON_RIGHT_OUTPUT_OFFSET                         0          // trailing edge up = +
#define AILERON_LEFT_OUTPUT_OFFSET                          0          // trailing edge up = +
#define FLAP_LEFT_OUTPUT_OFFSET                           900          // trailing edge up = +
#define FLAP_RIGHT_OUTPUT_OFFSET                          900          // increase = +
//                                                           
//Warning: All of the following values should be in the range of -1.0 to 1.0 
//                                                           
#define AILERON_RIGHT_BRAKE_FACTOR                           0.50 
#define AILERON_RIGHT_FLAPS_POS_FACTOR                       0.16 
#define AILERON_RIGHT_FLAPS_NEG_FACTOR                       0.08 
#define AILERON_RIGHT_LP_FLAPS_FACTOR                        1.00       //left part factor of aileron with normal flaps setting
#define AILERON_RIGHT_RP_FLAPS_FACTOR                       -0.60       //right part factor of aileron with normal flaps setting
#define AILERON_RIGHT_LP_SPEED_FLAPS_FACTOR                  0.60       //left part factor of aileron with speed flaps setting
#define AILERON_RIGHT_RP_SPEED_FLAPS_FACTOR                 -0.60       //right part factor of aileron with speed flaps setting
#define AILERON_RIGHT_OFFSET_REVERSED                        0          //0 or 1 Make positive offset move surface up or to the right
#define AILERON_RIGHT_DIR_REVERSED                           1          //0 or 1 don't or do reverse
//                                                           
#define FLAP_LEFT_BRAKE_FACTOR                             -0.80 
#define FLAP_LEFT_FLAPS_POS_FACTOR                          0.03 
#define FLAP_LEFT_FLAPS_NEG_FACTOR                          0.03 
#define FLAP_LEFT_LP_FLAPS_FACTOR                           0.20       //left part factor of aileron with normal flaps setting
#define FLAP_LEFT_RP_FLAPS_FACTOR                          -0.10       //right part factor of aileron with normal flaps setting
#define FLAP_LEFT_LP_SPEED_FLAPS_FACTOR                     0.10       //left part factor of aileron with speed flaps setting
#define FLAP_LEFT_RP_SPEED_FLAPS_FACTOR                    -0.10       //right part factor of aileron with speed flaps setting
#define FLAP_LEFT_OFFSET_REVERSED                           0          //0 or 1 Make positive offset move surface up
#define FLAP_LEFT_DIR_REVERSED                              1          //0 or 1 don't or do reverse
//                                                           
#define FLAP_RIGHT_BRAKE_FACTOR                            -0.80 
#define FLAP_RIGHT_FLAPS_POS_FACTOR                         0.03 
#define FLAP_RIGHT_FLAPS_NEG_FACTOR                         0.03 
#define FLAP_RIGHT_LP_FLAPS_FACTOR                         -0.10       //left part factor of aileron with normal flaps setting
#define FLAP_RIGHT_RP_FLAPS_FACTOR                          0.20       //right part factor of aileron with normal flaps setting
#define FLAP_RIGHT_LP_SPEED_FLAPS_FACTOR                   -0.10       //left part factor of aileron with speed flaps setting
#define FLAP_RIGHT_RP_SPEED_FLAPS_FACTOR                    0.10       //right part factor of aileron with speed flaps setting
#define FLAP_RIGHT_OFFSET_REVERSED                          0          //0 or 1 Make positive offset move surface up
#define FLAP_RIGHT_DIR_REVERSED                             0          //0 or 1 don't or do reverse
//                                                           
#define AILERON_LEFT_BRAKE_FACTOR                          0.50 
#define AILERON_LEFT_FLAPS_POS_FACTOR                      0.16 
#define AILERON_LEFT_FLAPS_NEG_FACTOR                      0.08 
#define AILERON_LEFT_LP_FLAPS_FACTOR                      -0.60       //left part factor of aileron with normal flaps setting
#define AILERON_LEFT_RP_FLAPS_FACTOR                       1.00       //right part factor of aileron with normal flaps setting
#define AILERON_LEFT_LP_SPEED_FLAPS_FACTOR                -0.60       //left part factor of aileron with speed flaps setting
#define AILERON_LEFT_RP_SPEED_FLAPS_FACTOR                 0.60       //right part factor of aileron with speed flaps setting
#define AILERON_LEFT_OFFSET_REVERSED                       0          //0 or 1 Make positive offset move surface up
#define AILERON_LEFT_DIR_REVERSED                          0          //0 or 1 don't or do reverse
//                                                           
#define ELEVATOR_BRAKE_FACTOR                              -1.00       //mix brakes (brake) to elevator, usually negative for brake
#define ELEVATOR_THROTTLE_FACTOR                           -0.00       //apply elevator mix from throttle
#define ELEVATOR_OFFSET_REVERSED                            0          //set 0 or 1 so that positive moves nose up 
#define ELEVATOR_DIR_REVERSED                               1          //0 or 1 don't or do reverse
//                                                           
#define RUDDER_FROM_AILERON_FACTOR                          0.40       //apply rudder mix from aileron input
#define RUDDER_FACTOR                                       1.00       //Reduce throw
#define RUDDER_OFFSET_REVERSED                              0          //0 or 1 Make positive offset move surface up or to the right (seen from aft)
#define RUDDER_DIR_REVERSED                                 0          //0 or 1 don't or do reverse
//                                                           
#define THROTTLE_FACTOR                                     1.00       //Reduce throttle

#endif // AIRFRAME_GLIDER
*/

#if (AIRFRAME_TYPE == AIRFRAME_GLIDER)

#if ( MODEL_FANTASY == 1 && HILSIM == 1 )
//Fantasy

//for pure gliders: set THROTTLE_INPUT_CHANNEL = CHANNEL_UNUSED and change the FAILSAFE_INPUT_CHANNEL 
//for Overspeed brake: required are: 
// -  a BRAKE_INPUT_CHANNEL
// -  SPEED_CONTROL 1
// -  GAINS_VARIABLE 1
// -  ALTITUDE_GAINS_VARIABLE 1
// Overspeed brake is not active in manual mode 

#define RUDDER_OUTPUT_OFFSET                                0          // right = +  surface moves right, seen from behind
#define ELEVATOR_OUTPUT_OFFSET                              0          // trailing edge up = +  trailing edge/nose up
#define AILERON_RIGHT_OUTPUT_OFFSET                        30          // trailing edge up = +
#define AILERON_LEFT_OUTPUT_OFFSET                        -30          // trailing edge up = +
#define FLAP_LEFT_OUTPUT_OFFSET                           900          // trailing edge up = +
#define FLAP_RIGHT_OUTPUT_OFFSET                          900          // increase = +
//                                                           
//Warning: All of the following values should be in the range of -1.0 to 1.0 
//                                                           
#define AILERON_RIGHT_BRAKE_FACTOR                           0.50 
#define AILERON_RIGHT_FLAPS_POS_FACTOR                       0.16 
#define AILERON_RIGHT_FLAPS_NEG_FACTOR                       0.08 
#define AILERON_RIGHT_LP_FLAPS_FACTOR                        1.00       //left part factor of aileron with normal flaps setting
#define AILERON_RIGHT_RP_FLAPS_FACTOR                       -0.60       //right part factor of aileron with normal flaps setting
#define AILERON_RIGHT_LP_SPEED_FLAPS_FACTOR                  0.60       //left part factor of aileron with speed flaps setting
#define AILERON_RIGHT_RP_SPEED_FLAPS_FACTOR                 -0.60       //right part factor of aileron with speed flaps setting
#define AILERON_RIGHT_OFFSET_REVERSED                        0          //0 or 1 Make positive offset move surface up or to the right
#define AILERON_RIGHT_DIR_REVERSED                           1          //0 or 1 don't or do reverse
//                                                           
#define FLAP_LEFT_BRAKE_FACTOR                             -0.80 
#define FLAP_LEFT_FLAPS_POS_FACTOR                          0.03 
#define FLAP_LEFT_FLAPS_NEG_FACTOR                          0.03 
#define FLAP_LEFT_LP_FLAPS_FACTOR                           0.20       //left part factor of aileron with normal flaps setting
#define FLAP_LEFT_RP_FLAPS_FACTOR                          -0.10       //right part factor of aileron with normal flaps setting
#define FLAP_LEFT_LP_SPEED_FLAPS_FACTOR                     0.10       //left part factor of aileron with speed flaps setting
#define FLAP_LEFT_RP_SPEED_FLAPS_FACTOR                    -0.10       //right part factor of aileron with speed flaps setting
#define FLAP_LEFT_OFFSET_REVERSED                           0          //0 or 1 Make positive offset move surface up
#define FLAP_LEFT_DIR_REVERSED                              1          //0 or 1 don't or do reverse
//                                                           
#define FLAP_RIGHT_BRAKE_FACTOR                            -0.80 
#define FLAP_RIGHT_FLAPS_POS_FACTOR                         0.03 
#define FLAP_RIGHT_FLAPS_NEG_FACTOR                         0.03 
#define FLAP_RIGHT_LP_FLAPS_FACTOR                         -0.10       //left part factor of aileron with normal flaps setting
#define FLAP_RIGHT_RP_FLAPS_FACTOR                          0.20       //right part factor of aileron with normal flaps setting
#define FLAP_RIGHT_LP_SPEED_FLAPS_FACTOR                   -0.10       //left part factor of aileron with speed flaps setting
#define FLAP_RIGHT_RP_SPEED_FLAPS_FACTOR                    0.10       //right part factor of aileron with speed flaps setting
#define FLAP_RIGHT_OFFSET_REVERSED                          0          //0 or 1 Make positive offset move surface up
#define FLAP_RIGHT_DIR_REVERSED                             0          //0 or 1 don't or do reverse
//                                                           
#define AILERON_LEFT_BRAKE_FACTOR                          0.50 
#define AILERON_LEFT_FLAPS_POS_FACTOR                      0.16 
#define AILERON_LEFT_FLAPS_NEG_FACTOR                      0.08 
#define AILERON_LEFT_LP_FLAPS_FACTOR                      -0.60       //left part factor of aileron with normal flaps setting
#define AILERON_LEFT_RP_FLAPS_FACTOR                       1.00       //right part factor of aileron with normal flaps setting
#define AILERON_LEFT_LP_SPEED_FLAPS_FACTOR                -0.60       //left part factor of aileron with speed flaps setting
#define AILERON_LEFT_RP_SPEED_FLAPS_FACTOR                 0.60       //right part factor of aileron with speed flaps setting
#define AILERON_LEFT_OFFSET_REVERSED                       0          //0 or 1 Make positive offset move surface up
#define AILERON_LEFT_DIR_REVERSED                          0          //0 or 1 don't or do reverse//                                                           
//                                                           
#define ELEVATOR_BRAKE_FACTOR                              -1.00       //mix brakes (brake) to elevator, usually negative for brake
#define ELEVATOR_THROTTLE_FACTOR                           -0.00       //apply elevator mix from throttle
#define ELEVATOR_OFFSET_REVERSED                            0          //0 or 1 Make postive offset move nose up 
#define ELEVATOR_DIR_REVERSED                               1          //0 or 1 don't or do reverse
//                                                           
#define RUDDER_FROM_AILERON_FACTOR                          0.40       //apply rudder mix from aileron input
#define RUDDER_FACTOR                                       0.80       //Reduce throw
#define RUDDER_OFFSET_REVERSED                              0          //0 or 1 Make postive offset move surface up or to the right (seen from aft)
#define RUDDER_DIR_REVERSED                                 0          //0 or 1 don't or do reverse
//                                                           
#define THROTTLE_FACTOR                                     0.80       //Reduce throttle

#endif


#if ( MODEL_FANTASY == 1 && HILSIM == 0 )
//Fantasy

//for pure gliders: set THROTTLE_INPUT_CHANNEL = CHANNEL_UNUSED and change the FAILSAFE_INPUT_CHANNEL 
//for Overspeed brake: required are: 
// -  a BRAKE_INPUT_CHANNEL
// -  SPEED_CONTROL 1
// -  GAINS_VARIABLE 1
// -  ALTITUDE_GAINS_VARIABLE 1
// Overspeed brake is not active in manual mode 

#define AILERON_RIGHT_OUTPUT_OFFSET                      -150          // trailing edge up = +
#define AILERON_LEFT_OUTPUT_OFFSET                         50          // trailing edge up = +
#define FLAP_LEFT_OUTPUT_OFFSET                           830          // trailing edge up = +
#define FLAP_RIGHT_OUTPUT_OFFSET                          900          // increase = +
#define ELEVATOR_OUTPUT_OFFSET                            200          // trailing edge up = +  trailing edge/nose up
#define RUDDER_OUTPUT_OFFSET                                0          // right = +  surface moves right, seen from behind
//                                                             
//Warning: All of the following values should be in the range of -1.0 to 1.0 
//                                                              
#define AILERON_RIGHT_BRAKE_FACTOR                          -0.70 
#define AILERON_RIGHT_FLAPS_POS_FACTOR                      -0.18 
#define AILERON_RIGHT_FLAPS_NEG_FACTOR                      -0.18 
#define AILERON_RIGHT_LP_FLAPS_FACTOR                        1.00       //left part factor of aileron with normal flaps setting
#define AILERON_RIGHT_RP_FLAPS_FACTOR                       -0.60       //right part factor of aileron with normal flaps setting
#define AILERON_RIGHT_LP_SPEED_FLAPS_FACTOR                  0.60       //left part factor of aileron with speed flaps setting
#define AILERON_RIGHT_RP_SPEED_FLAPS_FACTOR                 -0.60       //right part factor of aileron with speed flaps setting
#define AILERON_RIGHT_OFFSET_REVERSED                        1          //0 or 1 Make postive offset move surface up or to the right
#define AILERON_RIGHT_DIR_REVERSED                           1          //0 or 1 don't or do reverse
//                                                           
#define FLAP_LEFT_BRAKE_FACTOR                             -0.80 
#define FLAP_LEFT_FLAPS_POS_FACTOR                          0.14 
#define FLAP_LEFT_FLAPS_NEG_FACTOR                          0.14 
#define FLAP_LEFT_LP_FLAPS_FACTOR                           0.20       //left part factor of aileron with normal flaps setting
#define FLAP_LEFT_RP_FLAPS_FACTOR                          -0.10       //right part factor of aileron with normal flaps setting
#define FLAP_LEFT_LP_SPEED_FLAPS_FACTOR                     0.20       //left part factor of aileron with speed flaps setting
#define FLAP_LEFT_RP_SPEED_FLAPS_FACTOR                    -0.20       //right part factor of aileron with speed flaps setting
#define FLAP_LEFT_OFFSET_REVERSED                           0          //0 or 1 Make postive offset move surface up
#define FLAP_LEFT_DIR_REVERSED                              1      	   //0 or 1 don't or do reverse
//                                                           
#define FLAP_RIGHT_BRAKE_FACTOR                            -0.80 
#define FLAP_RIGHT_FLAPS_POS_FACTOR                         0.10 
#define FLAP_RIGHT_FLAPS_NEG_FACTOR                         0.10 
#define FLAP_RIGHT_LP_FLAPS_FACTOR                         -0.10       //left part factor of aileron with normal flaps setting
#define FLAP_RIGHT_RP_FLAPS_FACTOR                          0.18       //right part factor of aileron with normal flaps setting
#define FLAP_RIGHT_LP_SPEED_FLAPS_FACTOR                   -0.10       //left part factor of aileron with speed flaps setting
#define FLAP_RIGHT_RP_SPEED_FLAPS_FACTOR                    0.10       //right part factor of aileron with speed flaps setting
#define FLAP_RIGHT_OFFSET_REVERSED                          0          //0 or 1 Make postive offset move surface up
#define FLAP_RIGHT_DIR_REVERSED                             0          //0 or 1 don't or do reverse
//                                                           
#define AILERON_LEFT_BRAKE_FACTOR                         -0.40 
#define AILERON_LEFT_FLAPS_POS_FACTOR                     -0.16 
#define AILERON_LEFT_FLAPS_NEG_FACTOR                     -0.16 
#define AILERON_LEFT_LP_FLAPS_FACTOR                      -0.80       //left part factor of aileron with normal flaps setting
#define AILERON_LEFT_RP_FLAPS_FACTOR                       1.00       //right part factor of aileron with normal flaps setting
#define AILERON_LEFT_LP_SPEED_FLAPS_FACTOR                -0.50       //left part factor of aileron with speed flaps setting
#define AILERON_LEFT_RP_SPEED_FLAPS_FACTOR                 0.50       //right part factor of aileron with speed flaps setting 
#define AILERON_LEFT_OFFSET_REVERSED                       1      	   //0 or 1 Make postive offset move surface up
#define AILERON_LEFT_DIR_REVERSED                          0      	   //0 or 1 don't or do reverse
//                                                           
#define ELEVATOR_BRAKE_FACTOR                              -0.30       //mix brakes (brake) to elevator, usually negative for brake
#define ELEVATOR_THROTTLE_FACTOR                            0.00       //apply elevator mix from throttle
#define ELEVATOR_OFFSET_REVERSED                            0          //0 or 1 Make postive offset move nose up 
#define ELEVATOR_DIR_REVERSED                               1          //0 or 1 don't or do reverse
//                                                           
#define RUDDER_FROM_AILERON_FACTOR                          0.40       //apply rudder mix from aileron input
#define RUDDER_FACTOR                                       1          //Reduce throw
#define RUDDER_OFFSET_REVERSED                              0      	   //0 or 1 Make postive offset move surface up or to the right (seen from aft)
#define RUDDER_DIR_REVERSED                                 1          //0 or 1 don't or do reverse
//                                                           
#define THROTTLE_FACTOR                                     0.70       //Reduce throttle

#endif


#if ( MODEL_GRAFAS == 1 && HILSIM == 0 )
//Grafas

#define AILERON_LEFT_OUTPUT_OFFSET                         50          // y  up = +
#define FLAP_LEFT_OUTPUT_OFFSET                           850          // n  up = +
#define FLAP_RIGHT_OUTPUT_OFFSET                          800          // y  up = +
#define AILERON_RIGHT_OUTPUT_OFFSET                       -50          // n  up = +
#define THROTTLE_OUTPUT_OFFSET                              0
#define ELEVATOR_OUTPUT_OFFSET                            150          // up = +  nose up
#define RUDDER_OUTPUT_OFFSET                              -130          // right = +  surface moves right, seen from behind
//                                                           
#define AILERON_LEFT_BRAKE_FACTOR                          0.50 
#define AILERON_LEFT_FLAPS_POS_FACTOR                      0.08 
#define AILERON_LEFT_FLAPS_NEG_FACTOR                      0.16 
#define AILERON_LEFT_LP_FLAPS_FACTOR                       1.00       //left part factor of aileron with normal flaps setting
#define AILERON_LEFT_RP_FLAPS_FACTOR                      -0.70       //right part factor of aileron with normal flaps setting
#define AILERON_LEFT_LP_SPEED_FLAPS_FACTOR                 0.50       //left part factor of aileron with speed flaps setting
#define AILERON_LEFT_RP_SPEED_FLAPS_FACTOR                -0.50       //right part factor of aileron with speed flaps setting 
#define AILERON_LEFT_OFFSET_REVERSED                       0          //0 or 1 Make postive offset move surface up
#define AILERON_LEFT_DIR_REVERSED                          1          //0 or 1 don't or do reverse
//                                                           
#define FLAP_LEFT_BRAKE_FACTOR                             -0.80 
#define FLAP_LEFT_FLAPS_POS_FACTOR                          0.06 
#define FLAP_LEFT_FLAPS_NEG_FACTOR                          0.10 
#define FLAP_LEFT_LP_FLAPS_FACTOR                           0.13       //left part factor of aileron with normal flaps setting
#define FLAP_LEFT_RP_FLAPS_FACTOR                          -0.10      //right part factor of aileron with normal flaps setting
#define FLAP_LEFT_LP_SPEED_FLAPS_FACTOR                     0.20       //left part factor of aileron with speed flaps setting
#define FLAP_LEFT_RP_SPEED_FLAPS_FACTOR                    -0.20       //right part factor of aileron with speed flaps setting
#define FLAP_LEFT_OFFSET_REVERSED                           0          //0 or 1 Make postive offset move surface up
#define FLAP_LEFT_DIR_REVERSED                              1          //0 or 1 don't or do reverse
//                                                           
#define FLAP_RIGHT_BRAKE_FACTOR                            -0.80 
#define FLAP_RIGHT_FLAPS_POS_FACTOR                         0.09 
#define FLAP_RIGHT_FLAPS_NEG_FACTOR                         0.13 
#define FLAP_RIGHT_LP_FLAPS_FACTOR                         -0.15       //left part factor of aileron with normal flaps setting
#define FLAP_RIGHT_RP_FLAPS_FACTOR                          0.15       //right part factor of aileron with normal flaps setting
#define FLAP_RIGHT_LP_SPEED_FLAPS_FACTOR                   -0.10       //left part factor of aileron with speed flaps setting
#define FLAP_RIGHT_RP_SPEED_FLAPS_FACTOR                    0.10       //right part factor of aileron with speed flaps setting
#define FLAP_RIGHT_OFFSET_REVERSED                          0          //0 or 1 Make postive offset move surface up
#define FLAP_RIGHT_DIR_REVERSED                             0          //0 or 1 don't or do reverse
//
#define AILERON_RIGHT_BRAKE_FACTOR                           0.50 
#define AILERON_RIGHT_FLAPS_POS_FACTOR                       0.08 
#define AILERON_RIGHT_FLAPS_NEG_FACTOR                       0.18 
#define AILERON_RIGHT_LP_FLAPS_FACTOR                       -0.50       //left part factor of aileron with normal flaps setting
#define AILERON_RIGHT_RP_FLAPS_FACTOR                        1.00       //right part factor of aileron with normal flaps setting
#define AILERON_RIGHT_LP_SPEED_FLAPS_FACTOR                 -0.60       //left part factor of aileron with speed flaps setting
#define AILERON_RIGHT_RP_SPEED_FLAPS_FACTOR                  0.60       //right part factor of aileron with speed flaps setting
#define AILERON_RIGHT_OFFSET_REVERSED                        0          //0 or 1 Make postive offset move surface up or to the right
#define AILERON_RIGHT_DIR_REVERSED                           0          //0 or 1 don't or do reverse
//                                                           
#define ELEVATOR_FACTOR                                     1.00       //Reduce throw
#define ELEVATOR_BRAKE_FACTOR                              -0.60       //mix brakes (brake) to elevator, usually negative for brake
#define ELEVATOR_THROTTLE_FACTOR                            0.00       //apply elevator mix from throttle
#define ELEVATOR_OFFSET_REVERSED                            0          //0 or 1 Make postive offset move nose up 
#define ELEVATOR_DIR_REVERSED                               1          //0 or 1 don't or do reverse
//                                                           
#define RUDDER_FROM_AILERON_FACTOR                          0.50       //apply rudder mix from aileron input
#define RUDDER_FACTOR                                       1          //Reduce throw
#define RUDDER_OFFSET_REVERSED                              0          //0 or 1 Make postive offset move surface up or to the right (seen from aft)
#define RUDDER_DIR_REVERSED                                 1          //0 or 1 don't or do reverse
//                                                           
#define THROTTLE_FACTOR                                     0.55       //Reduce throttle


#endif


#if ( MODEL_LINEA == 1 && HILSIM == 0 )
//Linea
#define RUDDER_OUTPUT_OFFSET                             -140          // right = +  surface moves right, seen from behind
#define ELEVATOR_OUTPUT_OFFSET                              0          // up = +  nose up
#define AILERON_RIGHT_OUTPUT_OFFSET                        70          // n  up = +
#define AILERON_LEFT_OUTPUT_OFFSET                        -70          // y  up = +
#define FLAP_LEFT_OUTPUT_OFFSET                           780          // n  up = +
#define FLAP_RIGHT_OUTPUT_OFFSET                          290          // y  up = +
#define THROTTLE_OUTPUT_OFFSET                           -150
//                                                           
#define AILERON_RIGHT_BRAKE_FACTOR                          -0.60
#define AILERON_RIGHT_FLAPS_POS_FACTOR                       0.10
#define AILERON_RIGHT_FLAPS_NEG_FACTOR                       0.10
#define AILERON_RIGHT_LP_FLAPS_FACTOR                        1.00       //left part factor of aileron with normal flaps setting
#define AILERON_RIGHT_RP_FLAPS_FACTOR                       -0.60       //right part factor of aileron with normal flaps setting
#define AILERON_RIGHT_LP_SPEED_FLAPS_FACTOR                  0.60       //left part factor of aileron with speed flaps setting
#define AILERON_RIGHT_RP_SPEED_FLAPS_FACTOR                 -0.60       //right part factor of aileron with speed flaps setting
#define AILERON_RIGHT_OFFSET_REVERSED                        0          //0 or 1 Make postive offset move surface up or to the right
#define AILERON_RIGHT_DIR_REVERSED                           1          //0 or 1 don't or do reverse
//                                                           
#define FLAP_LEFT_BRAKE_FACTOR                             -0.80
#define FLAP_LEFT_FLAPS_POS_FACTOR                          0.03
#define FLAP_LEFT_FLAPS_NEG_FACTOR                          0.03
#define FLAP_LEFT_LP_FLAPS_FACTOR                           0.20       //left part factor of aileron with normal flaps setting
#define FLAP_LEFT_RP_FLAPS_FACTOR                          -0.10       //right part factor of aileron with normal flaps setting
#define FLAP_LEFT_LP_SPEED_FLAPS_FACTOR                     0.20       //left part factor of aileron with speed flaps setting  
#define FLAP_LEFT_RP_SPEED_FLAPS_FACTOR                    -0.20       //right part factor of aileron with speed flaps setting 
#define FLAP_LEFT_OFFSET_REVERSED                           0          //0 or 1 Make postive offset move surface up
#define FLAP_LEFT_DIR_REVERSED                              1          //0 or 1 don't or do reverse
//                                                           
#define FLAP_RIGHT_BRAKE_FACTOR                            -0.80
#define FLAP_RIGHT_FLAPS_POS_FACTOR                         0.02
#define FLAP_RIGHT_FLAPS_NEG_FACTOR                         0.02
#define FLAP_RIGHT_LP_FLAPS_FACTOR                         -0.10       //left part factor of aileron with normal flaps setting
#define FLAP_RIGHT_RP_FLAPS_FACTOR                          0.18       //right part factor of aileron with normal flaps setting
#define FLAP_RIGHT_LP_SPEED_FLAPS_FACTOR                   -0.10       //left part factor of aileron with speed flaps setting
#define FLAP_RIGHT_RP_SPEED_FLAPS_FACTOR                    0.10       //right part factor of aileron with speed flaps setting 
#define FLAP_RIGHT_OFFSET_REVERSED                          0          //0 or 1 Make postive offset move surface up
#define FLAP_RIGHT_DIR_REVERSED                             0          //0 or 1 don't or do reverse
//                                                           
#define AILERON_LEFT_BRAKE_FACTOR                         -0.50
#define AILERON_LEFT_FLAPS_POS_FACTOR                      0.12
#define AILERON_LEFT_FLAPS_NEG_FACTOR                      0.12
#define AILERON_LEFT_LP_FLAPS_FACTOR                      -0.80       //left part factor of aileron with normal flaps setting
#define AILERON_LEFT_RP_FLAPS_FACTOR                       1.00       //right part factor of aileron with normal flaps setting
#define AILERON_LEFT_LP_SPEED_FLAPS_FACTOR                -0.50       //left part factor of aileron with speed flaps setting  
#define AILERON_LEFT_RP_SPEED_FLAPS_FACTOR                 0.50       //right part factor of aileron with speed flaps setting 
#define AILERON_LEFT_OFFSET_REVERSED                       0          //0 or 1 Make postive offset move surface up
#define AILERON_LEFT_DIR_REVERSED                          0          //0 or 1 don't or do reverse
//                                                           
#define ELEVATOR_FACTOR                                     0.60       //Reduce throw
#define ELEVATOR_BRAKE_FACTOR                              -0.50       //mix brakes (brake) to elevator, usually negative for brake
#define ELEVATOR_THROTTLE_FACTOR                           -0.00       //apply elevator mix from throttle
#define ELEVATOR_OFFSET_REVERSED                            0          //0 or 1 Make postive offset move nose up
#define ELEVATOR_DIR_REVERSED                               0          //0 or 1 don't or do reverse
//                                                           
#define RUDDER_FROM_AILERON_FACTOR                          0.40       //apply rudder mix from aileron input
#define RUDDER_FACTOR                                       1.00       //Reduce throw
#define RUDDER_OFFSET_REVERSED                              0          //0 or 1 Make postive offset move surface up or to the right (seen from aft)
#define RUDDER_DIR_REVERSED                                 0          //0 or 1 don't or do reverse
//                                                           
#define THROTTLE_FACTOR                                     0.42       //Reduce throttle
//
//
#endif // Linea    
#endif // AIRFRAME_GLIDER

#endif // _SERVOMIX_OPTIONS_H_
