#ifndef __POINT_H_
#define __POINT_H_

class Point
{
	int x;	// 임의변경을 막는 private -> 정보은닉
	int y;
public:
	bool Init(int xp, int yp);	//	bool은 true와 false로 이루어진 1비트형 반환형이다.
	int GetX() const;
	int GetY() const;
	bool SetX(int xp);	//	변수에 저장되는 값을 함수 내에서 제한할 수 있다.
	bool SetY(int yp);
};

#endif
