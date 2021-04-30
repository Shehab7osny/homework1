#ifndef FC_SVG_H
#define FC_SVG_H

#include <string>
#include <iostream>
#include <fstream>
#include <streambuf>
#include <sstream>

using namespace std;
/*
    This function will create a structure frm a given svg file containing the representation of a scara robot
    @param the file name
    @return string containing the file content

*/
string fc_read_svg_device (string filename);

/*
    function to save in a file the svg epresentation of the device
    @param string containing the svg representation
    @param name of the file you want to create
    @return void
*/
string fc_save(string svg_rep);

#endif