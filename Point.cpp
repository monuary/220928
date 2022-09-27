//프로그래머의 실수에 대비하기 위해서는,
//1. 제한된 방법으로만 접근을 허용하여, 잘못된 값이 저장되지 않도록 해야 한다.
//2. 실수가 쉽게 발견되도록 해야 한다.

//클래스 외부에서 private 변수에 접근하는 목적으로 정의되는 함수를 엑세스 함수라 한다.

#include<iostream>
#include"Point.h"
using namespace std;

bool Point::Init(int xp, int yp)
{
	if (xp < 0 || yp < 0)	//	x,y좌표가 0 아래로 떨어지는 것 방지
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xp;
	y = yp;
	return true;
}

int Point::GetX() const
{
	return x;
}

int Point::GetY() const
{
	return y;
}

bool Point::SetX(int xp)
{
	if (0 > xp || xp > 100)	//	x좌표를 0에서 100으로 제한
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xp;
	return true;
}

bool Point::SetY(int yp)
{
	if (0 > yp || yp > 100)	//	y좌표를 0에서 100으로 제한
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	y = yp;
	return true;
}