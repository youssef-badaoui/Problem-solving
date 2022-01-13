
#include <iostream>
using namespace std;

int main() 
{
	int k,r,tmp;
	int i = 0;
	cin >> k>> r;
	tmp = k;
	while(i++ < 10)
	{
		if((k%10) == r || k%10 == 0)
			break;
		k+= tmp;
	}
	cout << i;
}
