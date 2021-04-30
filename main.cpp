#include "fc_scara.h"
#include "fc_svg.h"

using namespace std;

int main() {
    int thickness;
    int length;
    int radius;
    int q1;
    int q2;
    int x;
    int y;

    //variable to control the program flow
    bool ex = true;

    //commandline program to create a structure, load a structure from an existing file and save to a file a new structure
    char c; // choice parameter
    char g;
    string s; // string to store the svg string of the structure
    string f; // string to store the name of the file
    fc_scara* scara; // pointer to a structure

    // messages for the user
    cout << "Build your scara robot with this program!" << endl;

    cout << endl;

    cout << "Chose an option: "<< endl;

    cout << endl;
    while(ex == true){
        cout << "Type \"1\" to create a new structure."<< endl;
        cout << "Type \"2\" to create a structure from an existing svg file"<< endl;
        cout << "Type \"3\" to save the structure to a new file"<< endl;
        cout << "Type \"4\" to edit an existing structure" << endl;
        cout << "Type \"5\" to delete the created structure" << endl;
        cout << "Type \"6\" to end the execution  of the program" << endl;

        // store the input 
        cin >> c;

        switch(c){
            case '1': {
                //first check if a structure exist and if the user want to overwrite-> need implementation

                // implementation of a function to ask parameters?
                cout << "Enter a value for each parameter: " << endl;

                cout << "thickness: ";
                cin >> thickness;
                cout << endl;

                cout << "length: ";
                cin >> length;
                cout << endl;

                cout << "radius: ";
                cin >> radius;
                cout << endl;

                cout << "q1: ";
                cin >> q1;
                cout << endl;

                cout << "q2: ";
                cin >> q2;
                cout << endl;

                cout << "x: ";
                cin >> x;
                cout << endl;

                cout << "y: ";
                cin >> y;
                cout << endl;


                //initialization and save to a file of the new struct:
                scara = fc_scara_init(thickness, length, radius, q1, q2, x, y);

                break;
        

            }
            case '2': {
                //first check if a structure exist -> need implementation

                cout << "Insert filename: ";
                cin >> f;
                cout << endl;
                
                scara = fc_load_from_file(f);

                string s = fc_scara_to_svg(scara);
                cout << "the svg string is: \n \n" + s << endl;

                cout << "end of the program!" << endl;

            }
            case '3': {
                //first check if a structure exist -> need implementation

                f = fc_scara_save(scara);

                cout << "struct created and saved to: " << f << " file" << endl;

                cout << "end of the program!" << endl;

                break;

            }
            case '4': {
                /*
                    first check if a structure exist -> need implementation

                    ...
                
                */

                //set thickness
                cout << "thickness: ";
                cin >> thickness;
                cout << endl;

                cout << fc_set_thickness(scara,thickness);

                cout << "length: ";
                cin >> length;
                cout << endl;

                cout << fc_set_thickness(scara,length);

                cout << "radius: ";
                cin >> radius;
                cout << endl;

                cout << fc_set_thickness(scara,radius);

                cout << "q1: ";
                cin >> q1;
                cout << endl;

                cout << fc_set_thickness(scara,q1);

                cout << "q2: ";
                cin >> q2;
                cout << endl;

                cout << fc_set_thickness(scara,q2);
                break;
            }
            case '5': {

                fc_delete_robot(scara);

                break;
            }
            case '6':{
                cout << "end of the program" << endl;
                ex = false;

                break;
            }
            defult: break;
        }
    }

    return 0;
}
