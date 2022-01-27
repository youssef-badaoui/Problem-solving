#include <iostream>
using namespace std;
 
int main() 
{
	int t; cin >> t;
	int i,j,k,n;
	while( t > 0)
	{
		i = 0;
		j = 1;
		cin >> n >> k;
		i = n - 3; 
		while(i <= k)
		{
			if(( j % n) != 0)
			   i++;
			if(i == k)
			{
				cout << j << endl;
				break;
			}
			j++;
		}
		t--;
	}
}
