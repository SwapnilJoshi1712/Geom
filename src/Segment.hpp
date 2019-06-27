#ifndef __SEGMENT__HPP__
#define __SEGMENT__HPP__

#include "Point3d.hpp"
#include "Shape.hpp"
#include "Vector3d.hpp"
#include <vector>

class Segment: public Shape{
  public:
	  Segment(Point pt1, Point pt2);
	  ~Segment();
 	  void print();
	  double length();
	  double minDist();
	  Vector toVector(bool);
	 
  private:
	Point p1, p2;

};


#endif 
