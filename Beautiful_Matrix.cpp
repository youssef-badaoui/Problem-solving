#include <iostream>
using namespace std;

int main()
{
	int col, row, n;
	n = 0;
	col = 1;
	row = 1;
	while(n != 1)
	{
		cin >> n;
		col++;
		if(col == 5)
		{
			row++;
			col = 0;
		}
	}
	cout << col<< endl;
	cout << row<< endl;
	cout << 2-(max(col,5) - min(col,5)) + 2-(max(row ,5) - min(row,5)) << endl;
}
