#include <iostream>
#include <cctype>
#include <stdio.h>
#include <string>
#include <string.h>
#include <cstring>
using namespace std;

int main() 
{
	int i =0;
	int low = 0;
	int up = 0;
	string str;

	cin >> str;
	while(str[i])
	{
		if(str[i] >= 'a')
			low++;
		else 
			up++;
		i++;
	}
	i = 0;
	while(str[i])
	{
		if(up <= low)
			str[i] = tolower(str[i]);
		else
			str[i] = toupper(str[i]);
		i++;
	}
	cout << str << endl;
}
