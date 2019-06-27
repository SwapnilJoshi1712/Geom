#include <iostream>

#include "Point3d.hpp"
#include "Vector3d.hpp"
#include "Segment.hpp"
int main(){

	Point p1;
	Point p2(0, 1, 0);
	Point p3(1,0,0);

	Vector v1(p1,p2);
	Vector v2(p1,p3);
	
	std::cout << "Projection of vector vo on v: " << v1.dot(v2) << "\n";

	std::cout << "Projection of vector vo on v: " << v1.dot(v1) << "\n";

	Segment s1(p1, p2);
	s1.print();
	s1.length();
	s1.toVector(false);
	
	return 0;
}
