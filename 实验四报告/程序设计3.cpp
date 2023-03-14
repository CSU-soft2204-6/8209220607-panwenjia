//(3) 主程序中建立一动态数组（使用 new），数组元素及元素个数由键盘输入，动态调试观
//察指针及指针指向的内容；设计一个函数对数组由小到大排序；主程序中用指针方式输出数组元
//素；最后释放数组内存（delete）。
#include<iostream>
using namespace std;
void bubble(int* p, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (p[i] > p[j])
			{
				int tem = 0;
				tem = p[i];
				p[i] = p[j];
				p[j] = tem;
		 }
	    }
	}
}
int main()
{
	int size = 0;
	cout << "请输入数组大小：";
	cin >> size;
	int* p = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "请输入第" << i + 1 << "个元素：";
		cin >> *(p + i);
	}
	bubble(p,size);
	for (int i = 0; i < size; i++)
	{
		cout << *(p + i) << " ";
	}
}