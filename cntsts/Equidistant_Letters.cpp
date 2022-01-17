#include <iostream>
using namespace std;

int main() 
{
	int n;
	int i = 0;
	int j = 0;
	int e = 0;
	string str;
	cin >> n;
	while(i < n)
	{
		cin >> str;
		j = 0;
		while(str[j])
		{
			e = j;
			while(str[e])
			{
				if(str[e] == str[j] && e != j)
					cout << str[j];
				e++;
			}
			e = 0;
			while(str[e])
			{
				if(str[e] == str[j] && e < j && e != j)
					goto i;
				e++;
			}
			cout << str[j];

			i:j++;
		}
		cout << endl;
		i++;
	}
}	
