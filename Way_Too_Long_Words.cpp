#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	int n, len;
	len = 0;
	cin >> n;
	string str;
	while(n > 0)
	{
		cin >> str;
			 while(str[len] != 0)
			 len++;
		 if(len <= 10)
		 {
			 cout << str <<endl;
			 goto A;
		 }
		 cout << str[0];
		cout << len-2;	
		cout << str[len-1] << endl;
		len = 0;
		A:n--;
	}
}
