#include <iostream>
using namespace std;

int main() 
{
	int n,b,d,a;
	int i = 0;
	int w = 0;
	int res = 0;
	cin >> n >> b >> d;
	while(i < n)
	{
		cin >> a;
		if(a <= b)
			w += a;
		if(w > d)
		{
			res++;
			w = 0;
		}	
		i++;
	}
	cout << res;
}
