#include <iostream>
using namespace std;

int main()
{
	int col, row, n;
	n = 0; col = 0; row = 0;
	while(n != 1)
	{
		cin >> n;
		col++;
		if(col == 6)
			col = 1;
		if(col == 1)
			row++;
	}
	cout << abs(3- col) + abs(3-row) << endl;
}
