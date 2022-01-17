#include <iostream>
using namespace std;

int main() 
{
	int n;
	string str;
	int len;
	int i = 0;
	cin >> n;
	while(n > 0)
	{
		cin >> str;
		len = str.length();
		while(len > 1)
		{
			if((str[len] + str[len - 1]) >= 10)
			{
				while(i < len)
				{
					cout << str[i];
					i++;
				}
				cout << str[len] + str[len-1];
				break;
			}
			len--;
		}
		cout <<"........................................";
		i = 0;
		while(str[i])
		{
			if(str[i + 1] > 0)
			{
				cout << str[i] + str[i+1];
				i++;
				while(i < str.length())
				{
					cout << str[i];
					i++;	
				}
			}
			i++;
		}
		n--;
	}

}
