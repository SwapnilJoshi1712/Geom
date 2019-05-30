#include "Point3d.hpp"

#include <iostream>



Point::Point(double x, double y, double z):Shape(){
	mX = x;
	mY = y;
	mZ = z;
	std::cout << "Point constructor\n";
}

Point::~Point(){
	std::cout << "Point destructor\n";
}

void Point::print(){
	std::cout << mX << " " << mY << " " << mZ << "\n";

}
