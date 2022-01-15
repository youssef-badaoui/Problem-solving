#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	int j,i,d,n,m,r,c;
	i =0;
	while(i < t)
	{
		int res = 0;
		j = 0;
		d = 0;
		cin >> n >> m >> r >> c;
		r = r -1;
		c = c - 1;  
		vector<vector<char> > vect(n,vector<char>(m , 0));
		while(j <  n)
		{
			while(d < m)
			{
				cin >> vect[j][d];
				if(vect[j][d] == 'B')
					res++;
				d++;
			}
			d = 0;
			j++;
		}
		if(res == 0)
		{
			cout << -1 << endl;
			goto i;
		}
		if(vect[r][c] == 'B')
		{
			cout << 0 << endl;
			goto i;
		}

		d = 0;
		while(d < m)
		{
			if(vect[r][d] == 'B')
			{
				cout << 1 << endl;
				goto i;
			}
			d++;
		}

		j = 0;
		while(j < n)
		{
			if(vect[j][c] == 'B')
			{
				cout << 1 << endl;
				goto i;
			}
			j++;
		}

		cout << 2 << endl;

		i:i++;
	}
}
