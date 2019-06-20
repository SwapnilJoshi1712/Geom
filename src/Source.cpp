#include <iostream>

#include "Point3d.hpp"
#include "Vector3d.hpp"
#include "Segment.hpp"
int main(){

	Point p1;
	p1.print();
	Point p2(10, 10, 10);
	p2.print();

	Vector v(1,1,1);
	v.print();

	Vector v0(p1,p2);
	v0.print();

	Segment s1(p1, p2);
	s1.print();
	s1.length();
	return 0;
}
