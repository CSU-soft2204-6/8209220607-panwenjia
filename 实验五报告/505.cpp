//5�����һ���������������������Ľ���������ͷ���£�
//template<typename T>
//vector<T> intersection(const vector<T>&v1, const vector<T>&v2)
//���������Ľ���Ϊ���ǵĹ�ͬ������Ԫ�أ���дһ�����Գ�����ʾ�û���������������ÿ
//������ 5 ���ַ�������ӡ������ǵĽ���
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
template<class T>
vector<T>intersection( const vector<T>& v1, const vector<T>& v2)
{

	vector<T>temp;
	for (class vector<T>::const_iterator it1 = v1.begin(); it1 != v1.end(); it1++)
	{
		for (class vector<T>::const_iterator it2 = v2.begin(); it2 != v2.end(); it2++)
		{
			if (*it1 == *it2) 
			{
				temp.push_back(*it1);
			}
		}
	}
	return temp;
}
void test()
{
	vector<string>v1(5);
	vector<string>v2(5);
	cout << "����������������ÿ��������5���ַ���" << endl;
	cout << "��һ��������" << endl;
	for (vector<string>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cin >> *it;
	}
	cout << "�ڶ���������" << endl;
	for (vector<string>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cin >> *it;
	}
	cout << "�����������Ľ����ǣ�";
	vector<string>a= intersection(v1, v2);
	for (vector<string>::iterator it = a.begin(); it != a.end(); it++)
	{
		cout << *it << " ";
	}
}
int main()
{
	test();
}