#include <iostream>
#include <string.h>
#include  <cstring>
using namespace std;

int main() 
{
	string str;
	int k,i;
	k = 0;
	i = 0;
	cin >> str;
	char stk[100]="";
	while(str[i])
	{
		if(strchr(stk,str[i]) == 0)
		{
			stk[k] = str[i];
			k++;
		}
		i++;
	}
	if(k%2 == 0)
		cout << "CHAT WITH HER!";
	else 
		cout << "IGNORE HIM!";

}
