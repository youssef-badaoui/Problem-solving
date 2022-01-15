#include <vector>
#include <iostream>
using namespace std;

int main() 
{
	int i = 0;
	int res = 0;
	int j;

	vector<int> str(4);
	while(i < 4)
	{
		cin >> str[i];
		j = i;
		while(--j >= 0)
		{
			if(str[i] == str[j])
			{
				res++;
				break;
			}
		}
				
		i++;
	}
	cout << res;
}

