#include<iostream>
#include"Rectangle.h"
using namespace std;

bool Rectangle::Init(const Point& ul, const Point& lr)
{
	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())	//	���������� y��ǥ�� ����, �������ϼ��� x��ǥ�� ����
	{
		cout << "�߸��� ��ġ���� ����" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::Show() const
{
	cout << "�� ���: [" << upLeft.GetX() << ", " << upLeft.GetY() << "]" << endl;
	cout << "�� �ϴ�: [" << lowRight.GetX() << ", " << lowRight.GetY() << "]" << endl << endl;
}