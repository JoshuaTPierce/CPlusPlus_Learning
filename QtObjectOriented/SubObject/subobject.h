#ifndef _SUBOBJECT_H_
#define _SUBOBJECT_H_

#include <iostream>
#include <string>
using namespace std;

class Point {
public:
	Point(int xx, int yy) : m_x(xx), m_y(yy) {}
	~Point(){
		cout << "point destroyed: ("
			 << m_x << "," << m_y << ")" << end;
	}

private:
	int m_x, m_y
};

class Square {
public:
	//initialization required because there is no default ctor
	Square(int ulx, int uly, int lrx, int lry) :
		m_UpperLeft(ulx, uly), m_LowerRight(lrx, lry) {}

	//initialize using the implicitly generated point copy ctor
	Square(const Point& ul, const Point& lr) :
		m_UpperLeft(ul), m_LowerRight(lr) {} 

private:
	Point m_UpperLeft, m_LowerRight;
}