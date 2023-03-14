//(2)编写一个函数将以字符串形式表示的一个 16 进制数转换为 10 进制数，并在主函数中测
//试。函数原型 int parseHex(const char* const hexString);
//如：调用函数 parseHex(“A5”); 返回 165
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