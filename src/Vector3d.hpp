#ifndef __VECTOR__HPP__
#define __VECTOR__HPP__
#include "Point3d.hpp"
/*
class Vector;//forward declaration
Vector&& operator+(const Vector& v1, const Vector& v2);
Vector&& operator-(const Vector& v1, const Vector& v2);
*/
class Vector{
	double mI, mJ, mK;
public:
	~Vector();
	Vector(const Point& p1, const Point& p2);


	Vector(double i =0.0,double j= 0.0, double k = 0.0);

	void print();
//	Vector(const Vector& v); //copy constructor
//	Vector(Vector&& v); //move constructor 

//	Vector& operator= (const Vector& v);
//	Vector& operator= (Vector&& v);

	//predicates
//	bool isNull() const;
//	bool isUnit() const;
//	bool isProper() const;

//	void info() const;
	double magnitude();
//	double dot(const Vector& v) const;

	//modifiers
/*	void scale(double val);
	void normalize();

	//friends
	friend Vector&& operator+(const Vector& v1, const Vector& v2);
	friend Vector&& operator-(const Vector& v1, const Vector& v2);
*/
};

#endif // __VECTOR__HPP__
