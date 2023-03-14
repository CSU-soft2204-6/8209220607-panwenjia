//main.cpp 主函数模块
#include <iostream> //将类声明头文件包含进来
#include "student.h"
int main()
{
	Student stud; //定义对象
	Student stud1(007, "tcg", 'm');
	stud1.display(); //执行 stud 对象的 display 函数
	return 0;
}