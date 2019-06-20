#include "Segment.hpp"

#include <iostream>

#include "Vector3d.hpp"


Segment::Segment(Point pt1, Point pt2):Shape(){
	p1 = pt1;
	p2 = pt2;
	std::cout << "Segment Constructor\n";

}

Segment::~Segment(){
	std::cout << "Segment Destructor\n";
}

void Segment::print(){
	p1.print();
	p2.print();
}

double Segment::length (){
	Vector v(p1, p2);
	std::cout << "\nThe length is :";
	return v.magnitude();
	
}
