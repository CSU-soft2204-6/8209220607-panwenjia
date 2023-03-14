//5、设计一个函数，返回两个向量的交集，函数头如下：
//template<typename T>
//vector<T> intersection(const vector<T>&v1, const vector<T>&v2)
//两个向量的交际为它们的共同包含的元素，编写一个测试程序，提示用户输入两个向量，每
//个包含 5 个字符串，打印输出它们的交集
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
	cout << "请输入两个向量，每个向量有5个字符串" << endl;
	cout << "第一个向量：" << endl;
	for (vector<string>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cin >> *it;
	}
	cout << "第二个向量：" << endl;
	for (vector<string>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cin >> *it;
	}
	cout << "这两个向量的交集是：";
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