#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	char c;
	int res = 0;
	int i = 1;
	cin >> n;
	vector<char>str(n + 1);
	str[0] = 'x';
	while(i <= n)
		cin >> str[i++];
	i = 1;
	while(i <= n)
	{
		if(str[i] == str[i-1])
			res++;
		i++;
	}
	cout << res;
}		
