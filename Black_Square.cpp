#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int i = 0;
	int res = 0;
	char c = 1;
	string pos;
	vector<int>str(4);
	while(i < 4)
		cin >> str[i++];
	cin >> pos;
	i = 0;
	while(pos[i]!= 0)
	{
		c = pos[i] - 48;
		res += str[c-1];
		i++;
	}
	cout << res;
}	


