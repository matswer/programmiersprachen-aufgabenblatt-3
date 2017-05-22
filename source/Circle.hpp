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
             Circle(double r, double s); 
             //Circle(Color const& rgb);
             ~Circle();
             void setradius(double r); 
             double getradius();
             double area();         //Konstruktor Fläche
             double circumference();       //Konstruktor Umfang
             double diameter();     //Konstruktor Durchmesser
             //Color const& color() const { return rgb_; } ;
             friend bool operator == (const Circle&, const Circle&);
             friend bool operator < (const Circle&, const Circle&);
             friend bool operator > (const Circle&, const Circle&);
            
};

bool operator == (const Circle& x, const Circle& y) 
{   
    if (x.radius == y.radius){
        return true;
    }
    else {
        return false;
    };
}
bool operator < (const Circle& x, const Circle& y) 
{
    if (x.radius < y.radius){
        return true;  
    }
    else {
        return false;
    } ;
}
bool operator > (const Circle& x, const Circle& y) 
{
    if (x.radius > y.radius){
    return true;
    }
    else {
        return false;
    } ;
}
# endif // VEC2_HPP