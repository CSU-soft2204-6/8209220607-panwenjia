//(3) �������н���һ��̬���飨ʹ�� new��������Ԫ�ؼ�Ԫ�ظ����ɼ������룬��̬���Թ�
//��ָ�뼰ָ��ָ������ݣ����һ��������������С������������������ָ�뷽ʽ�������Ԫ
//�أ�����ͷ������ڴ棨delete����
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
	cout << "�����������С��";
	cin >> size;
	int* p = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "�������" << i + 1 << "��Ԫ�أ�";
		cin >> *(p + i);
	}
	bubble(p,size);
	for (int i = 0; i < size; i++)
	{
		cout << *(p + i) << " ";
	}
}