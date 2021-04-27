#include "fc_scara.h"

fc_scara* fc_scara_init (int thickness, int length,  int radius, int q1, int q2, int x, int y){
    // check constraints
    /*
        maybe you should check that the svg fle is of the correct dimensions, you can calculate the dimensions of the svg file 
    */
    if (thickness <= 0|| thickness >= (length)/4 || length <= 0 || length > 200 || radius <= 0){
        return NULL;
    }
    else if (q2 == 180){
        return  NULL;   
    }
    else if (2*radius > thickness) {
        return NULL;
    }
    else{

    /* 
        definition of a pointer to the struct scara 
        and initialization of a variable of type fc_scara with 
        dynamic memory allocation
    */
   fc_scara* robot = new fc_scara;

   robot -> thickness = thickness;
   robot -> length = length;
   robot -> radius = radius;
   robot -> q1 = q1;
   robot -> q2 = q2;
   robot -> origin.x = x;
   robot -> origin.y = y;
   robot -> svg_width = (length*2);

   return robot; // returning the pointer to the created structure
   }
}
   string fc_scara_to_svg(fc_scara* scara){
    
       
       string scara_svg;
       //declaration of xml 
       scara_svg += "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?> \n";
       //svg namespace
       scara_svg += "<svg xmlns=\"http://www.w3.org/2000/svg\" width = \"" + to_string(scara -> svg_width + scara->origin.x) + "\" height = \"" + to_string(scara -> svg_width+scara->origin.y) + "\">\n";
       // creating a group of images
       scara_svg += "<g transform = \"rotate(" + to_string(scara->q1) + " " + to_string(scara->origin.x) + " " + to_string(scara->origin.y) + ") translate("+ to_string(scara->origin.x - scara->radius) + "," + to_string(scara->origin.y - (scara->thickness)/2)+")\" ";   
       // rectangle style
       scara_svg += "style = \" fill:rgb(128,128,128);stroke-width:3;stroke:rgb(0,0,0)\">\n";
       // drawing the first arm
       scara_svg += "<rect width = \"" + to_string(scara->length) + "\" height = \"" + to_string(scara->thickness)+ "\" />\n";
       //second arm
       scara_svg += "<rect width = \"" + to_string(scara->length) + "\" height = \"" + to_string(scara->thickness)+ "\" ";
       // translation to the position of the frame
       scara_svg += "transform = \"rotate(" + to_string(scara->q2)+ " " + to_string(scara->length - scara->radius) +" "+ to_string((scara->thickness)/2) + ") translate(" + to_string(scara->length  - 2* (scara->radius)) + "," + to_string(0)+ ")\"/>\n";
       // second revolute joint
       scara_svg += "<circle cx=\"" + to_string(scara->length - scara->radius) + "\" cy=\"" + to_string((scara->thickness)/2) + "\" r=\"" + to_string(scara->radius) + "\" stroke= \" black \" stroke-width=\"3\" fill=\" white \" /> \n";
       //end of the group
       scara_svg += "</g>\n";
       //first revolute joint
       scara_svg += "<circle cx=\"" + to_string(scara->origin.x) + "\" cy=\"" + to_string(scara->origin.y) + "\" r=\"" + to_string(scara->radius) + "\" stroke= \" black \" stroke-width=\"3\" fill=\" white \" /> \n";
       

       //end svg
       scara_svg.append("</svg>\n");

       return scara_svg;
   }

   int fc_set_thickness(fc_scara* robot,  int new_thickness){

       if (new_thickness <= 0|| 4*new_thickness >= robot->length|| new_thickness <= (robot -> radius)*2){
           return 1;
       };
       robot -> thickness = new_thickness;
       return 0;
   }

   int fc_set_length(fc_scara* robot, int new_length){

       if (new_length > 200 || new_length <= 0){
           return 1;
       };

       robot -> length = new_length;
       return 0;
   }

   int fc_set_radius(fc_scara* robot, int new_radius){
       if (2 * new_radius > (robot -> thickness) || new_radius <= 0){
           return 1;
       };

       robot-> radius = new_radius;
       return 0;
   }

   int fc_set_q1(fc_scara* robot, int new_q1){
       robot-> q1 = new_q1;
       return 0;
   }

   int fc_set_q2(fc_scara* robot, int new_q2){
       if (new_q2 == 180){
           return 1;
       }
       robot-> q2 = new_q2;
       return 0;
   }



   int fc_set_frame(fc_scara* robot, int new_x, int new_y){
       if(new_x < 0 || new_y < 0){
           return 1;
       };

       robot -> origin.x = new_x;
       robot -> origin.y = new_y;

       return 0;
   }




   void fc_delete_robot(fc_scara* robot){
       delete robot;
   }



