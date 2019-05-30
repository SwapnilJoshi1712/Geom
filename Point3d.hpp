#ifndef __POINT3D__HPP__
#define __POINT3D__HPP__

#include "Shape.hpp"

class Vector;
class Point: public Shape{
  public:
	  friend Vector; 
	  Point(double x = 0.0, double y = 0.0 , double z = 0.0);
	  ~Point();
	  void print();
  private: 
	  double mX, mY, mZ;
  
};

#endif //__POINT3D__HPP__

