#ifndef __SHAPE__HPP__
#define __SHAPE__HPP__
#include <iostream>


class Shape{
public:
	Shape()
	{std::cout << "Shape Constructor called\n";}

	virtual ~Shape()
	{std::cout << "Shape Destructor called\n";}
	
	

};

#endif //__SHAPE__HPP__
