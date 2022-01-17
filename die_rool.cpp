#include <iostream>
using namespace std;

int main() 
{
	int y,w;
	cin >> y >> w;
	y = 6 - max(y,w) + 1;

	int i = 6;
	while(i > 0)
	{
		if( y%i == 0 && 6%i == 0)
		{
			cout <<  y/i <<  '/' <<  6/i;
			break;
		}
		i--;
	}
}
