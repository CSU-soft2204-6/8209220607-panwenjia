//(1)��д��������ַ��� s1 �Ƿ�Ϊ�ַ��� s2 ���Ӵ������ǣ����ص�һ��ƥ����±꣬����
//�� - 1�����������������ַ��� s1 �� s2�����ú���ʵ�֡�
//����ԭ�ͣ�int indexof(const char* s1, const char* s2);
#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	/*1.s1�ӵ�һ���ַ���j=0����ʼ��s2��ĳ���ַ���i=0��һ��,����¼�µ�һ����ȵ��±ֱ꣬��s1�����ո����ַ�
	  2.��for���α���s2��s1
	  3.�������������һ����ѭ����ȫ����ѭ��һ�����򷵻�-1
	  */
	int i = 0, j = 0;
	int tem = 0;
	
	while (1)
	{
		//i=0 j=0
		//���s1[i]==s2[0],��i,j����1������һ��ʱtem=i��
		//��������ڣ���i++
		//����1֮�����s1[i]=s2[j],��i++��j++
		//��s1���������һ��ʱ����ȣ��򷵻�tem
		//�����ǣ���j=0���¿�ʼ
		if (s2[j] != s1[0]&&s1[i]!='\32'&&s2[j]!='\32')
		{
			j++;
		}
		else
		{
			tem = j;
			if (strlen(s2) - j < strlen(s1)) return -1;
			while (1)
			{			
				i++, j++;
				if (s1[i] != s2[j])
				{
					j++, i = 0;
					break;
				}
				if (s1[i] == s2[j] && i + 1 == strlen(s1))
				{
					return tem ;
				}
				else continue;
			}
		}
	}
}
int main()
{
	cout << indexof("zuishuai", "zhr zuishuai") << endl;
	cout << indexof("asd asd", "sssasd asd") << endl;
}