#include<iostream>
#include <string.h>
using namespace std;

int	main(void)
{
	string str;
	int	count;
	char tab[100] = "";
	cin >> str;

	count  = 0;
	for(int i = 0; str[i]; i++)
	{
		if (!strchr(tab, str[i]))
		{
			tab[count] = str[i];
			count++;
		}
	}
	if (count % 2 == 0)
		cout << "CHAT WITH HER!" << "\n";
	else
		cout << "IGNORE HIM!" << "\n";
}
