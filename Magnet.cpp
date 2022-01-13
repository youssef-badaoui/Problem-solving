#include <iostream>
using namespace std;

int main() 
{
	int n;
	int last, cur;
	int split = 0;
	last = 2;
	cin >> n;
	while(n-- > 0)
	{
		cin >> cur;
		if(cur != last)
			split++;
		last = cur;
	}
	cout << split;
}
