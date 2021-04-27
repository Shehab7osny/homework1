#include <fc_scara.h>

using namespace std;

int main() {

    //some data
    unsigned int thickness = 60;
    unsigned int length = 500;
    unsigned int radius = 25;
    int q1 = - 45;
    int q2 = - 60;
    int x = 200;
    int y = 900;

    //initialisation of a new robot:
     fc_scara* scara;

     scara = fc_scara_init(thickness, length,  radius,  q1, q2,  x,  y);


    cout << "Scara robot mark1 test: "<< endl;
    cout << "Writing svg string... " << endl;

    string s = fc_scara_to_svg(scara);
    cout << "the svg string is: \n" + s << endl;

    scara = fc_set(scara);

    s = fc_scara_to_svg(scara);
    cout << "the svg string is: \n" + s << endl;
    
    cout << "end of the program!" << endl;

    delete_robot(scara);

    return 0;
}
