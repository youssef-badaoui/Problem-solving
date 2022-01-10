#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int main() 
{
	int  i = 0;
	string s1 ,s2;
	cin >> s1 >> s2;
	while(s1[i])
	{
		s1[i] = toupper(s1[i]);
		s2[i] = toupper(s2[i]);
		if(s1[i] > s2[i])
		{
			cout << 1;
			break;
		}
		else if(s1[i] < s2[i])
		{
			cout << -1;
			break;
		}
		i++;
	}
	if(s1[i] == s2[i])
		cout << 0;
}
