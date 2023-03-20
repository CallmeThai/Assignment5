#include <cstdlib>
#include <iostream>
#include "Circle.h"
 
using namespace std;
 
int main(int argc, char *argv[])
{
    
           for(;;)
           {
            try
             {
               double radius;
               cout<<"Enter the radius: ";
               cin>>radius;  
              Circle cir(radius);
              cout<<"Radius: "<<cir.getRadius()<<endl;
              cout<<"Area: "<<cir.getArea()<<endl;
              cout<<"Diameter: "<<cir.getDiameter()<<endl;
              cout<<"Circumference: "<<cir.getCircumference()<<endl;
              break;      
              } 
              catch(double e)
              {
                    cout<<"The radius cannot be 0.0"<<endl<<endl;
                    continue; 
              } 
              }
   
    
    system("PAUSE");
    return 0;
}