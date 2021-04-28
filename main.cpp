#include "fc_scara.h"
#include "fc_svg.h"

using namespace std;

int main() {

    //some data coherent with constraints
    int thickness = 20;
    int length = 200;
    int radius = 10;
    int q1 = - 45;
    int q2 = - 60;
    int x = 200;
    int y = 900;

    int new_thikness;
    int new_length;
    int new_radius;
    int new_q1;
    int new_q2;
    int new_x;
    int new_y;

    char parameters[7][10]={"thickness", "length", "radius", "q1","q2","x","y"};
    

    //initialisation of a new robot:
    fc_scara* scara;

    scara = fc_scara_init(thickness, length,  radius,  q1, q2,  x,  y);

    cout << "Writing svg string... " << endl;
    cout << endl;

    string s = fc_scara_to_svg(scara);
    cout << "the svg string is: \n \n" + s << endl;
    

    cout << "save your file: " << endl;

    fc_save(s);

    //string containing filename
    string p;

    cout << "nome file: " << endl;

    cin >> p;

    string h = fc_read_svg_device (p);

    cout << h;

    scara = fc_svg_to_scara(h);

    s = fc_scara_to_svg(scara);
    cout << "the svg string is: \n \n" + s << endl;
    

    fc_delete_robot(scara);

    cout << "end of the program!" << endl;

    return 0;
}
