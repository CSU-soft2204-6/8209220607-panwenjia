#include<iostream>
using namespace std;
class Time // ���� Time ��
{
private:// ���ݳ�ԱΪ���õ�
		int hour;
	int minute;
	int sec;
public:
	void setHour()
	{
		cout << "������hour��";
		cin >> this->hour;
	}
	void setMinute()
	{
		cout << "������minute��";
		cin >> this->minute;
	}
	void setSec()
	{
		cout << "������second��";
		cin>>this->sec;
	}
	void showTime()
	{
		cout << this->hour << ":" << this->minute << ":" << this->sec << endl;
	}
};
int main()
{
	Time t1; //���� t1 Ϊ Time �����
	//cin >> t1.hour; //�����趨��ʱ��
	//cin >> t1.minute;
	//cin >> t1.sec;
	//cout << t1.hourl << ":" << t1.minute <<":" << t1.sec << endl;
	t1.setHour();
	t1.setMinute();
	t1.setSec();
	t1.showTime();
	return 0;
}