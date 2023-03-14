#include<iostream>
using namespace std;
class Time // 定义 Time 类
{
private:// 数据成员为公用的
		int hour;
	int minute;
	int sec;
public:
	void setHour()
	{
		cout << "请输入hour：";
		cin >> this->hour;
	}
	void setMinute()
	{
		cout << "请输入minute：";
		cin >> this->minute;
	}
	void setSec()
	{
		cout << "请输入second：";
		cin>>this->sec;
	}
	void showTime()
	{
		cout << this->hour << ":" << this->minute << ":" << this->sec << endl;
	}
};
int main()
{
	Time t1; //定义 t1 为 Time 类对象
	//cin >> t1.hour; //输入设定的时间
	//cin >> t1.minute;
	//cin >> t1.sec;
	//cout << t1.hourl << ":" << t1.minute <<":" << t1.sec << endl;
	t1.setHour();
	t1.setMinute();
	t1.setSec();
	t1.showTime();
	return 0;
}