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
/*
bool Vector::isNull(){
	if(mI==0)&&(mJ==0)&&(mK==0);
}*/
/*
bool Vector::isUnit(){
	
}*/
