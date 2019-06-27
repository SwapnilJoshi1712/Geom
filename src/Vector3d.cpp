#include "Vector3d.hpp"
#include <iostream>
#include <cmath>

Vector::Vector(double i, double j, double k)
{
	mI = i;
	mJ = j;
	mK = k;
	std::cout << "Vector Constructor called!\n";
}

Vector::Vector(const Point& p1, const Point& p2)
{
	mI = p2.mX - p1.mX;
	mJ = p2.mY - p1.mY;
	mK = p2.mZ - p1.mZ;
		
}

Vector::~Vector()
{
	std::cout << "Vector Destructor called\n";
}

void Vector::print(){
	std::cout <<  mI << " " << mJ << " " << mK << "\n";

}

double Vector::magnitude() const{
	return sqrt(mI*mI + mJ*mJ + mK*mK);
}
/*
bool Vector::isUnit(){
	
}*/

double Vector::dot(const Vector& v1) const{
	return mI*v1.mI + mJ*v1.mJ + mK*v1.mK;
}
