#ifndef FC_SCARA_H
#define FC_SCARA_H

#include <iostream>
#include <string>
#include <math.h>

#include "fc_svg.h"


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
    int thickness; //arm thickness
    int length; //arm length
    int radius;//revolute joint radius
    int q1; // angle of 1st arm with respect to the x-axis
    int q2; // angle of the 2nd arm with respect to the 1st  
    fc_frame origin; //position of the joint connected to the frame  
    int svg_width; // width of the svg window equal to heigth
    /*
        further implementations:
        adding fields which takes into account for the x and y position of the second revolute joint
        add fields which takes into account for the translation of all objects, maybe you can add a field 
        named: translation_first_arm for example
    */
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
fc_scara* fc_scara_init( int thickness, int length,  int radius, int q1, int q2, int x, int y);


/*
    Function used to change thickness of an existing structure
    @param pointer to an existing structure
    @param new value thickness
    return value:
        - 1 if constraints are violated
        - 0 if constraints are satisfied
*/
int fc_set_thickness(fc_scara* robot, int new_thickness);

/*
    Function used to change length of an existing structure
    @param pointer to an existing structure
    @param new value 
    return value:
        - 1 if constraints are violated
        - 0 if constraints are satisfied
*/
int fc_set_length(fc_scara* robot, int new_length);

/*
    Function used to change radius of an existing structure
    @param pointer to an existing structure
    @param new value 
    return value:
        - 1 if constraints are violated
        - 0 if constraints are satisfied
*/
int fc_set_radius(fc_scara* robot, int new_radius);

/*
    Function used to change q1 of an existing structure
    @param pointer to an existing structure
    @param new value 
    return value:
        - 1 if constraints are violated
        - 0 if constraints are satisfied
*/
int fc_set_q1(fc_scara* robot, int new_q1);

/*
    Function used to change q2 of an existing structure
    @param pointer to an existing structure
    @param new value 
    return value:
        - 1 if constraints are violated
        - 0 if constraints are satisfied
*/
int fc_set_q2(fc_scara* robot, int new_q2);

/*
    Function used to change the position of the frame of an existing structure
    @param pointer to an existing structure
    @param new value 
    return value:
        - 1 if constraints are violated
        - 0 if constraints are satisfied
*/
int fc_set_frame(fc_scara* robot, int new_x, int new_y);

/*
    This function will create a svg string which will draw the robot
    @param a pointer to the structure containing the data for the piston
    return string with svg data
*/
string fc_scara_to_svg(fc_scara* scara);

/*
    function which creates a structure from reading the svg file
    @param string with file content
    @return pointer to a structure

*/
fc_scara* fc_svg_to_scara(string content);

/*
    This function delete the dynamic memory for the robot
*/
void fc_delete_robot(fc_scara* robot);

/*
    Function which loads a structure from a file
*/
fc_scara* fc_load_from_file(string filename);

/*
    function to save on file 
*/
string fc_scara_save(fc_scara* scara);

#endif