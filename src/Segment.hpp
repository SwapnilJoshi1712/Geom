#ifndef __SEGMENT__HPP__
#define __SEGMENT__HPP__

#include "Point3d.hpp"
#include "Shape.hpp"


class Segment: public Shape{
  public:
	  Segment(Point pt1, Point pt2);
	  ~Segment();
 	  void print();
	  double length();
  private:
	Point p1, p2;

};

#endif 
