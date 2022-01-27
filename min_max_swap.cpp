#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int t,n,i,maxa,maxb,tmp;

	cin >> t;
	while(t--)
	{
		cin >> n;
		vector<int> a(n);
		vector<int> b(n);
		i = 0;
		while(i < n)
			cin >> a[i++];
		i = 0;
		while(i < n)
		{
			cin >> b[i];
			if(a[i] < b[i])
			{
				tmp = b[i];
				b[i] = a[i];
				a[i] = tmp;
			}
			i++;
		}
		maxa = *max_element(a.begin(), a.end());
		maxb = *max_element(b.begin(), b.end());
		cout << maxa*maxb << endl;
	}

	
}
