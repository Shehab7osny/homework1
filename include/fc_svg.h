#ifndef FC_SVG_H
#define FC_SVG_H

#include <string>
#include <iostream>
#include <fstream>
#include <streambuf>
#include <sstream>

using namespace std;

/*
    This function interpret svg code in order to build a structure representing a device
    @param string containing the name of the file you want to read
    @return a pointer to a new struct
*/
//string fc_read_svg_device(string filename);

/*
    function to save in a file the svg epresentation of the device
    @param string containing the svg representation
    @param name of the file you want to create
    @return void
*/
void fc_save(string svg_rep);


#endif