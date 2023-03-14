//(1)编写函数检查字符串 s1 是否为字符串 s2 的子串，若是，返回第一次匹配的下标，否则返
//回 - 1。在主程序中输入字符串 s1 与 s2，调用函数实现。
//函数原型：int indexof(const char* s1, const char* s2);
#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	/*1.s1从第一个字符（j=0）开始与s2的某个字符（i=0）一样,并记录下第一次相等的下标，直到s1遇到空格或空字符
	  2.用for依次遍历s2，s1
	  3.若遍历完后仍无一次外循环完全和内循环一样，则返回-1
	  */
	int i = 0, j = 0;
	int tem = 0;
	
	while (1)
	{
		//i=0 j=0
		//如果s1[i]==s2[0],则i,j都加1，（第一次时tem=i）
		//如果不等于，则i++
		//都加1之后如果s1[i]=s2[j],则i++，j++
		//若s1遍历到最后一个时仍相等，则返回tem
		//若不是，则j=0重新开始
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