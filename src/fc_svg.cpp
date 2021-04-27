#include "fc_svg.h"

//string fc_read_svg_device(string filename){}

void fc_save(string svg_rep){
    
    string p; // auxiliary string
    //ask for the filename
    cout << "Insert filename: (include \".svg\" extension)" << endl;
    cin >> p ;

    ofstream MyFile(p);

    string content = svg_rep;

    MyFile << content;

    MyFile.close();

}

