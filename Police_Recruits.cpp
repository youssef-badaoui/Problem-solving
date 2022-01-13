#include <iostream>
using namespace std;

int main() 
{
	int n;
	int res = 0;
	int p = 0;
	int x;
	cin >> n;
	while(n-- > 0)
	{
		cin >> x;
		if(x == -1)
		{
			if(p == 0)
				res++;
			else
				p--;
		}
		else
		   	p+=x;
	}
	cout << res;
}
			
