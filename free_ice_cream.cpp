#include <iostream>
using namespace std;

int main() 
{
	int boy = 0;
	long long  n,x,d;
	char s;
	cin >> n >> x;
	while(n--)
	{
		cin >> s >> d;
		if(s == '+')
			x += d;
		else
		{
			if((x-d) >= 0)
				x -= d;
			else
				boy++;
		}
	}
	cout << x<<" " << boy;
}
