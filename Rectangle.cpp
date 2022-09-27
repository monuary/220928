#include<iostream>
#include"Rectangle.h"
using namespace std;

bool Rectangle::Init(const Point& ul, const Point& lr)
{
	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())	//	낮아질수록 y좌표값 증가, 오른쪽일수록 x좌표값 증가
	{
		cout << "잘못된 위치정보 전달" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::Show() const
{
	cout << "좌 상단: [" << upLeft.GetX() << ", " << upLeft.GetY() << "]" << endl;
	cout << "우 하단: [" << lowRight.GetX() << ", " << lowRight.GetY() << "]" << endl << endl;
}