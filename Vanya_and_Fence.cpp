#include <iostream>
using namespace std;

int main() 
{
	int t,n,i,h,count;
	i = 0;
	cin >> n >> h;
	count = n;
	while(i++ <  n)
	{
		cin >> t;
		if(t > h)
			count++;
	}
	cout << count << endl;
}
