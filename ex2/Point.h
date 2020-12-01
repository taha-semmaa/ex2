#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class Point
{
	//atributs
private:
	double m_x;
	double m_y;
public:
	Point();
	Point(double, double);
	Point(const Point&);
	double m_distance(const Point&)const;
	bool operator==(const Point&)const;
	string m_print()const;
	void m_translate(double, double);
	

};

