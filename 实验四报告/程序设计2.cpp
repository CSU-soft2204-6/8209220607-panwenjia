//(2)��дһ�����������ַ�����ʽ��ʾ��һ�� 16 ������ת��Ϊ 10 �������������������в�
//�ԡ�����ԭ�� int parseHex(const char* const hexString);
//�磺���ú��� parseHex(��A5��); ���� 165
#include<iostream>
using namespace std;
int hexfang(int n)
{
	int tem =1;
	for (int i = 0; i < n; i++)
	{
		tem = tem * 16;
	}
	return tem;
}
int parseHex(const char* const hexString)
{
	int result = 0;
	for (int i = 0; i < strlen(hexString); i++)
	{
		if (hexString[i] <= 70 && hexString[i] >= 65)
		{
			result = hexfang(strlen(hexString) - i - 1) * (hexString[i] - 55) + result;
		}
		if (hexString[i] <= 57 && hexString[i] >= 49)
		{
			result = hexfang(strlen(hexString) - i - 1)* (hexString[i] - 48) + result;
		}
	}
	return result;
}
int main()
{
	cout << parseHex("A5");
}