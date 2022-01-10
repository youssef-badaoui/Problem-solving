#include <iostream>
using namespace std;

int main() 
{
	int a, n, i;
	i = 0;
	a = 0;
	char win;
	cin >> n;
	while(i++ < n)
	{
		cin >> win;
		if(win == 'A')
			a++;
		else
			a--;
	}
	if(a > 0)
	   cout << "Anton" << endl;
	else if(a < 0)
		cout << "Danik" << endl;
	else
		cout << "Friendship" << endl;
}

