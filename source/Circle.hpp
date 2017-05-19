//#include "color.hpp"
#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class Circle
{
      private:
      double radius; 
      //Color rgb_;
      
      public:
             Circle(); 
             Circle(double r); 
             //Circle(Color const& rgb);
             ~Circle();
             void setradius(double r); 
             double getradius();
             double area();         //Konstruktor Fläche
             double circumference();       //Konstruktor Umfang
             double diameter();     //Konstruktor Durchmesser
             //Color const& color() const { return rgb_; } ;
             bool operator == (Circle a);
             bool operator < (Circle a);
             bool operator > (Circle a);
            
};

bool Circle::operator == (Circle a) 
{
    if(radius == a.radius){
        return true;
        }
    else{
        return false;
    }  
}
bool Circle::operator < (Circle a) 
{
    if(radius < a.radius){
        return true;
        }
    else{
        return false;
    }  
}
bool Circle::operator > (Circle a) 
{
    if(radius > a.radius){
        return true;
        }
    else{
        return false;
    }     
        ;
}
# endif // VEC2_HPP