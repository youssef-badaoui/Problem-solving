#include <iostream>
using namespace std;

int main() 
{
	int l,b,year;
	cin >> l >> b;
	year = 0;
	while(l <= b)
	{
		l = l * 3;
		b = b * 2;
		year++;
	}
	cout << year << endl;
}
