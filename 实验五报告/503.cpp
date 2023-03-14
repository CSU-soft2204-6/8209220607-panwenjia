//3、需要求 3 个长方柱的体积，请编一个基于对象的程序。数据成员包括 length(长)、width(宽)、
//height(高)。要求用成员函数实现以下功能：
//(1)由键盘分别输入 3 个长方柱的长、宽、高；
//(2)计算长方柱的体积；
//(3)输出 3 个长方柱的体积。
//请编程序，上机调试并运行
#include<iostream>
using namespace std;
class Square 
{
private:
	double length;
	double width;
	double height;
public:
	void set_length()
	{
		cout << "请输入长方体的长：";
		cin >> this->length;
	}
	void set_width()
	{
		cout << "请输入长方体的宽：";
		cin >> this->width;
	}
	void set_height()
	{
		cout << "请输入长方体的高：";
		cin >> this->height;
	}
	void get_area()
	{
		cout << "该长方体的体积为：";
		cout << this->height * this->length * this->width << endl;;
	}
};
int main()
{
	Square square1;
	Square square2;
	Square square3;
	cout << "下面请输入square1的数据：" << endl;
	square1.set_length();
	square1.set_height();
	square1.set_width();
	square1.get_area();
	cout << "下面请输入square2的数据：" << endl;
	square2.set_length();
	square2.set_height();
	square2.set_width();
	square2.get_area();
	cout << "下面请输入square3的数据：" << endl;
	square3.set_length();
	square3.set_height();
	square3.set_width();
	square3.get_area();

}