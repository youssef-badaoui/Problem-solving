#include <iostream>
using namespace std;

int main() 
{
	int a,b,c,n;
	int solv;
	solv = 0;
	cin >> n;

	while(n > 0)
	{	
		cin >> a >> b >> c;
		if ((a+b+c) > 1)
			solv++;
		n--;
	}
	cout << solv;	
}

