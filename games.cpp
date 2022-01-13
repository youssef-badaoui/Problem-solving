#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int n,i = 0;
	int j = 0;
	int res = 0;
	cin >> n;
	vector<int>h(n);
	vector<int>g(n);

	while(i < n)
	{
		cin >> h[i] >> g[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		while(j < n)
		{
			if(h[i] == g[j])
				res++;
			j++;
		}
		i++;
		j = 0;
	}
	cout << res;
}


