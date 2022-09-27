#include<iostream>
#include"Point.h"
#include"Rectangle.h"
using namespace std;

int main()
{
	Point p1;
	if (!p1.Init(-2, 4))cout << "초기화 실패" << endl;	//	if문 안의 명령문이 실제로 발현된다.
	if (!p1.Init(2, 4))cout << "초기화 실패" << endl;

	Point p2;
	if (!p2.Init(5, 9))cout << "초기화 실패" << endl;

	Rectangle rec;
	if (!rec.Init(p2, p1))cout << "직사각형 초기화 실패" << endl;
	if (!rec.Init(p1, p2))cout << "직사각형 초기화 실패" << endl;

	rec.Show();
	return 0;
}