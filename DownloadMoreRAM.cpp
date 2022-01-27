#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int main() 
{
	ll t,n,k,i;
	cin >> t;
	ll tmp;
	while(t > 0)
	{
		tmp = 0;
		i = 0;
		cin >> n >> k;
		vector<ll> a(n);
		vector<ll> b(n);
		while(i < n)
			cin >> a[i++];
		 i = 0;
		while(i < n)
			cin >> b[i++];
		i = 0;
		while(a[i])
		{
			if(a[i] <= k && tmp <= a[i])
			{
				k += b[i];
				tmp = a[i];
				a[i] = 1000000000; 
				i = -1;
			}
			i++;
		}
		t--;
		cout << k << endl;
	}
}
