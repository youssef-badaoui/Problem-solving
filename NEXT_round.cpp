#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,k;
	vector <int> str(n);
	cin >> n >> k;
	int i = 0;
	int res = 0;
	while(i < n)
		cin >> str[i++];
	while(i > 0)
	{
		if(str[--i] >= str[k-1] && str[i] != 0)
			res++;
	}
	cout << res;
}
