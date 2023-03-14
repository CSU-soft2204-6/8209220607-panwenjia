#include<iostream>
using namespace std;
int yue(int m, int n)
{
	int t = min(m, n);
	for (t;t > 0; t--)
	{
		if ((m % t == 0) && (n % t == 0))
		return t;
	}
}
	int bei(int m, int n)
	{
		int t = max(m, n);
		for (t;t>0;t++)
		{
			if ((t % m == 0) && (t % n == 0))
			return t;
		}

	}
	int main()
	{
		int m, n;
	cin>>m>>n;
	cout<<yue(m,n);
	cout << " ";
	cout<<bei(m,n);
	return 0;
	}
