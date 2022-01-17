#include <iostream>
using namespace std;

int main()
{
	long  n;
	cin >>  n;
	cout << n << " ";
	while(n != 1)
	{
		(n%2 == 0) ? n /= 2 : n = (n*3) + 1;
		cout << n << " ";
		if(n < 1)
			break;
			
	}
}

