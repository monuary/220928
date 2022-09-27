#ifndef __POINT_H_
#define __POINT_H_

class Point
{
	int x;	// ���Ǻ����� ���� private -> ��������
	int y;
public:
	bool Init(int xp, int yp);	//	bool�� true�� false�� �̷���� 1��Ʈ�� ��ȯ���̴�.
	int GetX() const;
	int GetY() const;
	bool SetX(int xp);	//	������ ����Ǵ� ���� �Լ� ������ ������ �� �ִ�.
	bool SetY(int yp);
};

#endif
