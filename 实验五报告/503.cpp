//3����Ҫ�� 3 ������������������һ�����ڶ���ĳ������ݳ�Ա���� length(��)��width(��)��
//height(��)��Ҫ���ó�Ա����ʵ�����¹��ܣ�
//(1)�ɼ��̷ֱ����� 3 ���������ĳ������ߣ�
//(2)���㳤�����������
//(3)��� 3 ���������������
//�������ϻ����Բ�����
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
		cout << "�����볤����ĳ���";
		cin >> this->length;
	}
	void set_width()
	{
		cout << "�����볤����Ŀ�";
		cin >> this->width;
	}
	void set_height()
	{
		cout << "�����볤����ĸߣ�";
		cin >> this->height;
	}
	void get_area()
	{
		cout << "�ó���������Ϊ��";
		cout << this->height * this->length * this->width << endl;;
	}
};
int main()
{
	Square square1;
	Square square2;
	Square square3;
	cout << "����������square1�����ݣ�" << endl;
	square1.set_length();
	square1.set_height();
	square1.set_width();
	square1.get_area();
	cout << "����������square2�����ݣ�" << endl;
	square2.set_length();
	square2.set_height();
	square2.set_width();
	square2.get_area();
	cout << "����������square3�����ݣ�" << endl;
	square3.set_length();
	square3.set_height();
	square3.set_width();
	square3.get_area();

}