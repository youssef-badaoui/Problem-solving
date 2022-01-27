#include <iostream>
#include  <vector>
using namespace std;

int main() 
{
	int t,n,i,op,res;
	int j;
	cin >> t;
	while(t--)
	{
		j = 0;
		op = 0;
		cin >> n;
		vector<int>a(n);
		i = 0;
		while(i < n)
			cin >> a[i++];
		i = 1;
		while(i <= n)
		{
			if(a[n - 1] != a[n - i])
				op++;
			if(a[n - 1] == a[n - i] && op <= 0)
				j++;

			i++;
		}
		res = 0;
		i = 0;
		n = op;
		if(n > 2)
		{
			while(n/2)
			{
				i++;
				n /= 2;
			}
		
		cout << i + n<< endl; 
		}
		else 
			cout << n <<endl;
		cout << j << op;
	}
}
