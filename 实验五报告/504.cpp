//4、编写程序：定义抽象基类 Shape，由它派生出五个派生类：Circle（圆形）、Square（正
//方形）、Rectangle（ 长方形）、Trapezoid （梯形）和 Triangle （三角形），用虚函数分别计算
//各种图形的面积，并求出它们的和。要求用基类指针数组。使它的每一个元素指向一个派生类的
//对象。
//注：主函数中定义如下对象
//Circle circle(10.2);
//Square square(3);
//Rectangle rectangle(3, 4);
//Trapezoid trapezoid(2.0, 4.5, 3);
//Triangle triangle(4, 5, 6);
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Shape
{
public:
	virtual double caculate_area()=0;
};
class Circle:public Shape
{
private:
	double m_r;
public:
	Circle(double r )
	{
		m_r = r;
	}
	double caculate_area() 
	{
		return 3.14 * m_r * m_r;
	};
};
class Square:public Shape
{
private:
	double a;
public:
	Square(double a)
	{
		this->a = a;
	}
	double caculate_area()
	{
		return a * a;
	}
};
class Rectangle:public Shape
{
private:
	double a;
	double b;
public:
	Rectangle(double a, double b)
	{
		this->a = a;
		this->b = b;
	}
	double caculate_area()
	{
		return a*b;
	}
};
class Trapezoid : public Shape
{
private:
	double a;
	double b;
	double h;
public:
	Trapezoid(double a, double b, double h)
	{
		this->a = a;
		this->b = b;
		this->h = h;
	}
	double caculate_area()
	{
		return (a + b) * h / 2;
	}
};
class Triangle:public Shape
{
private:
	double a;
	double b;
	double c;
public:
	Triangle(double a,double b,double c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	double caculate_area()
	{
		double p;
		p = (a + b + c) / 2;
		double S = sqrt(p * (p - a) * (p - b) * (p - c));
		return S;
	}
};
int main()
{
	Shape* p[5];
	 Circle circle(10.2);
	Square square(3);
	Rectangle rectangle(3, 4);
	Trapezoid trapezoid(2.0, 4.5, 3);
	Triangle triangle(4, 5, 6);
	p[0] = &circle;
	p[1] = &square;
	p[2] = &rectangle;
	p[3] = &trapezoid;
	p[4] = &triangle;

	cout << "circle(10.2):" << p[0]->caculate_area() << endl;
	cout << "square(3):" << p[1]->caculate_area() << endl;
	cout << "rectangle(3,4)" << p[2]->caculate_area() << endl;
	cout << "trapezoid(2.0, 4.5, 3):" << p[3]->caculate_area() << endl;
	cout << "tri]angle(4, 5, 6);" << p[4]->caculate_area() << endl;
	cout << "面积之和为：" << circle.caculate_area() + square.caculate_area() + rectangle.caculate_area()
		+ trapezoid.caculate_area() +triangle.caculate_area() << endl;
}