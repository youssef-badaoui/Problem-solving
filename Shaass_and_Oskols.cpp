#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int i,n,m,x,y;
	cin >> n;
	i = 1;
	n += 2;
	vector<int>str(n);
	while(i < n - 1)
		cin >> str[i++];
	cin >> m;
	i = 0;
	while(i++ < m)
	{
		cin >> x >> y;
		str[x - 1] += y-1;
	  	str[x + 1] += str[x] - y;
		str[x] = 0;
	}
	i = 1;
	while(i < n - 1)
		cout << str[i++] << endl;
}
