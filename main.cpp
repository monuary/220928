#include<iostream>
#include"Point.h"
#include"Rectangle.h"
using namespace std;

int main()
{
	Point p1;
	if (!p1.Init(-2, 4))cout << "�ʱ�ȭ ����" << endl;	//	if�� ���� ��ɹ��� ������ �����ȴ�.
	if (!p1.Init(2, 4))cout << "�ʱ�ȭ ����" << endl;

	Point p2;
	if (!p2.Init(5, 9))cout << "�ʱ�ȭ ����" << endl;

	Rectangle rec;
	if (!rec.Init(p2, p1))cout << "���簢�� �ʱ�ȭ ����" << endl;
	if (!rec.Init(p1, p2))cout << "���簢�� �ʱ�ȭ ����" << endl;

	rec.Show();
	return 0;
}