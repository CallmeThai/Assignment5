#include <iostream>
#include <cstdlib>
#include "Circle.h"
#include "ZeroException.h"
 
using namespace std;
 
             Circle::Circle()
             {
                  radius = 1.0;   
             }
              Circle::Circle(double radi)
             {
                 if( radi == 0 || radi == 0.0)
                 {
                     ZeroException ex;
                     ex.Checkradius(); 
                 }
                 else
                 {
                   radius = radi;  
                 }                   
               
             }
            
             
             void Circle::setRadius(double r)
             { 
              if( r == 0 || r == 0.0)
                 {
                     ZeroException ex;
                     ex.Checkradius(); 
                 }
                 else
                 {
                   radius = r;  
                 } 
             }
             
             double Circle::getRadius()
             {
                return radius;   
             }
             
             double Circle::getArea()
             {
                return pi * radius * radius;
             }
             
             double Circle::getDiameter()
             {
                   return radius * 2;
             }
             
             double Circle::getCircumference()
             {
                  return 2 * pi * radius;  
             }
             
             
             void  ZeroException::Checkradius()
            {
                    throw 0.0;                   
            }