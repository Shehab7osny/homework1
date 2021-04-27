#ifndef FC_SCARA_H
#define FC_SCARA_H

#include <iostream>
#include <string>
#include <math.h>

using namespace std;
/*
    This structure defines the coordinates of the frame
*/
struct fc_frame {
    int x;
    int y;
};

/*
    structure with dimensions of the robot
*/
struct fc_scara {
    unsigned int thickness; //arm thickness
    unsigned int length; //arm length
    unsigned int radius;//revolute joint radius
    int q1; // angle of 1st arm with respect to the x-axis
    int q2; // angle of the 2nd arm with respect to the 1st  
    fc_frame origin; //position of the joint connected to the frame  
    int svg_width; // width of the svg window equal to heigth
};
/*
    declaration of function for building the robot & check constraints
    @param thickness
    @param length
    @param diameter
    @param q1
    @parma q2
    @param origin
    return pointer to a struct containing all dimension of the robot

    error signaling C-style
    - if thickness, length, diameter, origin is <= 0, returns NULL
    - if q2 == 0, returns NULL
    - if diameter > thickness, returns NULL
*/
fc_scara* fc_scara_init( unsigned int thickness, unsigned int length, unsigned int radius, int q1, int q2, int x, int y);

/*
    This function will create a svg string which will draw the robot
    @param a pointer to the structure containing the data for the piston
    return string with svg data
*/
string fc_scara_to_svg(fc_scara* scara);

/*
    This function delete the dynamic memory for the robot
*/
void delete_robot(fc_scara* robot);

#endif