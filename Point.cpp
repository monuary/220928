//���α׷����� �Ǽ��� ����ϱ� ���ؼ���,
//1. ���ѵ� ������θ� ������ ����Ͽ�, �߸��� ���� ������� �ʵ��� �ؾ� �Ѵ�.
//2. �Ǽ��� ���� �߰ߵǵ��� �ؾ� �Ѵ�.

//Ŭ���� �ܺο��� private ������ �����ϴ� �������� ���ǵǴ� �Լ��� ������ �Լ��� �Ѵ�.

#include<iostream>
#include"Point.h"
using namespace std;

bool Point::Init(int xp, int yp)
{
	if (xp < 0 || yp < 0)	//	x,y��ǥ�� 0 �Ʒ��� �������� �� ����
	{
		cout << "��� ������ �� ����" << endl;
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
	if (0 > xp || xp > 100)	//	x��ǥ�� 0���� 100���� ����
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xp;
	return true;
}

bool Point::SetY(int yp)
{
	if (0 > yp || yp > 100)	//	y��ǥ�� 0���� 100���� ����
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	y = yp;
	return true;
}