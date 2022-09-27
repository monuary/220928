#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include"Point.h"

class Rectangle
{
	Point upLeft;
	Point lowRight;
public:
	bool Init(const Point& ul, const Point& lr);
	void Show() const;
};

#endif